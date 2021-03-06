/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEIssueProvider.h>

@class DVTObservingToken, IDEWorkspace, NSDictionary;

@interface IDESourceControlIssueProvider : IDEIssueProvider
{
    IDEWorkspace *_workspace;
    DVTObservingToken *_scmMonitorObservingToken;
    id _didUpdateServerStatusNotificationToken;
    id _didUpdateLocalStatusNotificationToken;
    NSDictionary *_localizedStrings;
}

+ (id)_issueScanningQueue;
- (void).cxx_destruct;
- (void)_generateLocalizedStrings;
- (id)_issueTypeIdentifierForStatus:(int)arg1;
- (id)_issuesForItemWithStatus:(id)arg1;
- (id)_localizedStringForKey:(id)arg1;
- (id)_locationsOfTextualConflictsAtPath:(id)arg1;
- (void)_scanForIssues;
- (void)_setUpSourceControlObserving;
- (id)_shortMessageForItem:(id)arg1;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (void)primitiveInvalidate;

@end

