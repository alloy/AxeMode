/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTModelObjectGraph, DVTStackBacktrace, IDEEditorHistoryItem, NSMutableSet, NSNotification, NSString;

@interface _IDEEditorObjectGraphCoalescingState : NSObject <DVTInvalidation>
{
    BOOL _modelObjectGraphHadPendingChanges;
    NSMutableSet *_forgottenNavigableItems;
    DVTModelObjectGraph *_modelObjectGraph;
    DVTStackBacktrace *_modelObjectGraphWillCoalesceChangesBacktrace;
    NSNotification *_willCloseDocumentNotification;
    IDEEditorHistoryItem *_preCoalescingHistoryItem;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *forgottenNavigableItems; // @synthesize forgottenNavigableItems=_forgottenNavigableItems;
- (id)initWithModelObjectGraph:(id)arg1;
@property(readonly) DVTModelObjectGraph *modelObjectGraph; // @synthesize modelObjectGraph=_modelObjectGraph;
@property BOOL modelObjectGraphHadPendingChanges; // @synthesize modelObjectGraphHadPendingChanges=_modelObjectGraphHadPendingChanges;
@property(readonly) DVTStackBacktrace *modelObjectGraphWillCoalesceChangesBacktrace; // @synthesize modelObjectGraphWillCoalesceChangesBacktrace=_modelObjectGraphWillCoalesceChangesBacktrace;
@property(retain) IDEEditorHistoryItem *preCoalescingHistoryItem; // @synthesize preCoalescingHistoryItem=_preCoalescingHistoryItem;
- (void)primitiveInvalidate;
@property(retain) NSNotification *willCloseDocumentNotification; // @synthesize willCloseDocumentNotification=_willCloseDocumentNotification;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

