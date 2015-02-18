/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTFindBarHostable.h"
#import "DVTScopeBarHost.h"
#import "DVTStateRepositoryDelegate.h"
#import "IDEEditorContextProtocol.h"
#import "IDEEditorDelegate.h"
#import "IDEEditorSplittingControllerDelegate.h"
#import "IDENavigableItemCoordinatorDelegate.h"
#import "IDEPathCellDelegate.h"
#import "NSAnimationDelegate.h"
#import "NSMenuDelegate.h"
#import "NSPathControlDelegate.h"

@class CALayer, DVTBindingToken, DVTBorderedView, DVTFileDataType, DVTFindBar, DVTGradientImagePopUpButton, DVTNotificationToken, DVTObservingToken, DVTScopeBarsManager, DVTStackBacktrace, DVTStateRepository, IDEEditor, IDEEditorArea, IDEEditorGeniusResults, IDEEditorHistoryController, IDEEditorHistoryItem, IDEEditorIssueMenuController, IDEEditorMultipleContext, IDEEditorReadOnlyIndicatorController, IDEEditorSplittingController, IDEEditorStepperView, IDENavBar, IDENavigableItem, IDENavigableItemCoordinator, NSArray, NSArrayController, NSDictionary, NSIndexSet, NSMutableArray, NSScrollView, NSString, NSURL, NSView, _IDEEditorObjectGraphCoalescingState, _IDEGeniusResultsContext;

