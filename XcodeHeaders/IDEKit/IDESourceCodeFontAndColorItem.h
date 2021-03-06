/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEFontAndColorItem.h"

@class DVTSyntaxTypeSpecification;

@interface IDESourceCodeFontAndColorItem : NSObject <IDEFontAndColorItem>
{
    DVTSyntaxTypeSpecification *_syntaxSpec;
}

- (void).cxx_destruct;
- (id)colorForTheme:(id)arg1;
- (id)displayName;
- (id)fontForTheme:(id)arg1;
- (id)initWithSyntaxSpec:(id)arg1;
@property(readonly) short nodeType;
- (void)setColor:(id)arg1 forTheme:(id)arg2;
- (void)setFont:(id)arg1 forTheme:(id)arg2;
@property(readonly) DVTSyntaxTypeSpecification *syntaxSpec; // @synthesize syntaxSpec=_syntaxSpec;

@end

