/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEActivityLogRecord.h>

#import "DVTInvalidation.h"

@class DVTFileDataType, DVTObservingToken, DVTStackBacktrace, IDEActivityLogSection, IDEOnDiskLogStore_Impl, IDETypeIdentifier, NSString;

@interface IDEOnDiskActivityLogRecord : IDEActivityLogRecord <DVTInvalidation>
{
    IDEOnDiskLogStore_Impl *_logStore;
    IDEActivityLogSection *_strongFullLog;
    IDEActivityLogSection *_weakFullLog;
    IDEActivityLogSection *_recorderLog;
    DVTObservingToken *_recorderLogObservingToken;
    NSString *_uniqueIdentifier;
    IDETypeIdentifier *_domainType;
    NSString *_title;
    double _timeStartedRecording;
    double _timeStoppedRecording;
    DVTFileDataType *_documentType;
    NSString *_signature;
    NSString *_highLevelStatus;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingIsRecording;
- (void).cxx_destruct;
- (void)_makeWeak;
- (void)_setRemovedState;
@property(readonly, copy) NSString *description;
- (id)documentType;
- (id)domainType;
- (id)fullLogIfInMemory;
- (id)fullLogWithError:(id *)arg1;
- (id)highLevelStatus;
- (id)initWithLog:(id)arg1 entityIdentifier:(id)arg2 store:(id)arg3;
- (id)initWithUUID:(id)arg1 store:(id)arg2 cacheEntry:(id)arg3 updatedCache:(char *)arg4 error:(id *)arg5;
- (BOOL)isRecording;
- (BOOL)isRemoved;
- (void)primitiveInvalidate;
@property(retain, nonatomic) IDEActivityLogSection *recorderLog; // @synthesize recorderLog=_recorderLog;
- (void)removeSelfWithCompletionBlock:(id)arg1;
@property(nonatomic) double timeStoppedRecording; // @synthesize timeStoppedRecording=_timeStoppedRecording;
- (id)signature;
- (id)testableSummariesPlistFilePath;
- (double)timeStartedRecording;
- (id)title;
- (id)uniqueIdentifier;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

