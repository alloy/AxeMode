/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEDeviceAppDataReference, IDELocationScenarioReference, NSArray, NSMutableArray;

@protocol IDETestingSpecifier <NSObject>
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference;
@property(retain) IDELocationScenarioReference *locationScenarioReference;
@property(readonly) NSMutableArray *mutableSkippedTests;
@property BOOL skipped;
@property(copy) NSArray *skippedTests;
- (id)testable;
@end

