/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDELibraryController.h>

@class DVTMapTable, DVTObservingToken, IDEMediaResourceFoldingStrategy, IDEMediaResourceVariantContext, NSDictionary, NSObject<IDEMediaLibraryDelegate>, NSSet;

@interface IDEMediaLibraryController : IDELibraryController
{
    id <DVTInvalidation> _variantContextObservingToken;
    IDEMediaResourceVariantContext *_delegatesVariantContext;
    IDEMediaResourceVariantContext *_genericVariantContext;
    IDEMediaResourceVariantContext *_emptyVariantContext;
    IDEMediaResourceFoldingStrategy *_previousFoldingStrategy;
    DVTObservingToken *_kvoWorkspaceLoadingToken;
    DVTObservingToken *_delegateExportedVariantContextKVOToken;
    DVTObservingToken *_delegateExportedVariantKVOToken;
    NSObject<IDEMediaLibraryDelegate> *_delegate;
    NSDictionary *_variantForResolving;
    DVTMapTable *_variantSetsToAssets;
    BOOL _isLibraryLoaded;
    NSSet *_mediaRepositories;
}

- (void).cxx_destruct;
- (void)activeEditorDocumentDidChange:(id)arg1;
- (id)activeWorkspaceTabController;
- (id)audioDetailController:(id)arg1 audioForLibraryAsset:(id)arg2 representedObject:(id)arg3;
- (void)configureAsset:(id)arg1 toReflectVariantSet:(id)arg2;
- (id)createAssetForVariantSet:(id)arg1;
- (struct CGSize)detailAreaSize;
- (id)detailControllerIdentifiersForVariantSet:(id)arg1;
- (id)effectiveVariantContext;
- (void)faultIconForAsset:(id)arg1;
- (id)groupComparator;
- (id)groupIdentifierForVariantSet:(id)arg1;
- (id)imageDetailController:(id)arg1 imageForLibraryAsset:(id)arg2 representedObject:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)libraryDidLoad;
@property(retain, nonatomic) NSSet *mediaRepositories; // @synthesize mediaRepositories=_mediaRepositories;
- (void)migrateAssetsAfterVariantContextChange;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2;
- (void)populatePasteboard:(id)arg1 withAssets:(id)arg2 defaultDraggedImageState:(id *)arg3 identifierMapTable:(id *)arg4;
- (void)primitiveInvalidate;
- (id)quickLookDetailController:(id)arg1 URLForLibraryAsset:(id)arg2 representedObject:(id)arg3;
- (BOOL)quickLookDetailController:(id)arg1 shouldScaleToFitPreviewForLibraryAsset:(id)arg2 representedObject:(id)arg3;
- (void)refreshAssetIconsBecauseVariantForResovlingChanged;
- (id)representedObjectForDetailControllerIdentifier:(id)arg1 index:(unsigned long long)arg2 forAsset:(id)arg3;
- (id)titleForDetailControllerRepresentedObject:(id)arg1 forAsset:(id)arg2;
- (id)tooltipForDetailControllerRepresentedObject:(id)arg1 forAsset:(id)arg2;
- (void)updateAssetsWithAddedOrModifiedVariantSets:(id)arg1 removedVariantSets:(id)arg2;
- (void)updateMediaRepositories;
- (id)variantSetForAsset:(id)arg1;
- (id)workspace;
- (id)workspaceWindowController;

@end

