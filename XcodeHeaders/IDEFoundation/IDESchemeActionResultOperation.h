/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTOperation.h"

@class IDESchemeActionRecord;

@interface IDESchemeActionResultOperation : DVTOperation
{
    BOOL _isObservingIsExecuting;
    BOOL _isFinished;
    BOOL _isExecuting;
    DVTOperation *_trackingOperation;
    IDESchemeActionRecord *_schemeActionRecord;
    id _actionCallbackBlock;
    id _schemeActionResultComputationBlock;
}

+ (id)schemeActionResultOperationWithSchemeActionRecord:(id)arg1 trackingExecutionOfOperation:(id)arg2 actionCallbackBlock:(id)arg3 schemeActionResultComputationBlock:(void)arg4;
- (void).cxx_destruct;
- (void)_doCancellationCleanup;
@property(copy) id actionCallbackBlock; // @synthesize actionCallbackBlock=_actionCallbackBlock;
- (void)dealloc;
- (BOOL)isConcurrent;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isObservingIsExecuting; // @synthesize isObservingIsExecuting=_isObservingIsExecuting;
- (void)main;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) IDESchemeActionRecord *schemeActionRecord; // @synthesize schemeActionRecord=_schemeActionRecord;
@property(copy) id schemeActionResultComputationBlock; // @synthesize schemeActionResultComputationBlock=_schemeActionResultComputationBlock;
@property(retain) DVTOperation *trackingOperation; // @synthesize trackingOperation=_trackingOperation;
- (void)start;

@end

