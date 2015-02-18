/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDERefactoringInputValidator : NSObject
{
    unsigned long long _numberOfMethodColons;
}

- (id)blankLocalizedMessage;
- (id)fewerColonsLocalizedMessage:(unsigned long long)arg1;
- (id)firstColonLocalizedMessage;
- (id)firstDigitInLocalizedMessage:(id)arg1;
- (id)firstDigitLocalizedMessage;
- (id)initialSignatureString;
- (BOOL)isStringValid:(id)arg1 otherStrings:(id)arg2 localizedMessage:(id *)arg3 invalidRange:(struct _NSRange *)arg4;
- (id)lastColonLocalizedMessage;
- (id)localizedCapitalizedMethodKeyword:(id)arg1 index:(unsigned long long)arg2;
- (id)modifiedSignatureString;
- (id)moreColonsLocalizedMessage:(unsigned long long)arg1;
@property unsigned long long numberOfMethodColons; // @synthesize numberOfMethodColons=_numberOfMethodColons;
- (id)oneFewerColonLocalizedMessage;
- (id)oneMoreColonLocalizedMessage;
- (id)reservedWordLocalizedMessage:(id)arg1;
- (id)shouldBeShownLocalizedMessageForChar:(unsigned short)arg1;
- (BOOL)shouldStringWithChangesBeShown:(id)arg1 localizedMessage:(id *)arg2;
- (id)standardCharsLocalizedMessage;
- (id)standardCharsPlusColonsLocalizedMessage;

@end

