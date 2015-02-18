//
//  AxeMode.m
//  AxeMode
//
//  Created by Eloy Durán on 17/02/15.
//  Copyright (c) 2015 SuperAlloy. All rights reserved.
//

#import "AxeMode.h"

@interface IDEActivityLogSection : NSObject
@property(readonly) unsigned long long totalNumberOfErrors;
@property(readonly) NSArray *subsections;
@property(readonly) NSString *text;
// TODO use this instead?
- (id)enumerateSubsectionsRecursivelyUsingPreorderBlock:(id)arg1;
@end

@interface IDEExecutionEnvironment : NSObject
@property(readonly) IDEActivityLogSection *latestBuildLog;
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
    }
  }
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

@end
