/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDENavigator.h>

#import "NSMenuDelegate.h"

@class DVTGradientImageButton, DVTMapTable, DVTNotificationToken, DVTObservingToken, IDENavigatorDataCell, IDENavigatorFilterControlBar, IDENavigatorOutlineView, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSView;

@interface IDEDebugNavigator : IDENavigator <NSMenuDelegate>
{
    IDENavigatorOutlineView *_outlineView;
    DVTGradientImageButton *_autoCompressMinButton;
    NSLayoutConstraint *_filterContainerViewHeight;
    IDENavigatorFilterControlBar *_filterControl;
    IDENavigatorDataCell *_regularCell;
    DVTMapTable *_processHeaderCellForContentDelegateTable;
    NSMutableArray *_cachedNavigableDebugItems;
    DVTMapTable *_contentDelegateForIdentifierTable;
    DVTObservingToken *_rootNavigableChildItemsObservingToken;
    DVTObservingToken *_allFinishedObservingToken;
    DVTObservingToken *_coalescedStateObservingToken;
    DVTNotificationToken *_selectedObjectsObservingToken;
    BOOL _isInUserDirectSelection;
    BOOL _isInOutlineViewProcessPendingChanges;
    NSMutableDictionary *_cachedStateDictionary;
    NSMutableDictionary *_transientStates;
    DVTMapTable *_uiControllerToItemMap;
    DVTMapTable *_trayCellToRepresentedObject;
    NSArray *_archivableNavigableItemsToSelect;
    DVTNotificationToken *_trayHideObservingToken;
    DVTNotificationToken *_trayShowObservingToken;
    NSMutableSet *_processesWithClosedGauges;
    NSMutableArray *_selectedObjects;
    BOOL _showsCompressedStackFrames;
    BOOL _showsOnlyInterestingContent;
    BOOL _showsOnlyRunningBlocks;
    NSString *_filterString;
    unsigned long long _compressionValue;
    NSView *_filterContainerView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)createProcessActionPopUpMenuItemWithPopUpImage:(id)arg1 action:(SEL)arg2;
