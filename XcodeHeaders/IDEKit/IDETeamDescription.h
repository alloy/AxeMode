/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDETeamDescription : NSObject
{
    NSString *_name;
    NSString *_teamID;
    NSString *_iOSRole;
    NSString *_macRole;
}

- (void).cxx_destruct;
- (id)description;
@property(copy, nonatomic) NSString *iOSRole; // @synthesize iOSRole=_iOSRole;
@property(copy, nonatomic) NSString *macRole; // @synthesize macRole=_macRole;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;

@end

