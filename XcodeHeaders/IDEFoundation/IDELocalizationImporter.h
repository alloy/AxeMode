/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDELocalizationWorkProgress.h"

@class DVTNotificationToken, DVTStackBacktrace, IDELocalizationImporterContext, IDELocalizationStream, NSString;

@interface IDELocalizationImporter : NSObject <IDELocalizationWorkProgress, DVTInvalidation>
{
    IDELocalizationStream *_importWork;
    IDELocalizationImporterContext *_importContext;
    long long _workDone;
    long long _workOutstanding;
    DVTNotificationToken *_localizationPhaseObserver;
    DVTNotificationToken *_localizationWorkItemIncrementObserver;
    DVTNotificationToken *_localizationWorkItemDecrementObserver;
    id <DVTCancellable> _workToken;
    BOOL _complete;
    long long _progress;
    NSString *_phase;
    NSString *_workTitle;
    id _onErrorBlock;
    id _onCompletedBlock;
}

+ (id)importWorkForContext:(id)arg1;
+ (id)importerFromURL:(id)arg1 container:(id)arg2 sourceLanguage:(id)arg3 onNeedsResolutions:(id)arg4;
+ (void)initialize;
- (void).cxx_destruct;
- (void)cancel;
@property BOOL complete; // @synthesize complete=_complete;
- (id)initWithImportWork:(id)arg1 withContext:(id)arg2;
@property(copy) id onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) id onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(retain) NSString *phase; // @synthesize phase=_phase;
- (void)primitiveInvalidate;
@property long long progress; // @synthesize progress=_progress;
- (void)start;
@property(readonly) NSString *workTitle; // @synthesize workTitle=_workTitle;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

