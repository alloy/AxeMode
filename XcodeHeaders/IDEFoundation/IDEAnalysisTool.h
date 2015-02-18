/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDEAnalysisTool : NSObject
{
    int _type;
    NSString *_identifier;
    NSString *_displayName;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
- (long long)displayNameCompare:(id)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (unsigned long long)hash;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithType:(int)arg1 identifer:(id)arg2 displayName:(id)arg3;
- (BOOL)isEqual:(id)arg1;
@property(readonly) int type; // @synthesize type=_type;

@end

