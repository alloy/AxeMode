/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "IDEIndexCompletionItem.h"

#import "DVTTextCompletionItem.h"

@class NSArray, NSAttributedString, NSImage, NSString;

@interface IDEIndexCompletionItem (IDEKitExtensions) <DVTTextCompletionItem>
@property(readonly) NSImage *icon;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(id)arg3;
@property(readonly) long long priorityBucket;
@property(readonly) unsigned long long priorityComparatorKind;

// Remaining properties
@property(readonly, copy) NSArray *additionalCompletions;
@property(readonly) int completionItemStyle;
@property(readonly, copy) NSString *completionText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSAttributedString *descriptionText;
@property(readonly, copy) NSString *displayText;
@property(readonly, copy) NSString *displayType;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly, copy) NSString *name;
@property(readonly) BOOL notRecommended;
@property(readonly, copy) NSString *parentText;
@property double priority;
@property(readonly) NSImage *statusIcon;
@property(readonly) Class superclass;
@end

