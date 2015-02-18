/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "DVTScopeBarContentController.h"

@class DVTScopeBarButton, DVTSearchField, NSLayoutConstraint, NSString;

@interface IDELogEditorScopeBar : DVTViewController <DVTScopeBarContentController>
{
    DVTScopeBarButton *_scopeLatestResultsButton;
    DVTScopeBarButton *_scopeAllResultsButton;
    DVTScopeBarButton *_scopeAllMessagesButton;
    DVTScopeBarButton *_scopeAllIssuesButton;
    DVTScopeBarButton *_scopeErrorsOnlyButton;
    DVTSearchField *_scopeSearchField;
    id _delegate;
    double _preferredViewHeight;
    NSLayoutConstraint *_scopeBarHeight;
    NSLayoutConstraint *_filterFieldHeight;
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
@property(retain) id delegate; // @synthesize delegate=_delegate;
@property __weak NSLayoutConstraint *filterFieldHeight; // @synthesize filterFieldHeight=_filterFieldHeight;
- (void)loadView;
@property double preferredViewHeight; // @synthesize preferredViewHeight=_preferredViewHeight;
- (void)primitiveInvalidate;
@property __weak NSLayoutConstraint *scopeBarHeight; // @synthesize scopeBarHeight=_scopeBarHeight;
- (void)searchFieldAction:(id)arg1;
- (void)setScopeBarState:(int)arg1 showAllResults:(BOOL)arg2;
- (void)showAllIssues:(id)arg1;
- (void)showAllMessages:(id)arg1;
- (void)showAllResults:(id)arg1;
- (void)showErrorsOnly:(id)arg1;
- (void)showLatestResults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

