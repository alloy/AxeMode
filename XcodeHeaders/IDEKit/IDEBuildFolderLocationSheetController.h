/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTFilePathFieldCellDelegate.h"
#import "DVTInvalidation.h"

@class DVTFilePathField, DVTStackBacktrace, IDEWorkspace, NSButton, NSNumber, NSPopUpButton, NSString, NSTextField;

@interface IDEBuildFolderLocationSheetController : NSWindowController <DVTFilePathFieldCellDelegate, DVTInvalidation>
{
    IDEWorkspace *_workspace;
    int _buildLocationStyle;
    NSString *_sharedBuildFolderName;
    int _customBuildLocationType;
    NSString *_customBuildProductsPath;
    NSString *_customBuildIntermediatesPath;
    id <IDEBuildFolderLocationSheetControllerDelegate> _delegate;
    NSButton *_buildStyleXcodeDefaultButton;
    NSButton *_buildStyleUniqueButton;
    NSButton *_buildStyleSharedButton;
    NSButton *_buildStyleCustomButton;
    NSButton *_buildStyleLegacyButton;
    NSPopUpButton *_customBuildLocationTypePopUp;
    NSTextField *_sharedBuildFolderNameField;
    DVTFilePathField *_buildProductsFolderPathField;
    DVTFilePathField *_buildIntermediatesFolderPathField;
    DVTFilePathField *_buildProductsFolderFilePathLabel;
    DVTFilePathField *_buildIntermediatesFolderFilePathLabel;
    NSTextField *_buildProductsFolderFilePathRelativeLabel;
    NSTextField *_buildIntermediatesFolderFilePathRelativeLabel;
}

+ (BOOL)automaticallyNotifiesObserversOfCustomBuildLocationTypeIndex;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingBuildIntermediatesFolderPath;
+ (id)keyPathsForValuesAffectingBuildProductsFolderPath;
+ (id)keyPathsForValuesAffectingCustomBuildLocationTypeIndex;
+ (id)keyPathsForValuesAffectingUseCustomBuildPaths;
+ (id)keyPathsForValuesAffectingUseSharedBuildFolder;
- (void).cxx_destruct;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (id)_buildPathStringOfType:(int)arg1;
- (void)_updateControlsForCurrentLocationStyle;
- (void)_updateCustomBuildPathsToDefaultIfNeeded;
- (BOOL)_validateCustomBuildPath:(id *)arg1 pathDescription:(id)arg2 error:(id *)arg3;
@property(readonly) NSString *buildIntermediatesFolderPath;
@property(nonatomic) int buildLocationStyle; // @synthesize buildLocationStyle=_buildLocationStyle;
@property(readonly) NSString *buildProductsFolderPath;
- (void)buildStyleButtonPressed:(id)arg1;
- (void)closeSheet:(id)arg1;
@property(copy) NSString *customBuildIntermediatesPath; // @synthesize customBuildIntermediatesPath=_customBuildIntermediatesPath;
@property(nonatomic) int customBuildLocationType; // @synthesize customBuildLocationType=_customBuildLocationType;
@property(copy) NSNumber *customBuildLocationTypeIndex;
@property(copy) NSString *customBuildProductsPath; // @synthesize customBuildProductsPath=_customBuildProductsPath;
@property(readonly) NSString *defaultCustomBuildIntermediatesPath;
@property(readonly) NSString *defaultCustomBuildProductsPath;
@property(readonly) NSString *defaultSharedBuildFolderName;
@property(retain) id <IDEBuildFolderLocationSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)initWithWindow:(id)arg1;
- (void)primitiveInvalidate;
@property(copy) NSString *sharedBuildFolderName; // @synthesize sharedBuildFolderName=_sharedBuildFolderName;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)showSheetInWindow:(id)arg1;
@property(readonly) BOOL useCustomBuildPaths;
@property(readonly) BOOL useSharedBuildFolder;
- (BOOL)validateCustomBuildIntermediatesPath:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCustomBuildProductsPath:(id *)arg1 error:(id *)arg2;
- (BOOL)validateSharedBuildFolderName:(id *)arg1 error:(id *)arg2;
- (void)windowDidLoad;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

