/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEActivityReporter.h>

@class DVTNotificationToken, DVTObservingToken, IDEActivityReport, NSImage;

@interface IDESCMActivityReporter : IDEActivityReporter
{
    NSImage *_scmImage;
    id _fileIOCoordinatorBlock;
    IDEActivityReport *_workspaceScanActivityReport;
    IDEActivityReport *_scmUpdateStatusReport;
    IDEActivityReport *_exportFilesActivityReport;
    IDEActivityReport *_blameActivityReport;
    IDEActivityReport *_logActivityReport;
    IDEActivityReport *_commitPushPullUpdateMergeActivityReport;
    IDEActivityReport *_switchBranchActivityReport;
    IDEActivityReport *_upgradeActivityReport;
    IDEActivityReport *_createGitRepoReport;
    IDEActivityReport *_scmPrepareToUpdatePushPullMergeReport;
    DVTNotificationToken *_willScanToken;
    DVTNotificationToken *_didScanToken;
    DVTNotificationToken *_willUpdateToken;
    DVTNotificationToken *_didUpdateToken;
    DVTNotificationToken *_willCommitToken;
    DVTNotificationToken *_didCommitToken;
    DVTNotificationToken *_willMergeToken;
    DVTNotificationToken *_didMergeToken;
    DVTNotificationToken *_willSwitchToken;
    DVTNotificationToken *_didSwitchToken;
    DVTNotificationToken *_willUpdateServerStatusToken;
    DVTNotificationToken *_didUpdateServerStatusToken;
    DVTNotificationToken *_willExportVersionsToken;
    DVTNotificationToken *_didExportVersionsToken;
    DVTNotificationToken *_willBlameToken;
    DVTNotificationToken *_didBlameToken;
    DVTNotificationToken *_willLogToken;
    DVTNotificationToken *_didLogToken;
    DVTNotificationToken *_willUpgradeToken;
    DVTNotificationToken *_didUpgradeToken;
    DVTNotificationToken *_willPrepareToMergeToken;
    DVTNotificationToken *_didPrepareToMergeToken;
    DVTNotificationToken *_willPrepareToUpdateToken;
    DVTNotificationToken *_didPrepareToUpdateToken;
    DVTNotificationToken *_willPrepareToPullToken;
    DVTNotificationToken *_didPrepareToPullToken;
    DVTNotificationToken *_willPrepareToPushToken;
    DVTNotificationToken *_didPrepareToPushToken;
    DVTNotificationToken *_willCreateGitRepoToken;
    DVTNotificationToken *_willPushToXcodeServerToken;
    DVTNotificationToken *_didCreateGitRepoToken;
    DVTObservingToken *_scmMonitorObservingToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)createWorkspaceScanningActivityReport;
- (id)initWithWorkspace:(id)arg1;
- (void)primitiveInvalidate;
- (void)publishActivityReport:(id)arg1;
@property(retain) DVTObservingToken *scmMonitorObservingToken; // @synthesize scmMonitorObservingToken=_scmMonitorObservingToken;
- (void)setUpSCMObserving;

@end

