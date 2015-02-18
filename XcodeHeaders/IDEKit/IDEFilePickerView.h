/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

#import "DVTInvalidation.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class DVTBindingToken, DVTObservingToken, DVTStackBacktrace, IDENavigableItemCoordinator, IDENavigatorOutlineView, NSArray, NSButton, NSMutableArray, NSPredicate, NSProgressIndicator, NSScrollView, NSSearchField, NSString, NSTextField;

@interface IDEFilePickerView : NSView <NSOutlineViewDelegate, NSOutlineViewDataSource, DVTInvalidation>
{
    NSTextField *_messageTextField;
    IDENavigatorOutlineView *_navigatorOutlineView;
    NSButton *_addButton;
    NSButton *_alternateAddButton;
    NSButton *_cancelButton;
    NSSearchField *_searchField;
    NSArray *_rootNavigableItems;
    IDENavigableItemCoordinator *_navItemCoordinator;
    NSString *_fileNameFilterString;
    NSPredicate *_allowedFileFilterPredicate;
    NSPredicate *_selectableItemPredicate;
    NSPredicate *_selectableFileFilterPredicate;
    NSScrollView *_outlineScrollView;
    NSProgressIndicator *_progressIndicator;
    NSArray *_rootItems;
    id _target;
    SEL _addAction;
    SEL _alternateAddAction;
    SEL _cancelAction;
    NSString *_message;
    NSString *_addOtherButtonTitle;
    NSString *_addButtonTitle;
    NSString *_cancelButtonTitle;
    NSMutableArray *_realSelectedItems;
    NSArray *_realExpandedItems;
    id <IDEFilePickerViewDelegate> _delegate;
    DVTObservingToken *_buttonHidingObservationToken;
    BOOL _showsCancelButton;
    BOOL _showsAddButton;
    BOOL _showsAddOtherButton;
    BOOL _showsSearchField;
    BOOL _canChooseGroups;
    BOOL _delegateImplementsWillDisplayCell;
    BOOL _delegateImplementsItemIsExpandable;
    BOOL _delegateImplementsToolTipForCell;
    BOOL _delegateImplementsDataCellForTableColumn;
    NSArray *_bindingTokens;
    DVTBindingToken *_selectionBindingToken;
    unsigned long long _pickingStyle;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
- (void)_centerViewInSuperView:(id)arg1;
- (id)_defaultEmptyContentString;
- (void)_doLayoutAndAddSubviews;
@property(copy) NSString *_fileNameFilterString; // @synthesize _fileNameFilterString;
@property(copy) NSArray *_realExpandedItems; // @synthesize _realExpandedItems;
@property(copy, nonatomic) NSPredicate *_selectableItemPredicate; // @synthesize _selectableItemPredicate;
- (void)add:(id)arg1;
@property SEL addAction; // @synthesize addAction=_addAction;
@property(copy) NSString *addButtonTitle; // @synthesize addButtonTitle=_addButtonTitle;
- (void)addOther:(id)arg1;
@property(copy) NSString *addOtherButtonTitle; // @synthesize addOtherButtonTitle=_addOtherButtonTitle;
@property(readonly) BOOL allButtonsHidden;
@property(copy, nonatomic) NSPredicate *allowedNavigableItemFilter; // @synthesize allowedNavigableItemFilter=_allowedFileFilterPredicate;
@property BOOL allowsMultipleSelection;
@property SEL alternateAddAction; // @synthesize alternateAddAction=_alternateAddAction;
@property(readonly) BOOL canAdd;
@property(nonatomic) BOOL canChooseGroups; // @synthesize canChooseGroups=_canChooseGroups;
- (void)cancel:(id)arg1;
@property SEL cancelAction; // @synthesize cancelAction=_cancelAction;
@property(copy) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(retain, nonatomic) id <IDEFilePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSArray *expandedItems;
- (id)filterPredicate;
- (void)hideProgressIndicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateRootNavigableItems;
- (void)keyDown:(id)arg1;
@property(copy) NSString *message; // @synthesize message=_message;
@property(retain) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navItemCoordinator;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
@property(nonatomic) unsigned long long pickingStyle; // @synthesize pickingStyle=_pickingStyle;
- (void)primitiveInvalidate;
@property(copy) NSArray *rootItems;
- (id)rootNavigableItems;
- (void)scrollItemToVisible:(id)arg1;
@property(copy, nonatomic) NSPredicate *selectableNavigableItemFilter; // @synthesize selectableNavigableItemFilter=_selectableFileFilterPredicate;
@property(retain) NSArray *selectedItems;
@property BOOL showsAddButton; // @synthesize showsAddButton=_showsAddButton;
@property BOOL showsAddOtherButton; // @synthesize showsAddOtherButton=_showsAddOtherButton;
@property BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property BOOL showsSearchField;
@property(retain) id target; // @synthesize target=_target;
- (void)showProgressIndicator;
- (void)viewDidMoveToSuperview;

// Remaining properties
@property(copy) NSMutableArray *_realSelectedItems; // @dynamic _realSelectedItems;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