@interface IDEEditorContext : IDEViewController <NSMenuDelegate, IDEEditorContextProtocol, IDEEditorSplittingControllerDelegate, DVTFindBarHostable, NSPathControlDelegate, IDEPathCellDelegate, DVTScopeBarHost, IDENavigableItemCoordinatorDelegate, IDEEditorDelegate, DVTStateRepositoryDelegate, NSAnimationDelegate>
{
    NSView *_editorAndNavBarView;
    IDENavBar *_navBar;
    DVTBorderedView *_editorBorderedView;
    DVTGradientImagePopUpButton *_relatedItemsPopUpButton;
    IDEEditorStepperView *_stepperView;
    id <IDEEditorContextDelegate> _delegate;
    DVTStateRepository *_stateRepository;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_navigableItem;
    IDENavigableItem *_greatestDocumentAncestor;
    DVTFileDataType *_cacheFromNavigation_greatestDocumentAncestorFileDataType;
    IDENavigableItem *_navBarNavigableItemRoot;
    IDENavigableItem *_navBarNavigableItem;
    IDEEditorArea *_editorArea;
    IDEEditor *_editor;
    NSString *_documentExtensionIdentifier;
    NSArray *_documentSelectedItems;
    DVTNotificationToken *_editorContextWillOpenNavigableItemNotificationToken;
    DVTNotificationToken *_editorDocumentForNavBarStructureDidChangeNotificationToken;
    DVTNotificationToken *_editorDocumentForNavBarStructureWillCloseNotificationToken;
    DVTNotificationToken *_editorDocumentIsEditedStatusDidChangeNotificationToken;
    DVTNotificationToken *_editorDocumentWillCloseNotificationToken;
    DVTNotificationToken *_findStringChangedNotificationToken;
    DVTNotificationToken *_navigableItemPropertyObserver;
    DVTNotificationToken *_navigableItemCoordinatorDidForgetItemsNotificationToken;
    DVTNotificationToken *_workspaceWillWriteNotificationToken;
    DVTObservingToken *_editorDocumentForNavBarStructureChangedObservingToken;
    DVTObservingToken *_windowMainViewControllerChangedObservingToken;
    DVTNotificationToken *_windowDidBecomeKeyObserverToken;
    DVTObservingToken *_lastActiveEditorContextChangedObservingToken;
    DVTObservingToken *_currentSelectedItemsObservingToken;
    id <DVTCancellable> _deferredUpdateSubDocumentNavigableItemsCancellableToken;
    DVTBindingToken *_navBarNavigableItemRootChildItemsBindingToken;
    DVTBindingToken *_navBarNavigableItemBindingToken;
    DVTNotificationToken *_modelObjectGraphWillCoalesceChangesNotification;
    DVTNotificationToken *_modelObjectGraphDidCoalesceChangesNotification;
    _IDEEditorObjectGraphCoalescingState *_coalescingState;
    IDEEditorGeniusResults *_editorGeniusResults;
    IDENavigableItem *_geniusResultsRootNavigableItem;
    DVTObservingToken *_counterpartsObservingToken;
    IDEEditorHistoryController *_historyController;
    NSArrayController *_navigableItemSiblingsController;
    NSArray *_navigableItemSiblings;
    NSIndexSet *_navigableItemSiblingsSelectionIndexes;
    DVTScopeBarsManager *_scopeBarsManager;
    IDEEditorReadOnlyIndicatorController *_readOnlyIndicatorController;
    DVTObservingToken *_showReadOnlyIndicatorObserver;
    DVTFindBar *_findBar;
    NSDictionary *_editorStateDictionaryPreviousToFind;
    IDEEditorIssueMenuController *_issueMenuController;
    DVTObservingToken *_showIssueMenuControllerObserver;
    IDEEditorMultipleContext *_multipleContext;
    IDEEditorSplittingController *_splittingController;
    id _retryOpenOperationBlock;
    DVTObservingToken *_workspaceLoadingObservingToken;
    IDEEditorHistoryItem *_beforeUninstallHistoryItem;
    NSString *_emptyContentString;
    NSMutableArray *_commandExtensions;
    NSArray *_defaultEditorCategories;
    NSArray *_validEditorCategories;
    DVTStackBacktrace *_beganChangingNavigableItemBacktrace;
    int _borderSides;
    BOOL _showRelatedItemsControl;
    BOOL _showNavBarHistoryStepperControls;
    BOOL _showSiblingStepperControl;
    BOOL _showMiniIssueNavigator;
    BOOL _showSplittingControls;
    BOOL _changingNavBarNavigableItem;
    BOOL _isComparisonContext;
    BOOL _isPrimaryEditorContext;
    BOOL _viewIsInstalled;
    BOOL _shouldObserveDocumentChanges;
    BOOL _editorProvidesPathCellMenuItems;
    BOOL _isPerformingStateRestoration;
    BOOL _hideWorkspaceLoadingProgressIndicator;
    BOOL _canAddSplit;
    BOOL _canRemoveSplit;
    BOOL _isReplacingClosedDocument;
    BOOL _isDraggingPathCell;
    BOOL _isFetchingCurrentSelectedItems;
    BOOL _shouldImmediatleyProcessCurrentSelectedItemsChange;
    unsigned long long _currentSwipeAnimationGeneration;
    char *_swipeAnimationAborted;
    BOOL _disableGeniusResultUpdatesDuringSwipeAnimation;
    NSView *_swipeLayerView;
    CALayer *_swipeBackgroundLayer;
    CALayer *_swipeForegroundLayer;
    id _swipeCompletionBlock;
    NSDictionary *_editorStateDictionaryPreviousToSwipe;
    NSURL *_originalRequestedDocumentURL;
    _IDEGeniusResultsContext *_geniusResultsContext;
}

