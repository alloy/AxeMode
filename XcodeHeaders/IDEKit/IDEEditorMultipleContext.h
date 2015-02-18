/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "NSSplitViewDelegate.h"

@class IDEEditorContext, NSArray, NSMutableArray, NSString;

@interface IDEEditorMultipleContext : IDEViewController <NSSplitViewDelegate>
{
    NSMutableArray *_editorContexts;
    IDEEditorContext *_selectedEditorContext;
    id _viewFrameDidChangeNotificationObserver;
    id _lastActiveEditorContextDidChangeNotificationObserver;
    id <IDEEditorMultipleContextDelegate> _delegate;
    int _layout;
    id <IDEEditorContextDelegate> _editorContextDelegate;
    NSArray *_defaultEditorCategories;
    NSArray *_validEditorCategories;
    NSString *_emptyContentString;
    BOOL _showNavBarHistoryStepperControls;
    BOOL _showSiblingStepperControls;
    BOOL _showMiniIssueNavigators;
}

- (void).cxx_destruct;
- (id)_addSplitAtIndex:(unsigned long long)arg1;
- (void)_adjustEditorBorders;
- (BOOL)_editorsAreStackedVertically;
- (id)_generateNodeAndAddMappingToWorkspaceTabControllerLayoutTree:(id)arg1;
- (BOOL)_getEditorContextProperties:(id *)arg1 selectedProperty:(id *)arg2 geometry:(id *)arg3 propertyGetterBlock:(id)arg4;
- (BOOL)_getEditorHistoryStacks:(id *)arg1 selected:(id *)arg2 geometry:(id *)arg3;
- (BOOL)_getStateSavingStateDictionaries:(id *)arg1 selected:(id *)arg2 geometry:(id *)arg3;
- (BOOL)_removeEditorContextAtIndex:(unsigned long long)arg1;
- (void)_setEditorContextProperties:(id)arg1 selectedProperty:(id)arg2 geometry:(id)arg3 propertySetterBlock:(id)arg4;
- (void)_setEditorHistoryStacks:(id)arg1 selected:(id)arg2 geometry:(id)arg3;
- (void)_setStateSavingStateDictionaries:(id)arg1 selected:(id)arg2 geometry:(id)arg3;
- (void)_setStateSavingStateDictionaries:(id)arg1 selected:(id)arg2 geometry:(id)arg3 excludingEditorContext:(id)arg4;
- (BOOL)_splitEditorContextAtIndex:(unsigned long long)arg1 actuallySplit:(BOOL)arg2 splitEditorContext:(id *)arg3 newEditorContext:(id *)arg4;
- (id)_splitView;
- (void)_splitView:(id)arg1 resizeHorizontalSubviewsWithOldSize:(struct CGSize)arg2;
- (void)_splitView:(id)arg1 resizeVerticalSubviewsWithOldSize:(struct CGSize)arg2;
- (id)_splitViewResizingLogAspect;
- (void)_updateCanAddOrRemoveSplitStatus;
- (id)addEditorContext;
- (BOOL)canCloseEditorContexts;
- (BOOL)canCreateAdditionalEditorContexts;
- (void)closeAllEditorContextsKeeping:(id)arg1;
- (void)closeEditorContext:(id)arg1;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
@property(copy) NSArray *defaultEditorCategories; // @synthesize defaultEditorCategories=_defaultEditorCategories;
@property(retain) id <IDEEditorMultipleContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)discardEditing;
@property(retain, nonatomic) id <IDEEditorContextDelegate> editorContextDelegate; // @synthesize editorContextDelegate=_editorContextDelegate;
- (id)editorContexts;
- (id)firstEditorContext;
- (struct CGRect)grabRect;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) int layout; // @synthesize layout=_layout;
- (void)loadView;
- (struct CGSize)minimumSizeForView:(id)arg1;
- (void)primitiveInvalidate;
- (id)secondEditorContext;
@property(retain) IDEEditorContext *selectedEditorContext; // @synthesize selectedEditorContext=_selectedEditorContext;
- (void)setEmptyContentString:(id)arg1;
@property(nonatomic) BOOL showMiniIssueNavigators; // @synthesize showMiniIssueNavigators=_showMiniIssueNavigators;
@property(nonatomic) BOOL showNavBarHistoryStepperControls; // @synthesize showNavBarHistoryStepperControls=_showNavBarHistoryStepperControls;
@property(nonatomic) BOOL showSiblingStepperControls; // @synthesize showSiblingStepperControls=_showSiblingStepperControls;
@property(copy) NSArray *validEditorCategories; // @synthesize validEditorCategories=_validEditorCategories;
- (void)splitEditorContext:(id)arg1;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

