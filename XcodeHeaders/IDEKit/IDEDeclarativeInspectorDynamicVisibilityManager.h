/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDelayedInvocation, DVTStackBacktrace, IDEInspectorLayoutGroup, NSMutableArray, NSMutableOrderedSet, NSObject<IDEBindableDeclarativeInspectorController>, NSString;

@interface IDEDeclarativeInspectorDynamicVisibilityManager : NSObject <DVTInvalidation>
{
    NSObject<IDEBindableDeclarativeInspectorController> *_owner;
    DVTDelayedInvocation *_refreshInvocation;
    NSMutableArray *_orderedGroups;
    NSMutableOrderedSet *_pendingRefreshBlocks;
    IDEInspectorLayoutGroup *_layoutGroup;
    NSMutableArray *_observations;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithInspectorLayoutGroup:(id)arg1 owner:(id)arg2;
- (void)installSubgroup:(id)arg1;
- (BOOL)isSubgroupVisible:(id)arg1;
- (void)primitiveInvalidate;
- (void)refresh;
- (void)refreshIfNeeded;
- (void)registerSubgroup:(id)arg1 forKeyPaths:(id)arg2;
- (BOOL)shouldSubgroupWithKeyPathBeVisible:(id)arg1;
- (BOOL)shouldSubgroupWithKeyPathsBeVisible:(id)arg1;
- (void)triggerRefresh;
- (void)uninstallSubgroup:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