+ (BOOL)_canEditDocumentURL:(id)arg1 fileDataType:(id)arg2 documentExtensionIdentifier:(id)arg3 withEditorCategories:(id)arg4;
+ (BOOL)_canEditEditorHistoryItem:(id)arg1 withEditorCategories:(id)arg2;
+ (id)_defaultDocumentExtensionForDocumentURL:(id)arg1 fileDataType:(id)arg2 withEditorCategories:(id)arg3;
+ (id)_titleForNavigationUserInterfaceItem:(id)arg1 forEventBehavior:(int)arg2 fromPrimaryEditorContext:(BOOL)arg3;
+ (BOOL)automaticallyNotifiesObserversOfGreatestDocumentAncestor;
+ (BOOL)automaticallyNotifiesObserversOfNavBarNavigableItem;
+ (BOOL)automaticallyNotifiesObserversOfNavigableItem;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingIsLastActiveEditorContext;
+ (id)keyPathsForValuesAffectingValueForNavBarNavigableItemRootChildItems;
+ (struct CGColor *)linenColor;
+ (id)navigationLogAspect;
- (void).cxx_destruct;
- (void)_adjustSubviewBorders;
- (void)_applyEditorStateDictionary:(id)arg1 forDocumentExtensionIdentifier:(id)arg2 atDocumentURLToCurrentEditor:(id)arg3;
- (BOOL)_canAskDocumentToClose;
- (BOOL)_canChangeNavigableItem;
- (BOOL)_canEditEditorHistoryItem:(id)arg1;
- (BOOL)_canEditEditorOpenSpecifier:(id)arg1;
- (BOOL)_canEditEditorOpenSpecifier:(id)arg1 withEditorCategories:(id)arg2;
- (void)_changeMaximumRecentFilesLimit:(id)arg1;
- (void)_checkShouldCoalesceUpdatesForCurrentSelectedItemsChanged;
- (void)_clearRecentEditorDocumentsList:(id)arg1;
- (void)_clearWorkspaceloadingObservation;
- (id)_currentSelectedDocumentLocations;
- (void)_currentSelectedItemsChanged;
- (id)_defaultDocumentExtensionForNavigableItem:(id)arg1;
- (id)_defaultEditorStateDictionaryForDocumentExtensionIdentifier:(id)arg1 forDocumentURL:(id)arg2;
- (BOOL)_editorGeniusResultsGenerationEnabled;
- (BOOL)_editorHasFocus;
- (BOOL)_enableJumpToCounterpartMenuItems;
- (id)_findBar;
- (BOOL)_findBarHasFocus;
- (id)_findScopeBar;
- (id)_generateNodeAndAddMappingToWorkspaceTabControllerLayoutTree:(id)arg1;
- (void)_giveEditorFocusIfNeeded;
- (void)_greatestDocumentAncestorWasForgotten;
- (id)_hiddenMenuItemForCommandExtension:(id)arg1;
- (void)_hideFindBarAndRestoreSelection:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_hideSwipeOverlay;
- (id)_imageOfCurrentEditor;
- (void)_importNavigableItem:(id)arg1;
- (void)_installFindBar;
- (BOOL)_isCurrentEventARepeatKeyDownEvent;
- (void)_jumpToCounterpartUp:(BOOL)arg1;
- (id)_jumpToCounterpartsCategoryNavigableItem;
- (void)_mainViewControllerChanged;
- (void)_moveOverlayToMatchGestureAmount:(double)arg1 imageOfCurrentEditorOnTop:(BOOL)arg2;
- (void)_navigableItemChanged;
- (id)_navigableItemForEditingFromArchivedRepresentation:(id)arg1 error:(id *)arg2;
- (void)_navigateAwayFromCurrentDocumentWithURL:(id)arg1;
- (void)_navigateAwayFromDocument:(id)arg1 historyItem:(id)arg2;
- (void)_navigateToRelatedNavigableItem:(id)arg1;
- (id)_newEditorDocumentWithClass:(Class)arg1 forURL:(id)arg2 withContentsOfURL:(id)arg3 ofType:(id)arg4 extension:(id)arg5 error:(id *)arg6;
- (BOOL)_notifyDelegateAndOpenEditorHistoryItem:(id)arg1 previousHistoryItemOrNil:(id)arg2 skipSubDocumentNavigationUnlessEditorIsReplaced:(BOOL)arg3;
- (BOOL)_notifyDelegateAndOpenEditorHistoryItem:(id)arg1 updateHistory:(BOOL)arg2 skipSubDocumentNavigationUnlessEditorIsReplaced:(BOOL)arg3;
- (BOOL)_notifyDelegateAndOpenEditorOpenSpecifier:(id)arg1 updateHistory:(BOOL)arg2;
- (BOOL)_notifyDelegateAndOpenNavigableItem:(id)arg1 withContentsURL:(id)arg2 documentExtensionIdentifier:(id)arg3 locationToSelect:(id)arg4 annotationRepresentedObject:(id)arg5 stateDictionary:(id)arg6 annotationWantsIndicatorAnimation:(BOOL)arg7 exploreAnnotationRepresentedObject:(id)arg8 highlightSelection:(BOOL)arg9 skipSubDocumentNavigationUnlessEditorIsReplaced:(BOOL)arg10;
- (BOOL)_openEditorHistoryItem:(id)arg1 previousHistoryItemOrNil:(id)arg2 skipSubDocumentNavigationUnlessEditorIsReplaced:(BOOL)arg3;
- (BOOL)_openEditorHistoryItem:(id)arg1 updateHistory:(BOOL)arg2;
- (void)_openEditorHistoryItemFromStateSaving:(id)arg1;
- (BOOL)_openEditorOpenSpecifier:(id)arg1 updateHistory:(BOOL)arg2;
- (BOOL)_openEmptyEditor;
- (void)_openInAdjacentEditorWithEventBehavior:(int)arg1;
- (int)_openNavigableItem:(id)arg1 documentExtension:(id)arg2 document:(id)arg3 shouldInstallEditorBlock:(id)arg4;
- (int)_openNavigableItem:(id)arg1 withContentsOfURL:(id)arg2 documentExtension:(id)arg3 shouldInstallEditorBlock:(id)arg4;
- (int)_openNavigableItem:(id)arg1 withContentsOfURL:(id)arg2 shouldInstallEditorBlock:(id)arg3;
- (void)_performBlockInsideReentrantGuard:(id)arg1;
- (void)_popUpMenuForNavigableItem:(id)arg1;
- (void)_preloadSwipeInfrastructure;
- (void)_primitiveSetNavBarRootNavigableItem:(id)arg1 selectedNavigableItem:(id)arg2;
- (void)_rebuildLeftControlGroup;
- (void)_rebuildRightControlGroup;
- (id)_recentEditorDocumentsCapacityPreferenceMenuItem;
- (void)_registerForDocumentNotificationsForDocument:(id)arg1;
- (void)_selectNavigableItem:(id)arg1 updateOutputSelection:(id)arg2;
- (void)_setCanAddSplit:(BOOL)arg1;
- (void)_setCanRemoveSplit:(BOOL)arg1;
- (void)_setEditorGeniusResultsGenerationEnabled:(BOOL)arg1;
- (void)_setEditorView;
- (void)_setEmptyRootNavigableItem;
- (void)_setShowMiniIssueNavigator:(BOOL)arg1;
- (void)_setShowNavBarHistoryStepperControls:(BOOL)arg1;
- (void)_setShowRelatedItemsControl:(BOOL)arg1;
- (void)_setShowSiblingStepperControl:(BOOL)arg1;
- (void)_setShowSplittingControls:(BOOL)arg1;
- (void)_setSupportsReadOnlyIndicator:(BOOL)arg1;
- (BOOL)_showSwipeOverlayForDirection:(BOOL)arg1 imageOfCurrentEditorOnTop:(char *)arg2;
- (struct CGRect)_swipeLayerViewFrame;
- (void)_swipeToGoForward:(BOOL)arg1;
- (void)_syncGradientStyleForJumpBarControls;
- (void)_teardownDocumentNotifications;
- (void)_uninstallFindBar;
- (void)_updateNavBarNavigableItemForNavItem:(id)arg1;
- (void)_updateSiblingInfoFromNavigableItem;
- (void)_updateSiblingStepperControlVisibility;
- (void)_updateSubDocumentNavigableItems;
- (BOOL)_validateOpenInAdjacentEditorCommandForUserInterfaceItem:(id)arg1 forEventBehavior:(int)arg2;
- (BOOL)_viewHasFocus:(id)arg1;
- (void)_writeCurrentStateToLastUsedDictionaryIfNeeded;
- (void)addSplitForSplittingController:(id)arg1;
@property(nonatomic) int borderSides; // @synthesize borderSides=_borderSides;
@property(nonatomic) BOOL canAddSplit; // @synthesize canAddSplit=_canAddSplit;
- (BOOL)canBecomeMainViewController;
@property(nonatomic) BOOL canRemoveSplit; // @synthesize canRemoveSplit=_canRemoveSplit;
- (void)closeDocument:(id)arg1;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (id)currentHistoryItem;
- (id)currentHistoryItemWithImageOfCurrentEditor;
- (id)currentHistoryStack;
@property(copy) NSArray *defaultEditorCategories; // @synthesize defaultEditorCategories=_defaultEditorCategories;
@property(retain) id <IDEEditorContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)discardEditing;
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;
@property(readonly) NSString *documentExtensionIdentifier; // @synthesize documentExtensionIdentifier=_documentExtensionIdentifier;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (BOOL)dvtFindBar:(id)arg1 validateUserInterfaceItem:(id)arg2;
@property(retain, nonatomic) IDEEditor *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) IDEEditorArea *editorArea; // @synthesize editorArea=_editorArea;
@property(readonly) IDEEditorGeniusResults *editorGeniusResults; // @synthesize editorGeniusResults=_editorGeniusResults;
- (void)find:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)fixNextIssue:(id)arg1;
- (void)fixPreviousIssue:(id)arg1;
@property(retain) _IDEGeniusResultsContext *geniusResultsContext; // @synthesize geniusResultsContext=_geniusResultsContext;
- (void)goBackInHistoryByCommand:(id)arg1;
- (void)goBackInHistoryByCommandWithAlternate:(id)arg1;
- (void)goBackInHistoryByCommandWithShiftPlusAlternate:(id)arg1;
- (void)goForwardInHistoryByCommand:(id)arg1;
- (void)goForwardInHistoryByCommandWithAlternate:(id)arg1;
- (void)goForwardInHistoryByCommandWithShiftPlusAlternate:(id)arg1;
- (struct CGRect)grabRect;
- (id)greatestDocumentAncestor;
- (void)hideFindBar:(id)arg1;
@property BOOL hideWorkspaceLoadingProgressIndicator; // @synthesize hideWorkspaceLoadingProgressIndicator=_hideWorkspaceLoadingProgressIndicator;
- (void)ide_unlockDocument:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(getter=isComparisonContext) BOOL comparisonContext; // @synthesize comparisonContext=_isComparisonContext;
- (BOOL)isLastActiveEditorContext;
@property(readonly, getter=isPrimaryEditorContext) BOOL primaryEditorContext;
- (void)jumpToInstructionPointer:(id)arg1;
- (void)jumpToNextCounterpart:(id)arg1;
- (void)jumpToNextCounterpartWithAlternate:(id)arg1;
- (void)jumpToNextCounterpartWithShiftPlusAlternate:(id)arg1;
- (void)jumpToNextIssue:(id)arg1;
- (void)jumpToPreviousCounterpart:(id)arg1;
- (void)jumpToPreviousCounterpartWithAlternate:(id)arg1;
- (void)jumpToPreviousCounterpartWithShiftPlusAlternate:(id)arg1;
- (void)jumpToPreviousIssue:(id)arg1;
- (void)loadView;
- (void)menuNeedsUpdate:(id)arg1;
@property(retain) IDEEditorMultipleContext *multipleContext; // @synthesize multipleContext=_multipleContext;
@property(readonly) IDENavigableItem *navBarNavigableItem; // @synthesize navBarNavigableItem=_navBarNavigableItem;
@property(readonly) IDENavigableItem *navBarNavigableItemRoot; // @synthesize navBarNavigableItemRoot=_navBarNavigableItemRoot;
- (id)navBarNavigableItemRootChildItems;
@property(retain, nonatomic) IDENavigableItem *navigableItem; // @synthesize navigableItem=_navigableItem;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
- (id)navigableItemCoordinator:(id)arg1 editorDocumentForNavigableItem:(id)arg2;
@property(readonly) NSArray *navigableItemSiblings; // @synthesize navigableItemSiblings=_navigableItemSiblings;
@property(readonly) NSIndexSet *navigableItemSiblingsSelectionIndexes; // @synthesize navigableItemSiblingsSelectionIndexes=_navigableItemSiblingsSelectionIndexes;
- (BOOL)openEditorHistoryItem:(id)arg1;
- (BOOL)openEditorOpenSpecifier:(id)arg1;
- (void)openInAdjacentEditorWithAlternate:(id)arg1;
- (void)openInAdjacentEditorWithShiftPlusAlternate:(id)arg1;
@property(retain) NSURL *originalRequestedDocumentURL; // @synthesize originalRequestedDocumentURL=_originalRequestedDocumentURL;
- (BOOL)pathCell:(id)arg1 beginDragForComponentCell:(id)arg2;
- (id)pathCell:(id)arg1 childItemsForItem:(id)arg2;
- (void)pathCell:(id)arg1 didEndDragForComponentCell:(id)arg2;
- (void)pathCell:(id)arg1 didUpdateMenu:(id)arg2;
- (id)pathCell:(id)arg1 menuItemForNavigableItem:(id)arg2 defaultMenuItem:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldEnableSelection:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldInitiallyShowMenuSearch:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (BOOL)pathControl:(id)arg1 acceptDrop:(id)arg2;
- (unsigned long long)pathControl:(id)arg1 validateDrop:(id)arg2;
- (id)pathControlPasteboardReadingOptions;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)primitiveInvalidate;
- (void)removeSplitForSplittingController:(id)arg1;
- (void)replace:(id)arg1;
- (void)replaceAll:(id)arg1;
- (void)replaceAndFindNext:(id)arg1;
- (void)replaceAndFindPrevious:(id)arg1;
@property(copy) id retryOpenOperationBlock; // @synthesize retryOpenOperationBlock=_retryOpenOperationBlock;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) NSView *scopeBarsBaseView;
@property(readonly) DVTScopeBarsManager *scopeBarsManager; // @synthesize scopeBarsManager=_scopeBarsManager;
- (id)scopeBarsManagerForEditor:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (struct _NSRange)selectedRangeForFindBar:(id)arg1;
- (void)setEmptyContentString:(id)arg1;
- (void)setGreatestDocumentAncestor:(id)arg1;
- (void)setNavBarNavigableItem:(id)arg1;
- (void)setNavigableItemSiblingsSelectionIndexes:(id)arg1;
@property(nonatomic) BOOL showMiniIssueNavigator; // @synthesize showMiniIssueNavigator=_showMiniIssueNavigator;
@property(nonatomic) BOOL showNavBarHistoryStepperControls; // @synthesize showNavBarHistoryStepperControls=_showNavBarHistoryStepperControls;
@property(nonatomic) BOOL showRelatedItemsControl; // @synthesize showRelatedItemsControl=_showRelatedItemsControl;
@property(nonatomic) BOOL showSiblingStepperControl; // @synthesize showSiblingStepperControl=_showSiblingStepperControl;
@property(nonatomic) BOOL showSplittingControls; // @synthesize showSplittingControls=_showSplittingControls;
@property(copy) NSArray *validEditorCategories; // @synthesize validEditorCategories=_validEditorCategories;
- (void)setupNewEditor:(id)arg1;
- (void)showDocumentItemsMenu:(id)arg1;
- (void)showGroupFilesMenu:(id)arg1;
- (void)showMiniIssuesNavigatorMenu:(id)arg1;
- (void)showNextFilesHistoryMenu:(id)arg1;
- (void)showNextHistoryMenu:(id)arg1;
- (void)showPreviousFilesHistoryMenu:(id)arg1;
- (void)showPreviousHistoryMenu:(id)arg1;
- (void)showRelatedItemsMenu:(id)arg1;
- (void)showTopLevelItemsMenu:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)stateRepositoryDidChange:(id)arg1;
- (id)supplementalMainViewController;
- (void)swipeWithEvent:(id)arg1;
- (void)takeFocus;
- (void)updateWithHistoryStack:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;
- (id)viewToShowWrapOrEndOfFileBezelOn:(id)arg1;
- (void)viewWillUninstall;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (id)willPresentError:(id)arg1;
- (id)workspace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

