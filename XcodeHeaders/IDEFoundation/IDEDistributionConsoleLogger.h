/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTConsoleLogger.h"

@interface IDEDistributionConsoleLogger : DVTConsoleLogger
{
    int _exclusiveLogLevel;
}

@property(readonly) int exclusiveLogLevel; // @synthesize exclusiveLogLevel=_exclusiveLogLevel;
- (id)initWithExclusiveLogLevel:(int)arg1;
- (void)logMessage:(id)arg1 forAspect:(id)arg2 logLevel:(int)arg3;

@end

