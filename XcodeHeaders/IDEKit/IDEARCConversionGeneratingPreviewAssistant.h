/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEAssistant.h>

@class NSString;

@interface IDEARCConversionGeneratingPreviewAssistant : IDEAssistant
{
    NSString *_message;
}

+ (id)keyPathsForValuesAffectingCanGoForward;
- (void).cxx_destruct;
- (void)_noSourceChangesNecessaryAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)loadView;
@property(copy) NSString *message; // @synthesize message=_message;
- (id)nextAssistantIdentifier;

@end

