/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDELocalizationStream.h>

@class NSError;

@interface _IDELocalizationStreamThrow : IDELocalizationStream
{
    NSError *_error;
}

+ (id)withError:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
- (void)onError:(id)arg1;
- (id)subscribe:(id)arg1;

@end

