/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDELaunchSession.h>

@class NSString;

@interface IDESyntheticLaunchSession : IDELaunchSession
{
    NSString *_debuggingAdditionIdentifier;
}

- (void).cxx_destruct;
- (void)_didStart;
@property(copy) NSString *debuggingAdditionIdentifier; // @synthesize debuggingAdditionIdentifier=_debuggingAdditionIdentifier;
- (BOOL)supportsDebugSession;

@end

