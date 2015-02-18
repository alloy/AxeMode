/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTFilePathFieldCellDelegate.h"
#import "IDEBuildFolderLocationSheetControllerDelegate.h"

@class DVTFilePathField, IDEXcodeSelectHelper, NSArrayController, NSAttributedString, NSPopUpButton, NSString, NSTextField;

@interface IDELocationsPrefsPaneController : IDEViewController <DVTFilePathFieldCellDelegate, IDEBuildFolderLocationSheetControllerDelegate>
{
    NSString *_customDerivedDataLocation;
    NSString *_customSnapshotsLocation;
    NSString *_customDistributionArchivesLocation;
    int _derivedDataLocationStyle;
    int _snapshotsLocationStyle;
    int _distributionArchivesLocationStyle;
    int _buildLocationStyle;
    NSString *_sharedBuildFolderName;
    int _customBuildLocationType;
    NSString *_customBuildProductsPath;
    NSString *_customBuildIntermediatesPath;
    IDEXcodeSelectHelper *_xcodeSelectHelper;
    DVTFilePathField *_derivedDataFilePathField;
    NSTextField *_derivedDataRelativePathField;
    DVTFilePathField *_snapshotsFilePathField;
    DVTFilePathField *_distributionArchivesFilePathField;
    DVTFilePathField *_derivedDataPathLabel;
    DVTFilePathField *_snapshotsPathLabel;
    DVTFilePathField *_distributionArchivesPathLabel;
    NSPopUpButton *_commandLineToolsPopUp;
    NSArrayController *_commandLineToolsArrayController;
    NSTextField *_derivedDataRelativePathLabel;
}

+ (id)keyPathsForValuesAffectingCustomWorkspaceRelativeDerivedDataLocation;
+ (id)keyPathsForValuesAffectingUseCustomDerivedDataLocation;
+ (id)keyPathsForValuesAffectingUseCustomDistributionArchivesLocation;
+ (id)keyPathsForValuesAffectingUseCustomSnapshotsLocation;
- (void).cxx_destruct;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)_saveLocationsPreferences;
- (void)_updateCustomLocationFieldsForPathTypes;
- (void)_updateDerivedDataCustomLocationFieldForPathType;
- (void)_updateDerivedDataPathLabelForSelectedLocationStyle;
- (void)_updateDistributionArchivesCustomLocationFieldForPathType;
- (void)_updateDistributionArchivesPathLabelForSelectedLocationStyle;
- (void)_updatePathLabelsForSelectedLocationStyles;
- (void)_updateSnapshotsCustomLocationFieldForPathType;
- (void)_updateSnapshotsPathLabelForSelectedLocationStyle;
- (void)_windowDidResignMain:(id)arg1;
- (id)_xcodeSelectPopupSortDescriptors;
- (void)buildFolderLocationSheetDidEndWithBuildLocationStyle:(int)arg1 sharedBuildFolderName:(id)arg2 customBuildLocationType:(int)arg3 customBuildProductsPath:(id)arg4 customBuildIntermediatesPath:(id)arg5;
@property int buildLocationStyle; // @synthesize buildLocationStyle=_buildLocationStyle;
- (void)changeCommandLineTools:(id)arg1;
@property(copy) NSString *customBuildIntermediatesPath; // @synthesize customBuildIntermediatesPath=_customBuildIntermediatesPath;
@property int customBuildLocationType; // @synthesize customBuildLocationType=_customBuildLocationType;
@property(copy) NSString *customBuildProductsPath; // @synthesize customBuildProductsPath=_customBuildProductsPath;
@property(copy, nonatomic) NSString *customDerivedDataLocation; // @synthesize customDerivedDataLocation=_customDerivedDataLocation;
@property(copy, nonatomic) NSString *customDistributionArchivesLocation; // @synthesize customDistributionArchivesLocation=_customDistributionArchivesLocation;
@property(copy, nonatomic) NSString *customSnapshotsLocation; // @synthesize customSnapshotsLocation=_customSnapshotsLocation;
@property(readonly) NSAttributedString *customWorkspaceRelativeDerivedDataLocation;
@property(readonly) NSString *defaultDerivedDataLocation;
@property(readonly) NSString *defaultDistributionArchivesLocation;
@property(readonly) NSString *defaultSnapshotsLocation;
@property(nonatomic) int derivedDataLocationStyle; // @synthesize derivedDataLocationStyle=_derivedDataLocationStyle;
@property(nonatomic) int distributionArchivesLocationStyle; // @synthesize distributionArchivesLocationStyle=_distributionArchivesLocationStyle;
- (void)loadView;
- (void)primitiveInvalidate;
@property(copy) NSString *sharedBuildFolderName; // @synthesize sharedBuildFolderName=_sharedBuildFolderName;
@property(nonatomic) int snapshotsLocationStyle; // @synthesize snapshotsLocationStyle=_snapshotsLocationStyle;
- (void)showBuildFolderLocationSheet:(id)arg1;
@property(readonly) BOOL useCustomDerivedDataLocation;
@property(readonly) BOOL useCustomDistributionArchivesLocation;
@property(readonly) BOOL useCustomSnapshotsLocation;
- (BOOL)validateCustomDerivedDataLocation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCustomDistributionArchivesLocation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateCustomSnapshotsLocation:(id *)arg1 error:(id *)arg2;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

