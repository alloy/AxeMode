/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDECancellableToken, IDELaunchSession, NSString;

@interface IDEDebuggingAdditionUIControllerObserverEntry : NSObject
{
    IDELaunchSession *_launchSession;
    NSString *_uiControllerID;
    IDECancellableToken *_canellableToken;
    id _handler;
}

- (void).cxx_destruct;
@property(readonly) IDECancellableToken *canellableToken; // @synthesize canellableToken=_canellableToken;
@property(readonly) id handler; // @synthesize handler=_handler;
- (id)initWithLaunchSession:(id)arg1 uiControllerID:(id)arg2 handler:(id)arg3;
@property(readonly) __weak IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(readonly) NSString *uiControllerID; // @synthesize uiControllerID=_uiControllerID;

@end

