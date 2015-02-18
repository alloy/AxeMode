/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDEOpenQuicklyPattern : NSObject
{
    NSString *_pattern;
    BOOL _patternHasSeparators;
    char *_charactersInPattern;
    unsigned short *_patternCharacters;
    unsigned short *_lowerCasePatternCharacters;
    unsigned long long _patternLength;
}

+ (id)patternWithInput:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPattern:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (id)matchedRanges:(id)arg1;
- (BOOL)matchesCandidate:(id)arg1;
- (BOOL)matchesEverythingMatchedBy:(id)arg1;
@property(readonly) NSString *pattern; // @synthesize pattern=_pattern;
- (BOOL)rejectsEverything;
- (double)scoreCandidate:(id)arg1;
- (double)scoreCandidate:(id)arg1 matchedRanges:(id *)arg2;

@end

