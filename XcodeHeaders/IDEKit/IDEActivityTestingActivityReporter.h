/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEActivityReporter.h>

@interface IDEActivityTestingActivityReporter : IDEActivityReporter
{
}

+ (id)activityTests;
+ (void)initialize;
- (id)initWithWorkspace:(id)arg1;
- (void)removeActivityReports:(id)arg1;
- (void)runTestFromNotification:(id)arg1;
- (void)stopTestingAllActivities:(id)arg1;
- (void)testDeterminateActivities;
- (void)testIndeterminateActivities;
- (void)testInstallActionActivity;
- (void)testNewAndCompletedNonUserInitiatedTasksActivity;
- (void)testNewAndCompletedUserInitiatedTasksActivity;
- (void)testShowingDeterminateActivityBar;

@end

