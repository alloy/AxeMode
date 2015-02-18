/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEURLHandler.h"

@class NSString;

@interface IDEDeviceURLHandler : NSObject <IDEURLHandler>
{
}

+ (void)_enableForDevelopmentDeviceIdentifier:(id)arg1 completionBlock:(id)arg2;
+ (void)handleURL:(id)arg1 completionHandler:(id)arg2;
+ (BOOL)shouldRegisterURLHandlerForScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

