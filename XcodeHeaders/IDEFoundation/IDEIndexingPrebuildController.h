/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEIndex, NSObject<OS_dispatch_queue>;

@interface IDEIndexingPrebuildController : NSObject
{
    IDEIndex *_index;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasInitiatedPrebuild;
    BOOL _hasPerformedPrebuild;
}

- (void).cxx_destruct;
- (void)cancelAnyPrebuild;
@property BOOL hasPerformedPrebuild; // @synthesize hasPerformedPrebuild=_hasPerformedPrebuild;
- (id)initWithIndex:(id)arg1;
- (void)initiatePrebuild;
- (void)needsPrebuild;

@end

