/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import "IDELocalizationWorkReadStrings.h"

@class DVTFilePath, DVTLocale, IDELocalizedPlistAdaptor, NSDictionary;

@interface _IDELocalizedPlistAdaptorReadContext : IDELocalizationWorkContext <IDELocalizationWorkReadStrings>
{
    DVTFilePath *IDELocalizationWork_path;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    IDELocalizedPlistAdaptor *_adaptor;
    DVTLocale *_language;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
@property(retain) IDELocalizedPlistAdaptor *adaptor; // @synthesize adaptor=_adaptor;
@property(retain) DVTLocale *language; // @synthesize language=_language;
- (void)primitiveInvalidate;

@end

