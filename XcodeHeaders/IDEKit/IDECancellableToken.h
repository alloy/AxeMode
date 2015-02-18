/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTCancellable.h"

@class NSString;

@interface IDECancellableToken : NSObject <DVTCancellable>
{
    BOOL _cancelled;
    id _cancelAction;
}

- (void).cxx_destruct;
- (void)cancel;
@property(copy) id cancelAction; // @synthesize cancelAction=_cancelAction;
@property(getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

