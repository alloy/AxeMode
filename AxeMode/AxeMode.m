//
//  AxeMode.m
//  AxeMode
//
//  Created by Eloy Durán on 17/02/15.
//  Copyright (c) 2015 SuperAlloy. All rights reserved.
//

#import "AxeMode.h"
#import <Carbon/Carbon.h> // For <HIToolbox/Events.h>

@interface IDEActivityLogSection : NSObject
@property(readonly) unsigned long long totalNumberOfErrors;
@property(readonly) NSArray *subsections;
@property(readonly) NSString *text;
// TODO use this instead?
- (id)enumerateSubsectionsRecursivelyUsingPreorderBlock:(id)arg1;
@end

//@interface IDEWorkspace : IDEXMLPackageContainer
@interface IDEWorkspace : NSObject
@end

@interface IDEWorkspaceArena : NSObject
@property(readonly) IDEWorkspace *workspace;
@end

@interface IDEExecutionEnvironment : NSObject
@property(readonly) IDEActivityLogSection *latestBuildLog;
@property(readonly) IDEWorkspaceArena *workspaceArena;
@end

@interface IDEWorkspaceDocument : NSDocument
@property(readonly) IDEWorkspace *workspace;
@end

@interface IDEDocumentController : NSDocumentController
+ (IDEWorkspaceDocument *)workspaceDocumentForWorkspace:(IDEWorkspace *)workspace;
@end

// @interface IDEWorkspaceTabController : IDEViewController
@interface IDEWorkspaceTabController : NSObject
- (void)buildActiveRunContext:(id)sender;
@end

@interface IDEWorkspaceWindowController : NSWindowController
@property(readonly) IDEWorkspaceTabController *activeWorkspaceTabController;
@end

static AxeMode *sharedPlugin;

@interface AxeMode () <NSUserNotificationCenterDelegate>
@property (nonatomic, strong, readwrite) NSBundle *bundle;
@property (nonatomic, strong, readwrite) id <NSUserNotificationCenterDelegate>userNotificationCenterDelegate;
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

- (void)dealloc;
{
  [[NSNotificationCenter defaultCenter] removeObserver:self];
  [NSUserNotificationCenter defaultUserNotificationCenter].delegate = self.userNotificationCenterDelegate;
}

- (id)initWithBundle:(NSBundle *)plugin
{
  if ((self = [super init])) {
        self.bundle = plugin;
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(didFinishBuild:)
                                                 name:@"ExecutionEnvironmentLastUserInitiatedBuildCompletedNotification"
                                               object:nil];
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

  if (failures.count > 0) {
    BOOL shouldRebuild = YES;

    for (IDEActivityLogSection *failure in failures) {
      static NSRegularExpression *regex = nil;
      if (regex == nil) {
        NSError *error = NULL;
        regex = [NSRegularExpression regularExpressionWithPattern:@"has been modified since the precompiled header '(.+?\\.pch)'"
                                                          options:0
                                                            error:&error];
        if (error) {
          // fail
          NSLog(@"%@", error);
          return;
        }
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
        [self postPCHRemovedNotification:pch];
      } else {
        // There are other types of failures, so the user will have to resolve those.
        shouldRebuild = NO;
      }
    }

    if (shouldRebuild) {
      if (![self triggerRebuild:environment]) {
        // fail
        return;
      }
    }
  }
}

- (void)postPCHRemovedNotification:(NSString *)pch;
{
  // TODO Assign AxeMode icon https://github.com/alloy/terminal-notifier/blob/3c0d7312c1e54cbdc309988c5f42c35b33807bb5/Terminal%20Notifier/AppDelegate.m#L260-L264
  NSUserNotification *notification = [NSUserNotification new];
  notification.title = @"AxeMode enabled";
  notification.subtitle = @"Remove precompiled header";
  notification.informativeText = [pch lastPathComponent];
  notification.userInfo = @{ @"AxeModeNotification":@(YES) };

  NSUserNotificationCenter *notificationCenter = [NSUserNotificationCenter defaultUserNotificationCenter];
  // Hijack NSUserNotificationCenter delegate.
  // Xcode lazily assigns its own delegate, so always re-check.
  if (notificationCenter.delegate != self) {
    self.userNotificationCenterDelegate = notificationCenter.delegate;
    notificationCenter.delegate = self;
  }
  [notificationCenter scheduleNotification:notification];
}

