/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "NSPopoverDelegate.h"

@class DVTReplacementView, IDEBatchFindScopeEditor, IDEWorkspace, NSArray, NSImageView, NSPanel, NSPopUpButton, NSPopover, NSString;

@interface IDEBatchFindStrategiesController : DVTViewController <NSPopoverDelegate>
{
    NSPanel *_locationEditorPanel;
    NSPopUpButton *_locationPopupButton;
    NSImageView *_topShadow;
    DVTReplacementView *_locationEditorContentView;
    NSArray *_customFindScopes;
    IDEWorkspace *_workspace;
    NSString *_findScopeUUID;
    NSString *_findWorkspacePath;
    int _findType;
    int _matchStyle;
    BOOL _ignoresCase;
    id _scopeEditorCompletionBlock;
    BOOL _isEditingScope;
    NSPopover *_popover;
    IDEBatchFindScopeEditor *_scopeEditor;
    NSString *_findWorkspacePathDescription;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
+ (id)newScopeImage;
+ (id)scopeImage;
+ (id)sharedStrategiesController;
- (void).cxx_destruct;
- (BOOL)_findScopeUUIDValid:(id)arg1;
- (void)_loadDefaultValues;
- (id)_predicateForScope;
- (void)_validateCustomScopeSelection;
- (id)addScope;
- (void)commitStateToDictionary:(id)arg1;
@property(readonly) NSString *customScopeDescription;
- (void)deleteScopeWithUUID:(id)arg1;
- (id)descriptionForCriteriaForAttributedString:(id)arg1;
- (BOOL)doneLocationEditor;
- (id)findCriteriaForAttributedString:(id)arg1 containerScopes:(id)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSString *findScopeUUID; // @synthesize findScopeUUID=_findScopeUUID;
@property(nonatomic) int findType; // @synthesize findType=_findType;
@property(copy, nonatomic) NSString *findWorkspacePath; // @synthesize findWorkspacePath=_findWorkspacePath;
@property(retain) NSString *findWorkspacePathDescription; // @synthesize findWorkspacePathDescription=_findWorkspacePathDescription;
- (id)getCustomScopes;
@property(nonatomic) BOOL ignoresCase; // @synthesize ignoresCase=_ignoresCase;
- (id)initWithWorkspace:(id)arg1;
@property(nonatomic) BOOL isEditingScope; // @synthesize isEditingScope=_isEditingScope;
- (void)loadView;
@property(nonatomic) int matchStyle; // @synthesize matchStyle=_matchStyle;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)primitiveInvalidate;
- (void)revertStateWithDictionary:(id)arg1;
@property(retain, nonatomic) IDEBatchFindScopeEditor *scopeEditor; // @synthesize scopeEditor=_scopeEditor;
- (id)selectedScopeName;
- (void)setParametersFromCriteria:(id)arg1;
- (void)showScopeEditor:(id)arg1 inRect:(struct CGRect)arg2 withCompletionBlock:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

