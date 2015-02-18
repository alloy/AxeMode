/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class DVTBorderedView, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTTableView, IDEControlGroup, IDESourceControlCreateGitRepositoryOperationInfo, IDESourceControlOperationWindow, IDESourceControlWorkingCopyConfiguration, IDESourceControlWorkingTree, NSArray, NSButton, NSImage, NSMenuItem, NSMutableArray, NSOperationQueue, NSPopUpButton, NSString, NSTextField, NSWindow;

@interface IDESourceControlGitConfigViewController : DVTViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    DVTTableView *_remotesTableView;
    DVTBorderedView *_glassBarBorderedView;
    DVTGradientImagePopUpButton *_addButton;
    DVTGradientImageButton *_removeButton;
    IDEControlGroup *_controlGroup;
    NSWindow *_newRemoteWindow;
    NSTextField *_remoteNameField;
    NSTextField *_remoteAddressField;
    NSButton *_newRemoteOKButton;
    IDESourceControlWorkingTree *_workingTree;
    IDESourceControlWorkingCopyConfiguration *_workingCopyConfiguration;
    NSMutableArray *_remotes;
    NSMutableArray *_remotesToDelete;
    IDESourceControlOperationWindow *_createRemoteWindow;
    NSTextField *_localRemoteNameField;
    NSPopUpButton *_serverPopup;
    NSMenuItem *_loadingItem;
    DVTObservingToken *_serversObservingToken;
    NSOperationQueue *_operationQueue;
    IDESourceControlCreateGitRepositoryOperationInfo *_operationInfo;
    NSTextField *_createRemoteWindowStatusText;
    BOOL _shouldHideServerWarningButton;
    BOOL _canCreateQueryComplete;
    BOOL _canCreateRepositoryOnServer;
    BOOL _localRemoteNameGood;
    BOOL _inProgress;
    id _selectedServer;
    NSArray *_servers;
    NSImage *_warningImage;
}

+ (id)defaultViewNibName;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingShouldHideServerWarningButton;
- (void).cxx_destruct;
- (void)_checkCanCreateRepository;
- (void)_clearServersPopup;
- (void)_setupViewsWithWorkingTrees;
- (void)_updateServersPopup;
- (void)addExistingRemote:(id)arg1;
- (void)addNewServerAction:(id)arg1;
@property(nonatomic) BOOL canCreateQueryComplete; // @synthesize canCreateQueryComplete=_canCreateQueryComplete;
@property(nonatomic) BOOL canCreateRepositoryOnServer; // @synthesize canCreateRepositoryOnServer=_canCreateRepositoryOnServer;
- (void)cancelAddRemote:(id)arg1;
- (void)cancelCreateRemote:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)createNewRemote:(id)arg1;
- (void)createRemoteGitRepositoryForWorkingCopy:(id)arg1 withName:(id)arg2 localRemoteName:(id)arg3 pushingToServer:(id)arg4 withCompletionBlock:(id)arg5;
- (id)currentWCC;
- (void)displayCannotCreateRepositorySheet:(id)arg1;
- (void)displayCannotCreateRepositorySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayError:(id)arg1 forWindow:(id)arg2;
- (id)dvtExtraBindings;
@property(nonatomic) BOOL inProgress; // @synthesize inProgress=_inProgress;
- (void)loadView;
@property(nonatomic) BOOL localRemoteNameGood; // @synthesize localRemoteNameGood=_localRemoteNameGood;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)okAddRemote:(id)arg1;
- (void)okCreateRemote:(id)arg1;
- (void)primitiveInvalidate;
- (void)removeRemote:(id)arg1;
- (void)selectServer:(id)arg1;
@property(retain, nonatomic) id selectedServer; // @synthesize selectedServer=_selectedServer;
- (void)serverSelectedAction:(id)arg1;
@property(retain, nonatomic) NSArray *servers; // @synthesize servers=_servers;
@property(nonatomic) BOOL shouldHideServerWarningButton; // @synthesize shouldHideServerWarningButton=_shouldHideServerWarningButton;
@property(retain, nonatomic) NSImage *warningImage; // @synthesize warningImage=_warningImage;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)updateBoundWorkingCopyConfiguration;
- (void)updateBoundWorkingTree;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
