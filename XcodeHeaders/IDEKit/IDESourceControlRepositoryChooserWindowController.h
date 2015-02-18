/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "IDESourceControlWindowController.h"
#import "NSUserInterfaceValidations.h"

@class IDESourceControlOperationInfo, IDESourceControlRepositoryChooserItem, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSButton, NSPopUpButton, NSString, NSWindow;

@interface IDESourceControlRepositoryChooserWindowController : NSWindowController <NSUserInterfaceValidations, IDESourceControlWindowController>
{
    NSPopUpButton *_popupButton;
    NSButton *_chooseButton;
    IDESourceControlOperationInfo *_operationInfo;
    IDESourceControlRepositoryChooserItem *_repositoryChooserItem;
    id _continuationBlock;
    int _requestType;
    NSString *_messageText;
    NSString *_buttonText;
    NSWindow *_parentWindow;
    id <DVTInvalidation> _operationToken;
    BOOL _inProgress;
    BOOL _disableFastForwards;
    IDEWorkspace *_workspace;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    id _commitAndPushConinuationBlock;
}

- (void).cxx_destruct;
- (void)_populateSheet;
- (void)beginSheetForWindow:(id)arg1;
@property(copy) NSString *buttonText; // @synthesize buttonText=_buttonText;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)choose:(id)arg1;
@property(copy) id commitAndPushConinuationBlock; // @synthesize commitAndPushConinuationBlock=_commitAndPushConinuationBlock;
@property(copy) id continuationBlock; // @synthesize continuationBlock=_continuationBlock;
@property BOOL disableFastForwards; // @synthesize disableFastForwards=_disableFastForwards;
- (void)displayError:(id)arg1;
- (void)displayErrorAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)displayErrorAndCancel:(id)arg1;
- (void)endSheet;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(copy) NSString *messageText; // @synthesize messageText=_messageText;
@property(retain) IDESourceControlOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain) IDESourceControlRepositoryChooserItem *repositoryChooserItem; // @synthesize repositoryChooserItem=_repositoryChooserItem;
- (void)repositoryChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
@property int requestType; // @synthesize requestType=_requestType;
- (void)selectRepository:(id)arg1;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (id)successImage;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

