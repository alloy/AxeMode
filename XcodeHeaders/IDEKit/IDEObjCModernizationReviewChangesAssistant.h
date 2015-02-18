/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEAssistant.h>

#import "IDEComparisonEditorDataSource.h"
#import "IDEReviewFilesDataSource.h"

@class DVTBorderedView, DVTMapTable, DVTObservingToken, IDENavigableItemCoordinator, IDENavigatorDataCell, IDEReviewFilesViewController, NSArray, NSMutableSet, NSObject<OS_dispatch_semaphore>, NSOperationQueue, NSString;

@interface IDEObjCModernizationReviewChangesAssistant : IDEAssistant <IDEReviewFilesDataSource, IDEComparisonEditorDataSource>
{
    DVTMapTable *_editorDocumentByFilePath;
    NSArray *_flatNavigableItems;
    IDENavigableItemCoordinator *_flatFileNavItemCoordinator;
    IDENavigatorDataCell *_containerFileReferenceDataCell;
    IDENavigatorDataCell *_groupDataCell;
    IDENavigatorDataCell *_fileReferenceDataCell;
    IDEReviewFilesViewController *_reviewFilesViewController;
    DVTBorderedView *_borderedView;
    DVTObservingToken *_comparisonEditorObservingToken;
    id _completionBlock;
    NSOperationQueue *_operationQueue;
    NSMutableSet *_readOnlyStatusObservationTokens;
    unsigned long long _numCheckedFilePaths;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSMutableSet *_bindingTokens;
}

+ (id)keyPathsForValuesAffectingCanFinish;
- (void).cxx_destruct;
- (void)_applyChanges;
- (id)_checkedDocuments;
- (id)_containerFileReferenceCell;
- (void)_convertedEditorDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)_documentForLocation:(id)arg1 completionBlock:(id)arg2;
- (void)_editorDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)_fileReferenceCell;
- (void)_finishWithError:(id)arg1;
- (id)_groupCell;
- (BOOL)_selectedTargetsContainFilePath:(id)arg1;
- (void)_setInitialSelectionForNavigatorOutlineView:(id)arg1;
- (void)_snapshotAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_snapshotContainerItem:(id)arg1 customizationBlock:(id)arg2;
- (void)_updateBuildSettingsAndFinish;
- (BOOL)canFinish;
- (BOOL)canGoBack;
- (id)documentForPrimaryDocumentLocation:(id)arg1 completionBlock:(id)arg2;
- (id)documentForSecondaryDocumentLocation:(id)arg1 completionBlock:(id)arg2;
- (id)fileSystemNavigableItems;
- (void)finishWithCompletionBlock:(id)arg1;
@property(copy) NSArray *flatNavigableItems; // @synthesize flatNavigableItems=_flatNavigableItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(readonly, copy) NSArray *issueNavigableItems;
- (void)loadView;
- (id)navigableItemsForPrimaryDocumentLocation:(id)arg1 usingNavigableItemCoordinator:(id)arg2 completionBlock:(id)arg3;
- (id)navigableItemsForSecondaryDocumentLocation:(id)arg1 usingNavigableItemCoordinator:(id)arg2 completionBlock:(id)arg3;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (BOOL)shouldSelectFirstDiff;
- (void)viewDidInstall;
- (void)viewWillUninstall;
@property(readonly, copy) NSArray *workspaceNavigableItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

