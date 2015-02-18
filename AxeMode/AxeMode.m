//
//  AxeMode.m
//  AxeMode
//
//  Created by Eloy Durán on 17/02/15.
//  Copyright (c) 2015 SuperAlloy. All rights reserved.
//

#import "AxeMode.h"

@interface DVTDocumentLocation : NSObject
@property(readonly) NSURL *documentURL;
@end

@interface IDEActivityLogSection : NSObject
@property(readonly) unsigned long long totalNumberOfErrors;
@property(readonly) NSArray *subsections;
@property(readonly) NSString *text;
@property(readonly) DVTDocumentLocation *location;
// TODO use this instead?
- (id)enumerateSubsectionsRecursivelyUsingPreorderBlock:(id)arg1;
@end

@interface IDEScheme : NSObject
@property(readonly) NSString *name;
@end

@interface IDERunDestination : NSObject
@end

@interface IDERunContextManager : NSObject
@property(retain, nonatomic) IDEScheme *activeRunContext;
@property(retain, nonatomic) IDERunDestination *activeRunDestination;
@end

//@interface IDEWorkspace : IDEXMLPackageContainer
@interface IDEWorkspace : NSObject
@property(readonly) IDERunContextManager *runContextManager;
@end

@interface IDEWorkspaceArena : NSObject
@property(readonly) IDEWorkspace *workspace;
@end

@interface IDEExecutionEnvironment : NSObject
@property(readonly) IDEActivityLogSection *latestBuildLog;
@property(readonly) IDEWorkspaceArena *workspaceArena;
@end

@interface IDESchemeCommand : NSObject
+ (instancetype)launchSchemeCommand;
@end

static AxeMode *sharedPlugin;

@interface AxeMode()

@property (nonatomic, strong, readwrite) NSBundle *bundle;
@end

@implementation AxeMode

+ (void)pluginDidLoad:(NSBundle *)plugin
{
    static dispatch_once_t onceToken;
    NSString *currentApplicationName = [[NSBundle mainBundle] infoDictionary][@"CFBundleName"];
    if ([currentApplicationName isEqual:@"Xcode"]) {
        dispatch_once(&onceToken, ^{
            sharedPlugin = [[self alloc] initWithBundle:plugin];
        });
    }
}

+ (instancetype)sharedPlugin
{
    return sharedPlugin;
}

- (id)initWithBundle:(NSBundle *)plugin
{
    if (self = [super init]) {
        self.bundle = plugin;
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(didFinishBuild:) name:@"ExecutionEnvironmentLastUserInitiatedBuildCompletedNotification" object:nil];
    }
    return self;
}

static NSArray *
FindFailureLogSections(IDEActivityLogSection *section) {
  NSMutableArray *sections = [NSMutableArray new];
  if (section.totalNumberOfErrors > 0) {
    if (section.subsections) {
      for (IDEActivityLogSection *subsection in section.subsections) {
        [sections addObjectsFromArray:FindFailureLogSections(subsection)];
      }
    } else {
      [sections addObject:section];
    }
  }
  return sections;
}

- (void)didFinishBuild:(NSNotification *)notification
{
  IDEExecutionEnvironment *environment = (IDEExecutionEnvironment *)notification.object;
  IDEActivityLogSection *log = environment.latestBuildLog;
  NSArray *failures = FindFailureLogSections(log);
  
  BOOL shouldRebuild = failures.count > 0;
  
  for (IDEActivityLogSection *failure in failures) {
    static NSRegularExpression *regex = nil;
    if (regex == nil) {
      NSError *error = NULL;
      regex = [NSRegularExpression regularExpressionWithPattern:@"has been modified since the precompiled header '(.+?\\.pch)'"
                                                        options:0
                                                          error:&error];
    }
    
    NSString *text = failure.text;
    NSTextCheckingResult *match = [regex firstMatchInString:text options:0 range:NSMakeRange(0, text.length)];
    if (match) {
      shouldRebuild &= YES;
      NSString *pch = [text substringWithRange:[match rangeAtIndex:1]];
      NSLog(@"DELETE: %@", pch);
//      if (![[NSFileManager defaultManager] removeItemAtPath:pch error:&error]) {
//        NSLog(@"Failed :(");
//      }
      
    } else {
      shouldRebuild = NO;
    }
    
    if (shouldRebuild) {
      IDERunContextManager *contextManager = environment.workspaceArena.workspace.runContextManager;
      IDEScheme *scheme = contextManager.activeRunContext;
      NSString *action = [NSString stringWithFormat:@"Build \"%@\"", scheme.name];
      IDERunDestination *destination = contextManager.activeRunDestination;
      IDESchemeCommand *command = [IDESchemeCommand launchSchemeCommand];
      [command _performSchemeTask:0x2 onScheme:var_38 runDestination:r14 command:r12 commandName:r13 buildCommand:0x0 filePath:0x0 overridingTestingSpecifiers:0x0 invocationRecord:0x0 completionBlock:];
    }
  }
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

@end
