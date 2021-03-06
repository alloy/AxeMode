/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTInvalidation.h"
#import "NSObject.h"

@class DVTSDK, DVTSourceExpression, DVTSourceLanguageService, NSString;

@protocol DVTSourceExpressionSource <NSObject, DVTInvalidation>
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly, nonatomic) DVTSourceExpression *selectedExpression;

@optional
@property(readonly, nonatomic) DVTSourceLanguageService *languageService;
@property(readonly) DVTSourceExpression *quickHelpExpression;
@property(readonly) DVTSDK *sdk;
@property(readonly, nonatomic) NSString *selectedText;
@end

