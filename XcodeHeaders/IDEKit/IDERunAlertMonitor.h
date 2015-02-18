/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEWorkspaceTabController, NSString;

@interface IDERunAlertMonitor : NSObject <DVTInvalidation>
{
    IDEWorkspaceTabController *_workspaceTabController;
    id _currentLaunchSessionStateNotificationObserver;
    id _currentLaunchSessionTargetOutputNotificationObserver;
    id _pgoGenerationSucceededNotificationObserver;
    id _pgoGenerationFailedNotificationObserver;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)_createInternalHideIfNoOutputAlertForRunCompleteEvent:(id)arg1;
- (BOOL)_hasDeterminedOutput;
- (BOOL)_hasDoneExecutionStarted;
- (BOOL)_hasDoneExecutionStopped;
- (void)_runEvent:(id)arg1 inWorkspace:(id)arg2 modifyContext:(id)arg3;
- (void)_setHasDeterminedOutput:(id)arg1;
- (void)_setHasDoneExecutionStarted;
- (void)_setHasDoneExecutionStopped;
- (BOOL)_targetHasOutput:(id)arg1;
- (void)_targetOutputStateChanged;
- (void)executionComplete;
- (void)executionStart;
- (id)initWithWorkspaceTabController:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

