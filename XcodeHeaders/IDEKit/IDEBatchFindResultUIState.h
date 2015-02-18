/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEBatchFindQuery, IDENavigableItemCoordinator, NSString;

@interface IDEBatchFindResultUIState : NSObject <DVTInvalidation>
{
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDEBatchFindQuery *_query;
    long long _resultGroupIndex;
    long long _resultIndex;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 navigableItemCoordinator:(id)arg2;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
- (void)primitiveInvalidate;
@property(retain) IDEBatchFindQuery *query; // @synthesize query=_query;
@property long long resultGroupIndex; // @synthesize resultGroupIndex=_resultGroupIndex;
@property long long resultIndex; // @synthesize resultIndex=_resultIndex;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

