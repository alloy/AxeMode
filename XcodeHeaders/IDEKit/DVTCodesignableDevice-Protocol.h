/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSSet, NSString;

@protocol DVTCodesignableDevice <NSObject>
@property(readonly, copy) NSString *identifier;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly) BOOL supportsProvisioning;
@end

