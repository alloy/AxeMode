/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTOperation.h"

@class IDELaunchParametersSnapshot;

@interface IDEProfileOperation : DVTOperation
{
    IDELaunchParametersSnapshot *_launchParameters;
}

+ (id)operationWithLaunchParametersSnapshot:(id)arg1 block:(id)arg2;
- (void).cxx_destruct;
@property(retain) IDELaunchParametersSnapshot *launchParameters; // @synthesize launchParameters=_launchParameters;

@end

