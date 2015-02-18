/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDECommandLineArgumentEntry : NSObject
{
    BOOL _isEnabled;
    NSString *_argument;
}

+ (id)argumentEntriesForLegacyValues:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *argument; // @synthesize argument=_argument;
- (id)description;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)init;
- (id)initWithArgument:(id)arg1 enabled:(BOOL)arg2;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_isEnabled;
- (void)setArgumentFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setIsEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;

@end

