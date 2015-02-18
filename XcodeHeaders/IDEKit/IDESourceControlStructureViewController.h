/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTReplacementViewDelegate.h"

@class DVTBindingToken, DVTImageAndTextCell, DVTReplacementView, IDENavigableItem, IDENavigableItemCoordinator, IDENavigatorOutlineView, IDESourceControlTree, NSArray, NSDateFormatter, NSObject<OS_dispatch_queue>, NSPredicate, NSSplitView, NSString;

@interface IDESourceControlStructureViewController : IDEViewController <DVTReplacementViewDelegate>
{
    NSSplitView *_mainSplitView;
    IDENavigatorOutlineView *_sourceTreeItemOutlineView;
    NSDateFormatter *_sourceTreeItemModificationDateFormatter;
    DVTReplacementView *_logReplacementView;
    NSObject<OS_dispatch_queue> *_serial_queue;
    id _branchSwitchObserver;
    int _scopeByStatus;
    BOOL _showIgnoredFiles;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigable;
    IDESourceControlTree *_sourceTree;
    id _selectedObject;
    NSArray *_selectedObjects;
    DVTImageAndTextCell *_prototypeCell;
    DVTImageAndTextCell *_prototypeBranchCell;
    DVTImageAndTextCell *_prototypeWorkingItemCell;
    id <IDESourceControlStructureViewDelegate> _delegate;
    DVTBindingToken *_contentArrayBindingToken;
    BOOL _showsLogViewOnSelection;
    NSPredicate *_selectableItemFilter;
    NSArray *__realExpandedItems;
}

+ (id)defaultViewNibName;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingSelectedObject;
- (void).cxx_destruct;
@property(retain) NSArray *_realExpandedItems; // @synthesize _realExpandedItems=__realExpandedItems;
@property BOOL allowsMultipleSelection;
- (void)configurePrototypCell:(id)arg1;
@property(retain) id <IDESourceControlStructureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doubleClickAction:(id)arg1;
- (id)dvtExtraBindings;
@property(retain) NSArray *expandedItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (id)prototypeBranchCell;
- (id)prototypeCell;
- (id)prototypeWorkingItemCell;
- (void)refresh:(id)arg1;
@property(retain, nonatomic) IDENavigableItem *rootNavigable; // @synthesize rootNavigable=_rootNavigable;
- (void)scrollItemToVisible:(id)arg1;
@property(copy) NSPredicate *selectableItemFilter; // @synthesize selectableItemFilter=_selectableItemFilter;
@property(readonly) id selectedObject; // @synthesize selectedObject=_selectedObject;
@property(retain, nonatomic) NSArray *selectedObjects; // @synthesize selectedObjects=_selectedObjects;
- (void)setBranchesFromWorkingTree:(id)arg1;
- (void)setRootRepository:(id)arg1;
- (void)setRootSourceTreeGroup:(id)arg1;
@property BOOL showsLogView;
@property BOOL showsLogViewOnSelection; // @synthesize showsLogViewOnSelection=_showsLogViewOnSelection;
@property(retain, nonatomic) IDESourceControlTree *sourceTree; // @synthesize sourceTree=_sourceTree;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

