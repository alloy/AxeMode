/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDELocalizationStream.h>

@interface _IDELocalizationStreamBlockBased : IDELocalizationStream
{
    id _onNextBlock;
    id _onErrorBlock;
    id _onCompletedBlock;
}

- (void).cxx_destruct;
- (id)initWithOnNextBlock:(id)arg1 onErrorBlock:(void)arg2 onCompletedBlock:(id)arg3;
- (void)onCompleted;
@property(copy) id onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
- (void)onError:(id)arg1;
@property(copy) id onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
- (void)onNext:(id)arg1;
@property(copy) id onNextBlock; // @synthesize onNextBlock=_onNextBlock;

@end

