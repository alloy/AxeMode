/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEAppStatistics : NSObject
{
}

+ (id)_diskTypeFor:(struct __DADisk *)arg1 withDiskManager:(id)arg2;
+ (id)_diskTypes;
+ (unsigned long long)_totalRam;
+ (unsigned long long)memInUse;
+ (void)performAppReportWithStartupDuration:(double)arg1;
+ (void)recordAppAboutToShutdown;
+ (void)recordAppDidShutdown:(id)arg1;
+ (void)recordAppUsedGPUDebugger;
+ (void)recordDocDownloadInteraction:(id)arg1;
+ (void)scheduleAppReportWithStartTime:(double)arg1;

@end

