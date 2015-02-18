/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDETemplateInstantiationAssistant.h>

#import "DVTTileViewDelegate.h"

@class DVTBorderedView, DVTImageAndTextCell, DVTSplitView, DVTTileView, DVTTileViewItem, IDENavigableItemCoordinator, IDENavigatorOutlineView, NSArrayController, NSString, NSTextField, NSView;

@interface IDETemplateChooserAssistant : IDETemplateInstantiationAssistant <DVTTileViewDelegate>
{
    DVTSplitView *_innerSplitView;
    DVTBorderedView *_templateInfoView;
    IDENavigatorOutlineView *_outlineView;
    DVTImageAndTextCell *_sectionCell;
    NSArrayController *_arrayController;
    DVTTileView *_tileView;
    DVTTileViewItem *_prototypeItem;
    NSView *_itemSelectionView;
    NSTextField *_itemTextField;
    NSView *_sourceListView;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
}

+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)keyPathsForValuesAffectingCollectionViewSelectionIndexes;
+ (id)supportedTemplateKind;
- (void).cxx_destruct;
- (BOOL)canGoForward;
- (id)categoryDefaultsKey;
- (void)chooserTileViewShouldGoForward:(id)arg1;
- (id)collectionViewSelectionIndexes;
- (void)loadView;
@property(retain, nonatomic) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
- (id)nextAssistantIdentifier;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)restoreSelectionFromContext;
- (void)restoreSelectionFromUserDefaults;
- (id)sectionCell;
- (id)sectionDefaultsKey;
- (void)setCollectionViewSelectionIndexes:(id)arg1;
@property(retain) NSView *sourceListView; // @synthesize sourceListView=_sourceListView;
- (id)templateNameDefaultsKey;
- (void)tileView:(id)arg1 didChangeContextClickedObjectFrom:(id)arg2;
- (id)tileView:(id)arg1 titleForContentObject:(id)arg2;
- (id)tileView:(id)arg1 typeCompletionStringForContentObject:(id)arg2;
- (void)userDidPressEscapeInTileView:(id)arg1;
- (void)userDidPressSpaceBarInTileView:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (void)writeStateToUserDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
