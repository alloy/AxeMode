/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDeveloperAccount, NSString;

@interface IDESigningIdentityDescription : NSObject
{
    BOOL _canExport;
    BOOL _canRevoke;
    NSString *_name;
    id _certificateRefMasqueradingAsAnObject;
    unsigned long long _certificateType;
    NSString *_platform;
    NSString *_platformHumanFriendly;
    DVTDeveloperAccount *_account;
    NSString *_teamID;
    long long _status;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(nonatomic) BOOL canExport; // @synthesize canExport=_canExport;
@property(nonatomic) BOOL canRevoke; // @synthesize canRevoke=_canRevoke;
@property(retain, nonatomic) id certificateRefMasqueradingAsAnObject; // @synthesize certificateRefMasqueradingAsAnObject=_certificateRefMasqueradingAsAnObject;
@property(nonatomic) unsigned long long certificateType; // @synthesize certificateType=_certificateType;
- (long long)compare:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy) NSString *platform; // @synthesize platform=_platform;
@property(copy) NSString *platformHumanFriendly; // @synthesize platformHumanFriendly=_platformHumanFriendly;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy) NSString *teamID; // @synthesize teamID=_teamID;
- (id)statusDescription;
- (id)tooltip;

@end

