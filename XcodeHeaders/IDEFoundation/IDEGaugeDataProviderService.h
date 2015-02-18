/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTDeviceService.h"

@class DVTMutableOrderedDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface IDEGaugeDataProviderService : DVTDeviceService
{
    DVTMutableOrderedDictionary *_coordinatorsByPID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _suspended;
}

+ (id)capability;
+ (id)observableAttributes;
- (void).cxx_destruct;
- (void)addAssociatedQueryCoordinator:(id)arg1;
- (void)dealloc;
- (void)didPauseSampling;
- (void)didStopSampling;
- (id)initForDevice:(id)arg1 extension:(id)arg2 capability:(id)arg3;
- (void)pauseSampling;
- (void)pauseTimer;
- (void)performServiceQueueBlock:(id)arg1;
- (void)removeAssociatedQueryCoordinator:(id)arg1;
- (void)resumeSampling;
- (void)resumeTimer;
- (id)sampleAttributes:(id)arg1 forPIDs:(id)arg2;
- (void)startSamplingAtTime:(double)arg1 withInterval:(double)arg2;
- (void)startTimerAtTime:(double)arg1 withInterval:(double)arg2;
- (void)stopSampling;
- (void)stopTimer;
- (void)willResumeSampling;
- (void)willStartSamplingAtTime:(double)arg1 withInterval:(double)arg2;

@end

