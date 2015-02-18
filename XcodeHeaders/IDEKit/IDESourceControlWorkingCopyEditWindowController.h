/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTReplacementViewDelegate.h"
#import "DVTTabChooserViewDelegate.h"
#import "IDESourceControlBranchTableDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class DVTBindingToken, DVTBorderedView, DVTChoice, DVTObservingToken, DVTReplacementView, DVTTabChooserView, IDESourceControlWorkingCopyConfiguration, IDESourceControlWorkingTree, IDEWorkspace, NSButton, NSDictionary, NSMutableArray, NSPopUpButton, NSString, NSTextField;

@interface IDESourceControlWorkingCopyEditWindowController : NSWindowController <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTReplacementViewDelegate, IDESourceControlBranchTableDelegate, DVTTabChooserViewDelegate>
{
    DVTBorderedView *_borderedView;
    NSTextField *_windowTitle;
    DVTReplacementView *_detailView;
    DVTReplacementView *_branchesReplacementView;
    DVTBorderedView *_infoContainerView;
    NSTextField *_workingCopyURLField;
    NSTextField *_workingCopyLocalURLField;
    NSButton *_includedInCheckout;
    NSPopUpButton *_checkoutPopupButton;
    NSTextField *_checkoutDescriptionTextField;
    NSDictionary *_wccConfigurationDictionary;
    DVTChoice *_infoChoice;
    DVTChoice *_configChoice;
    DVTChoice *_remotesChoice;
    DVTChoice *_branchesChoice;
    NSButton *_okButton;
    IDESourceControlWorkingCopyEditWindowController *_wc;
    DVTBindingToken *_wcConfigToken;
    DVTBindingToken *_wccConfigToken;
    DVTObservingToken *_tabChooserSelectionObservingToken;
    NSMutableArray *_wcEditedObservers;
    BOOL _editedWorkingCopyConfiguration;
    id <DVTCancellable> _currentBranchToken;
    DVTTabChooserView *_tabChooser;
    IDEWorkspace *_workspace;
    IDESourceControlWorkingTree *_workingTree;
    IDESourceControlWorkingCopyConfiguration *_wcc;
    id _continuationBlock;
}

- (void).cxx_destruct;
- (void)_fetchBranches;
- (void)_setupDetailViewWithSelectedChoiceIdentifier:(id)arg1;
- (void)_setupStatePopup;
- (void)beginSheetForWindow:(id)arg1;
- (void)beginSheetWithSelectedTab:(id)arg1 forWindow:(id)arg2;
- (id)branchTableViewController;
@property(copy) id continuationBlock; // @synthesize continuationBlock=_continuationBlock;
- (id)currentWCC;
- (void)didRemoveBranch;
- (void)displayError:(id)arg1;
- (void)done:(id)arg1;
- (void)reloadCurrentBranch;
- (void)setIncludedInCheckout:(id)arg1;
- (void)setOptional:(id)arg1;
- (void)setRequired:(id)arg1;
@property __weak DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
@property(retain) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
@property(retain) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
- (void)willRemoveBranch;
- (void)windowDidLoad;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

