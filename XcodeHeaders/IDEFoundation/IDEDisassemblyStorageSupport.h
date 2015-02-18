/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEDisassemblyStorageSupport : NSObject
{
}

+ (unsigned long long)_integerAddressFromLineOfDisassembly:(id)arg1;
+ (unsigned long long)_integerFromHexString:(id)arg1;
+ (unsigned long long)_lineNumberForAddress:(id)arg1 inLinesOfDisassembly:(id)arg2;
+ (id)addressForLineNumber:(unsigned long long)arg1 inDisassembly:(id)arg2;
+ (id)hexAddressFromLineOfDisassembly:(id)arg1;
+ (BOOL)isDisassemblyStorageURL:(id)arg1;
+ (unsigned long long)lineNumberForAddress:(id)arg1 inDisassembly:(id)arg2;

@end

