/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTPerformanceMetric, NSString;

@interface IDEIndexDataSource : NSObject
{
    DVTPerformanceMetric *_generatorMetric;
    NSString *_source;
}

+ (id)builtinClassResolution;
+ (const char *)builtinClassResolutionCString;
+ (id)builtinIdResolution;
+ (const char *)builtinIdResolutionCString;
+ (id)builtinVoidResolution;
+ (const char *)builtinVoidResolutionCString;
+ (id)dataSourceVersion;
- (void).cxx_destruct;
- (BOOL)generateDataForJob:(id)arg1;
@property(retain, nonatomic) DVTPerformanceMetric *generatorMetric; // @synthesize generatorMetric=_generatorMetric;
- (id)initWithSource:(id)arg1;
- (BOOL)processJob:(id)arg1;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;

@end

