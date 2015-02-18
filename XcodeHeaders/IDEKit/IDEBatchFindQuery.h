/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "DVTProgressReporting.h"

@class DVTDispatchLock, DVTPerformanceMetric, DVTStackBacktrace, IDEBatchFindCriteria, IDEBatchFindResultSet, IDEWorkspace, NSDate, NSOperationQueue, NSString;

@interface IDEBatchFindQuery : NSObject <DVTProgressReporting, DVTInvalidation>
{
    IDEWorkspace *_workspace;
    DVTDispatchLock *_queueLock;
    DVTDispatchLock *_stateLock;
    NSOperationQueue *_backgroundQueue;
    NSOperationQueue *_findQueue;
    NSDate *_startDate;
    NSDate *_completeDate;
    IDEBatchFindResultSet *_resultSet;
    long long _progress;
    int _state;
    DVTPerformanceMetric *_performanceMetric;
    id <IDEClientTrackingToken> _clientTrackingToken;
}

+ (unsigned long long)_backgroundQueueMaxWidth;
+ (void)initialize;
+ (id)newQueryWithCriteria:(id)arg1 forWorkspace:(id)arg2 inController:(id)arg3;
- (void).cxx_destruct;
- (void)_transitionToCancelledState;
- (void)_transitionToExecutingState;
- (void)_transitionToFinishedState;
- (void)addOperation:(id)arg1 toQueue:(int)arg2;
- (void)cancel;
@property(readonly) IDEBatchFindCriteria *criteria;
@property(readonly) unsigned long long findQueueOperationCount;
- (id)initWithSearchCriteria:(id)arg1 forWorkspace:(id)arg2 inController:(id)arg3;
@property(readonly) BOOL isCancelled;
@property(readonly) BOOL isComplete;
@property(readonly) BOOL isRunning;
@property(readonly) DVTPerformanceMetric *performanceMetric;
- (void)primitiveInvalidate;
@property long long progress; // @synthesize progress=_progress;
@property(readonly) IDEBatchFindResultSet *resultSet; // @synthesize resultSet=_resultSet;
@property int state; // @synthesize state=_state;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)setup;
@property(readonly) BOOL shouldDisplayNotification;
- (void)start;
- (void)throttleBackgroundQueueWidthByFactor:(double)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

