/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEKeyBinding.h>

@class NSString;

@interface IDEMenuKeyBinding : IDEKeyBinding
{
    NSString *_commandIdentifier;
    NSString *_commandGroupIdentifier;
    NSString *_groupIdentifier;
    unsigned long long _defaultRawModifierMask;
}

+ (long long)_defaultMaxNumberOfShortcuts;
+ (id)combinedIdentifierWithCommandIdentifier:(id)arg1 group:(id)arg2 groupIdentifier:(id)arg3;
+ (id)keyPathsForValuesAffectingCombinedIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *combinedIdentifier;
@property(copy) NSString *commandGroupIdentifier; // @synthesize commandGroupIdentifier=_commandGroupIdentifier;
@property(copy) NSString *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property unsigned long long defaultRawModifierMask; // @synthesize defaultRawModifierMask=_defaultRawModifierMask;
@property(copy) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (BOOL)isEqualToKeyBinding:(id)arg1;

@end

