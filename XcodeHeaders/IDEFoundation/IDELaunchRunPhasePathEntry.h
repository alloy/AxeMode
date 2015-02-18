/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, NSString;

@interface IDELaunchRunPhasePathEntry : NSObject
{
    BOOL _isEnabled;
    NSString *_path;
}

- (void).cxx_destruct;
- (id)description;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(readonly) DVTFilePath *filePath;
- (id)init;
- (id)initWithPathString:(id)arg1 enabled:(BOOL)arg2;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_isEnabled;
@property(copy) NSString *path; // @synthesize path=_path;
- (void)setIsEnabledFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setPathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;

@end