- (BOOL)userNotificationCenter:(NSUserNotificationCenter *)center shouldPresentNotification:(NSUserNotification *)notification;
{
  if ([notification.userInfo[@"AxeModeNotification"] boolValue]) {
    // Always show our notification, even when Xcode is the active application, otherwise the user
    // might not understand why a rebuild is triggered.
    return YES;
  } else {
    if ([self.userNotificationCenterDelegate respondsToSelector:@selector(userNotificationCenter:shouldPresentNotification:)]) {
      return [self.userNotificationCenterDelegate userNotificationCenter:center shouldPresentNotification:notification];
    }
  }
  // I guess defaulting to show is better than not?
  return YES;
}

- (void)userNotificationCenter:(NSUserNotificationCenter *)center didDeliverNotification:(NSUserNotification *)notification;
{
  if ([self.userNotificationCenterDelegate respondsToSelector:@selector(userNotificationCenter:didDeliverNotification:)]) {
    [self.userNotificationCenterDelegate userNotificationCenter:center didDeliverNotification:notification];
  }
}

- (void)userNotificationCenter:(NSUserNotificationCenter *)center didActivateNotification:(NSUserNotification *)notification;
{
  if ([self.userNotificationCenterDelegate respondsToSelector:@selector(userNotificationCenter:didActivateNotification:)]) {
    [self.userNotificationCenterDelegate userNotificationCenter:center didActivateNotification:notification];
  }
}

#if 1

// (lldb) p (SEL)[[[[[[NSApplication sharedApplication] mainMenu] itemWithTitle:@"Product"] submenu] itemWithTitle:@"Build"] action]
// (SEL) $4 = "buildActiveRunContext:"
//
- (BOOL)triggerRebuild:(IDEExecutionEnvironment *)environment;
{
  IDEWorkspace *currentWorkspace = environment.workspaceArena.workspace;
  IDEWorkspaceDocument *currentDocument = [NSClassFromString(@"IDEDocumentController") workspaceDocumentForWorkspace:currentWorkspace];

  if (currentDocument) {
    IDEWorkspaceWindowController *windowController = [currentDocument.windowControllers firstObject];
    IDEWorkspaceTabController *workspaceTabController = windowController.activeWorkspaceTabController;
    if (workspaceTabController) {
      [workspaceTabController buildActiveRunContext:nil];
      return YES;
    } else {
      // fail
      NSLog(@"No workspaceTabController found");
    }
  } else {
    // fail
    NSLog(@"No document found");
  }
  return NO;
}

#else

- (void)triggerRebuild:(IDEExecutionEnvironment *)environment;
{
  IDEWorkspace *currentWorkspace = environment.workspaceArena.workspace;
  IDEWorkspaceDocument *currentDocument = [IDEDocumentController workspaceDocumentForWorkspace:currentWorkspace];

  if (currentDocument) {
    NSWindowController *windowController = [currentDocument.windowControllers firstObject];
    NSWindow *window = windowController.window;
    if (window) {
      [self simulateKeyCommand:@"b" keyCode:kVK_ANSI_B inWindow:window];
    } else {
      // fail
      NSLog(@"No window(controller) found");
      return;
    }
  } else {
    // fail
    NSLog(@"No document found");
    return;
  }
}

- (void)simulateKeyCommand:(NSString *)character keyCode:(unsigned short)keyCode inWindow:(NSWindow *)window;
{
  dispatch_after(dispatch_time(DISPATCH_TIME_NOW, 5 * NSEC_PER_SEC), dispatch_get_main_queue(), ^{
    [self postKeyEventWithType:NSKeyDown character:character keyCode:keyCode inWindow:window];
    [self postKeyEventWithType:NSKeyUp character:character keyCode:keyCode inWindow:window];
  });
}

- (void)postKeyEventWithType:(NSEventType)eventType character:(NSString *)character keyCode:(unsigned short)keyCode inWindow:(NSWindow *)window;
{
  NSEvent *event = [NSEvent keyEventWithType:eventType
                                    location:NSZeroPoint
                               modifierFlags:NSCommandKeyMask
                                   timestamp:[NSDate timeIntervalSinceReferenceDate]
                                windowNumber:window.windowNumber
                                     context:[NSGraphicsContext currentContext]
                                  characters:character
                 charactersIgnoringModifiers:character
                                   isARepeat:NO
                                     keyCode:keyCode];
  NSLog(@"%@", event);
  [window sendEvent:event];
  // [NSApp postEvent:event atStart:YES];
}
#endif

@end
