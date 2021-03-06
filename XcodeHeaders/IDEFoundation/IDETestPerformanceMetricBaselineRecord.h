/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSString;

@interface IDETestPerformanceMetricBaselineRecord : NSObject
{
    NSString *_baselineDisplayName;
    NSNumber *_average;
    NSNumber *_maxPercentRegression;
    NSNumber *_maxPercentImprovement;
    NSNumber *_maxPercentRelativeStandardDeviation;
    NSNumber *_maxRegression;
    NSNumber *_maxStandardDeviation;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSNumber *average; // @synthesize average=_average;
@property(readonly) NSString *baselineDisplayName; // @synthesize baselineDisplayName=_baselineDisplayName;
- (id)init;
- (id)initWithBaselineDisplayName:(id)arg1 average:(id)arg2 maxPercentRegression:(id)arg3 maxPercentImprovement:(id)arg4 maxPercentRelativeStandardDeviation:(id)arg5 maxRegression:(id)arg6 maxStandardDeviation:(id)arg7;
@property(readonly) NSNumber *maxPercentImprovement; // @synthesize maxPercentImprovement=_maxPercentImprovement;
@property(readonly) NSNumber *maxPercentRegression; // @synthesize maxPercentRegression=_maxPercentRegression;
@property(readonly) NSNumber *maxPercentRelativeStandardDeviation; // @synthesize maxPercentRelativeStandardDeviation=_maxPercentRelativeStandardDeviation;
@property(readonly) NSNumber *maxRegression; // @synthesize maxRegression=_maxRegression;
@property(readonly) NSNumber *maxStandardDeviation; // @synthesize maxStandardDeviation=_maxStandardDeviation;

@end

