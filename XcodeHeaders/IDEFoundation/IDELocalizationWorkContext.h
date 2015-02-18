/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSMutableSet, NSString;

@interface IDELocalizationWorkContext : NSObject <DVTInvalidation>
{
    NSMutableSet *_toInvalidate;
    id _intermediateResults;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)init;
- (id)intermediateResults;
- (void)invalidateLater:(id)arg1;
- (void)primitiveInvalidate;
- (void)setIntermediateResults:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

