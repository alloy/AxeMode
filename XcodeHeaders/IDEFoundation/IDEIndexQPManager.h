/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEIndex, NSMutableArray, NSObject<OS_dispatch_queue>, NSTimer;

@interface IDEIndexQPManager : NSObject
{
    IDEIndex *_index;
    NSObject<OS_dispatch_queue> *_qp_queue;
    NSMutableArray *_masterBlocks;
    NSMutableArray *_recentQueryProviders;
    NSTimer *_purgeTimer;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_addQueryProviderToRecents:(id)arg1 highPriority:(BOOL)arg2;
- (void)_cancelPurgeTimer;
- (void)_logRecents;
- (void)_purgeTimeout:(id)arg1;
- (void)_scheduleQPPurge;
- (void)dealloc;
@property(readonly, nonatomic) IDEIndex *index; // @synthesize index=_index;
- (id)initWithIndex:(id)arg1;
- (void)purgeAllQPs;
- (void)purgeQPsUsingPCH:(id)arg1;
- (id)queryProviderForFile:(id)arg1 highPriority:(BOOL)arg2;

@end

