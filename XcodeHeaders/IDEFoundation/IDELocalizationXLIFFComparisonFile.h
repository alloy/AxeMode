/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDELocalizationXLIFFComparisonIssueLocation, NSString;

@interface IDELocalizationXLIFFComparisonFile : NSObject
{
    BOOL _foundInProject;
    NSString *_original;
    IDELocalizationXLIFFComparisonIssueLocation *_location;
}

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
@property BOOL foundInProject; // @synthesize foundInProject=_foundInProject;
- (id)initWithOriginal:(id)arg1 oldLocation:(id)arg2 newLocation:(id)arg3 foundInProject:(BOOL)arg4;
@property(readonly) IDELocalizationXLIFFComparisonIssueLocation *location; // @synthesize location=_location;
@property(readonly) NSString *original; // @synthesize original=_original;

@end
