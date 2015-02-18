/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface IDETestBundleBaselineRecord : NSObject
{
    NSMutableDictionary *_infoDict;
    NSMutableDictionary *_baselinesByRunDestinationUUIDDict;
}

+ (id)_baselineRecordFilePathInBundleBaselineWithFilePath:(id)arg1 withRunDestinationRecord:(id)arg2 createIfNecessary:(BOOL)arg3 workspace:(id)arg4 versionedFileManager:(id)arg5 error:(id *)arg6;
+ (id)_baselineRecordFilePathInBundleBaselineWithFilePath:(id)arg1 withRunDestinationRecord:(id)arg2 error:(id *)arg3;
+ (id)_baselineRecordForBlueprint:(id)arg1 withRunDestinationRecord:(id)arg2 createIfNecessary:(BOOL)arg3 versionedFileManager:(id)arg4 filePath:(id *)arg5 error:(id *)arg6;
+ (BOOL)_validatePropertyList:(id)arg1 errorString:(id *)arg2;
+ (id)baselineRecordForBlueprint:(id)arg1 withRunDestinationRecord:(id)arg2 createIfNecessary:(BOOL)arg3 versionedFileManager:(id)arg4 filePath:(id *)arg5 error:(id *)arg6;
+ (id)baselineRecordForBlueprint:(id)arg1 withRunDestinationRecord:(id)arg2 filePath:(id *)arg3 error:(id *)arg4;
+ (void)initialize;
- (void).cxx_destruct;
- (id)baselineRecordForRunDestination:(id)arg1;
- (id)init;
- (id)initWithFilePath:(id)arg1 error:(id *)arg2;
- (id)runDestinations;
- (void)setBaselineRecord:(id)arg1 forRunDestination:(id)arg2;
@property unsigned long long version;
- (void)unionWithBundleBaselineRecord:(id)arg1;
- (BOOL)writeToFilePath:(id)arg1 workspace:(id)arg2 versionedFileManager:(id)arg3 error:(id *)arg4;

@end

