/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface IDEIndexingJobScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_control_queue;
    long long _width;
    long long _lastThrottledWidth;
    BOOL _onBatteryPower;
    NSString *_buildCommandRunning;
    double _timeBatteryChecked;
    double _timeBuildCommandsChecked;
    NSMutableArray *_engines;
    NSMutableDictionary *_hotFilesByEngine;
    NSMutableDictionary *_hotFileIndicesByEngine;
    NSMutableDictionary *_priorityIndicesByEngine;
    NSMutableDictionary *_waitingJobsByEngine;
    NSMutableArray *_runningJobs;
    id _buildNotifications[2];
    long long _nBuildOperations;
}

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)_adjustThrottledWidth:(long long)arg1;
- (void)_checkBuildCommands;
- (void)_scheduleJobs;
- (long long)_throttledWidth;
- (void)addHotFile:(id)arg1 forEngine:(id)arg2;
- (void)cancelJobsForEngine:(id)arg1;
- (void)clearHotFilesForEngine:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)ping;
- (void)reportThrottledWidth:(id)arg1 forEngine:(void)arg2;
- (void)scheduleJob:(id)arg1;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;

@end