+ (id)createProcessActionPopUpMenuItemWithPopUpImage:(id)arg1 menuItemImage:(id)arg2 action:(SEL)arg3;
+ (void)initialize;
+ (long long)version;
- (void).cxx_destruct;
- (void)_addCoalescedStateObserver;
- (void)_addDebuggingAdditionTrayCellsForModelObject:(id)arg1 intoArray:(id)arg2;
- (id)_addressStringForExecutionEnvironment;
- (void)_changeToNewLaunchSessionBeforeOpeningSelectedItem:(id)arg1;
- (void)_configureProcessHeaderCell:(id)arg1;
- (id)_contentDelegateForRepresentedObject:(id)arg1;
- (id)_contentDelegateForRightClickedItems;
- (id)_contentDelegateFromProcessIfConforming:(id)arg1;
- (void)_expandItemsForTokens:(id)arg1;
- (id)_expandedItemTokens;
- (void)_handleLaunchSessionsChanged;
- (void)_handleSelectedObjectsChanged;
- (BOOL)_handleUserDirectDeletion;
- (BOOL)_handleUserDirectMoveUpOrDown:(BOOL)arg1;
- (BOOL)_handleUserDirectShiftKeyMoveUpOrDown:(BOOL)arg1;
- (id)_indexesForItems:(id)arg1;
- (void)_installFilterBarRepresentedObject:(id)arg1;
- (BOOL)_isPoint:(struct CGPoint)arg1 inActionPopUpCellForCell:(id)arg2 forItem:(id)arg3;
- (BOOL)_isPoint:(struct CGPoint)arg1 inGaugeButtonCellForCell:(id)arg2 forItem:(id)arg3;
- (id)_navigableItemArchivableRepresentationsForNavigableItems:(id)arg1;
- (void)_navigableItemCoordinatorProcessPendingChanges;
- (id)_navigableItemsToSelect;
- (BOOL)_needsTrayAreaForProcessModelObject:(id)arg1;
- (void)_openSelectedNavigableItemsWithEventType:(unsigned long long)arg1;
- (void)_primitiveSetShowsCompressedStackFramesWithKVO:(BOOL)arg1;
- (id)_processHeaderCellWithDebugNavigableModelObject:(id)arg1 contentDelegate:(id)arg2;
- (id)_processNameForItem:(id)arg1;
- (void)_recordSelectedArchivableNavigableItems:(id)arg1;
- (void)_recordSelectedRowsForRestoration;
- (id)_regularCell;
- (id)_representedObjectForSelectedRow;
- (void)_scrollToIndexes:(id)arg1;
- (id)_selectedRepresentedObjects;
- (BOOL)_shouldExpandItemAsResultOfOptionClick:(id)arg1;
- (id)_tokenForExpandedRepresentedObject:(id)arg1;
- (id)_tokenForPersistingRepresentedObject:(id)arg1;
- (BOOL)_uiShouldReact;
- (void)_updateCompressionControls;
- (BOOL)_wasActionPopUpCellClickedAtCurrentPoint;
- (BOOL)_wasActionPopUpCellClickedForCell:(id)arg1 item:(id)arg2;
- (BOOL)_wasGaugeCellClickedAtCurrentPoint;
- (BOOL)_wasGaugeCellClickedForCell:(id)arg1 item:(id)arg2;
- (BOOL)_writeRepresentedObjects:(id)arg1 toPasteboard:(id)arg2;
- (id)cellForGaugeRepresenting:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned long long compressionValue; // @synthesize compressionValue=_compressionValue;
- (void)contentDelegateFinished:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)debuggingAdditionUIControllerWantsTrayItems:(id)arg1;
- (id)debuggingUIControllerForItem:(id)arg1;
- (BOOL)delegateFirstResponder;
- (void)delete:(id)arg1;
- (id)domainIdentifier;
- (id)expandedItemTokens;
@property __weak NSView *filterContainerView; // @synthesize filterContainerView=_filterContainerView;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void)focusedEditorDidSelectItem:(id)arg1;
@property(readonly, nonatomic) BOOL isInUserDirectSelection; // @synthesize isInUserDirectSelection=_isInUserDirectSelection;
- (void)loadView;
- (void)menuNeedsUpdate:(id)arg1;
@property(readonly, copy) NSArray *navigableDebugItems;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
@property(readonly) IDENavigatorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseTrayForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidCollapseTray:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidExpandTray:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)primitiveInvalidate;
- (id)processActionPopUpCellForContentDelegate:(id)arg1;
- (void)recordPersistenceStateChanges:(id)arg1;
- (void)refreshForTrayAreaChanges;
- (void)restoreExpandedAndSelectionStates;
- (void)restoreExpandedStates;
- (void)restoreExpandedStatesForTokens:(id)arg1;
- (void)restorePreviousTransientStates;
- (void)restoreSelectedStatesAndScrollToSelection:(BOOL)arg1;
- (void)revealArchivedNavigableItems:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)scrollToSelection;
- (void)selectNavigableItems:(id)arg1;
@property(nonatomic) BOOL showsCompressedStackFrames; // @synthesize showsCompressedStackFrames=_showsCompressedStackFrames;
@property(nonatomic) BOOL showsOnlyInterestingContent; // @synthesize showsOnlyInterestingContent=_showsOnlyInterestingContent;
@property(nonatomic) BOOL showsOnlyRunningBlocks; // @synthesize showsOnlyRunningBlocks=_showsOnlyRunningBlocks;
- (void)setStoredCompressionValue:(id)arg1;
- (id)storedCompressionValue;
@property(readonly, nonatomic) NSMutableDictionary *transientStates; // @synthesize transientStates=_transientStates;
- (id)trayCellsForProcess:(id)arg1;
- (void)updateGaugesForProcess:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableArray *mutableSelectedObjects; // @dynamic mutableSelectedObjects;
@property(copy) NSArray *selectedObjects; // @dynamic selectedObjects;
@property(readonly) Class superclass;

@end

