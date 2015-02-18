/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEEditorModeViewController.h>

@class DVTDiffDescriptor, DVTObservingToken, IDEComparisonEditor, IDEComparisonEditorSubmode;

@interface IDEEditorVersionsMode : IDEEditorModeViewController
{
    DVTObservingToken *_editorToken;
    DVTObservingToken *_selectedMergeDescriptorObserver;
    DVTObservingToken *_conflictCountObserver;
    DVTObservingToken *_toggledDiffDescriptorCountObserver;
    id _editorCustomizationBlock;
    DVTDiffDescriptor *_selectedMergeDescriptor;
    unsigned long long _conflictCount;
    int _allDiffDescriptorsToggledState;
}

+ (BOOL)automaticallyNotifiesObserversOfAllDiffDescriptorsToggledState;
+ (id)keyPathsForValuesAffectingComparisonEditor;
+ (id)keyPathsForValuesAffectingComparisonEditorSubmode;
+ (id)stateSavingIdentifiers;
- (void).cxx_destruct;
- (id)_initWithPrimaryEditorContext:(id)arg1;
- (id)_liftEditorLayoutConfigurationForIdentifier:(id)arg1;
- (id)_persistentRepresentationForIdentifier:(id)arg1;
- (void)_setPersistentRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (void)_stampEditorLayoutConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)_stealPrimaryEditorContext;
@property(nonatomic) int allDiffDescriptorsToggledState; // @synthesize allDiffDescriptorsToggledState=_allDiffDescriptorsToggledState;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
@property(readonly) IDEComparisonEditor *comparisonEditor;
@property(readonly) IDEComparisonEditorSubmode *comparisonEditorSubmode;
@property unsigned long long conflictCount; // @synthesize conflictCount=_conflictCount;
@property(readonly) BOOL currentSelectedDiffDescriptorToggled;
- (void)discardEditing;
- (id)editorContexts;
@property(copy) id editorCustomizationBlock; // @synthesize editorCustomizationBlock=_editorCustomizationBlock;
- (void)loadView;
- (void)primitiveInvalidate;
@property(retain) DVTDiffDescriptor *selectedMergeDescriptor; // @synthesize selectedMergeDescriptor=_selectedMergeDescriptor;
@property BOOL showMiniIssueNavigator;
- (void)toggleCurrentSelectedDiffDescriptor;
- (void)untoggleCurrentSelectedDiffDescriptor;
- (void)viewDidInstall;
- (void)viewWillUninstall;

@end

