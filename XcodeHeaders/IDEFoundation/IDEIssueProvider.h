/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTExtension, DVTStackBacktrace, IDEIssueManager, IDEIssueProviderSession, NSString;

@interface IDEIssueProvider : NSObject <DVTInvalidation>
{
    IDEIssueManager *_issueManager;
    DVTExtension *_extension;
    IDEIssueProviderSession *_session;
}

+ (void)initialize;
+ (int)providerType;
- (void).cxx_destruct;
@property(readonly) BOOL _filterIssuesByActiveScheme;
@property(retain) IDEIssueProviderSession *_session; // @synthesize _session;
- (id)activityLogRecordForIssue:(id)arg1;
- (void)addIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
- (BOOL)allowsExistingIssuesToBeCoalesced;
- (BOOL)allowsNewIssuesToBeCoalesced;
@property(readonly, copy) NSString *description;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)endProviderSession;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (id)init;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
@property(retain) IDEIssueManager *issueManager; // @synthesize issueManager=_issueManager;
- (id)logDocumentLocationForIssue:(id)arg1;
- (void)primitiveInvalidate;
- (void)removeIssues:(id)arg1 forProviderContext:(id)arg2;
- (void)setIssues:(id)arg1 forProviderContext:(id)arg2 container:(id)arg3 blueprint:(id)arg4;
- (void)startProviderSession;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

