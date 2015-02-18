/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDENavigator.h>

@class DVTObservingToken, DVTScopeBarView, DVTScrollView, IDENavigatorDataCell, IDENavigatorOutlineView, NSArray, NSButton, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDEIssueNavigator : IDENavigator
{
    IDENavigatorOutlineView *_outlineView;
    DVTScopeBarView *_scopeBarView;
    NSButton *_scopeByFileButton;
    NSButton *_scopeByTypeButton;
    NSArray *_selectedNavigables;
    IDENavigatorDataCell *_groupCell;
    IDENavigatorDataCell *_subGroupCell;
    IDENavigatorDataCell *_issueCell;
    IDENavigatorDataCell *_subissueCell;
    NSMutableSet *_collapsedGroups;
    NSMutableSet *_collapsedFiles;
    NSMutableSet *_collapsedTypes;
    NSMutableSet *_expandedIssues;
    NSSet *_collapsedGroupsBeforeFiltering;
    NSSet *_collapsedFilesBeforeFiltering;
    NSSet *_collapsedTypesBeforeFiltering;
    NSSet *_expandedIssuesBeforeFiltering;
    NSMutableArray *_autoExpandItems;
    NSString *_filterPatternString;
    NSMutableArray *_stateChangeObservingTokens;
    DVTObservingToken *_selectedNavigablesObservingToken;
    DVTObservingToken *_navigatorDetailObservingToken;
    BOOL _showByType;
    BOOL _restoringState;
    BOOL _autoExpanding;
    BOOL _errorFilteringEnabled;
    BOOL _recentFilteringEnabled;
    BOOL _clearingFilterPredicate;
    BOOL _hasScheduledAutoExpansion;
    BOOL _invalidatingRowHeights;
    DVTScrollView *_issueNavigatorScrollView;
    struct _NSRange _visibleRows;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
+ (long long)version;
- (void).cxx_destruct;
- (void)_autoExpandItem:(id)arg1;
- (BOOL)_canNavigateToNavigableItem:(id)arg1;
- (void)_ensureNavigableItem:(id)arg1 expansionStateIsExpanded:(BOOL)arg2;
- (id)_fileGroupNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_fullIdentifierPathForNavigable:(id)arg1;
- (id)_fullIdentifierPathForNavigables:(id)arg1;
- (id)_groupCell;
- (void)_invalidateIssueAndSubIssueCells;
- (BOOL)_isFiltered;
- (id)_issueCell;
- (id)_issueGroupNavigableItemForIdentifierDictionary:(id)arg1 idToNavigableDict:(id)arg2;
- (id)_issueNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (id)_itemsMatchingState:(id)arg1;
- (id)_leafIssueNavigableInIssuePath:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (void)_pushSelection;
- (void)_revealInProjectNavigatorUsingContextMenuSelection:(BOOL)arg1;
- (void)_revealNavigableItems:(id)arg1;
- (id)_stateIdentifierForIssue:(id)arg1;
- (id)_stateIdentifierForIssueFileGroup:(id)arg1 parentNavigable:(id)arg2;
- (id)_stateIdentifierForIssueGroup:(id)arg1;
- (id)_stateIdentifierForIssueTypeGroup:(id)arg1 parentNavigable:(id)arg2;
- (id)_stateIdentifierForNavigable:(id)arg1;
- (id)_subGroupCell;
- (id)_subissueCell;
- (void)_synchronizeFilteringWithOutlineView;
- (id)_typeGroupNavigableItemForIdentifierDictionary:(id)arg1 parentNavigable:(id)arg2 idToNavigableDict:(id)arg3;
- (void)_updateFilterPredicate;
- (BOOL)_writeItems:(id)arg1 toPasteboard:(id)arg2;
- (void)clearFilterPredicate;
@property(copy, nonatomic) NSSet *collapsedFiles; // @synthesize collapsedFiles=_collapsedFiles;
@property(copy, nonatomic) NSSet *collapsedGroups; // @synthesize collapsedGroups=_collapsedGroups;
@property(copy, nonatomic) NSSet *collapsedTypes; // @synthesize collapsedTypes=_collapsedTypes;
- (void)commitStateToDictionary:(id)arg1;
- (void)configureStateSavingObservers;
- (id)contextMenuSelection;
- (void)contextMenu_copy:(id)arg1;
- (void)contextMenu_revealInLog:(id)arg1;
- (void)contextMenu_revealInProjectNavigator:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)delegateFirstResponder;
- (id)domainIdentifier;
@property(nonatomic) BOOL errorFilteringEnabled; // @synthesize errorFilteringEnabled=_errorFilteringEnabled;
@property(copy, nonatomic) NSSet *expandedIssues; // @synthesize expandedIssues=_expandedIssues;
- (id)filterDefinitionIdentifier;
@property(copy, nonatomic) NSString *filterPatternString; // @synthesize filterPatternString=_filterPatternString;
- (void)invalidateRowHeights;
@property __weak DVTScrollView *issueNavigatorScrollView; // @synthesize issueNavigatorScrollView=_issueNavigatorScrollView;
- (void)loadView;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)primitiveInvalidate;
@property(nonatomic) BOOL recentFilteringEnabled; // @synthesize recentFilteringEnabled=_recentFilteringEnabled;
- (void)revealInProjectNavigator:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
@property(retain, nonatomic) NSArray *selectedNavigables; // @synthesize selectedNavigables=_selectedNavigables;
- (void)setFilterPredicate:(id)arg1;
@property BOOL showByType;
@property struct _NSRange visibleRows; // @synthesize visibleRows=_visibleRows;
- (id)severityStatusCellsWithRepresentedObject:(id)arg1;
- (void)showByFile:(id)arg1;
- (void)showByType:(id)arg1;
- (id)structureEditorOpenSpecifierForIssuesNavigable:(id)arg1 error:(id *)arg2;
- (id)structureEditorOpenSpecifierForLogDocumentForIssue:(id)arg1 error:(id *)arg2;
- (id)structureNavigableItemForIssuesNavigable:(id)arg1 error:(id *)arg2;
- (void)updateDetailLevel;
- (void)updateVisibleRows;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewBoundsChanged:(id)arg1;
- (void)viewDidInstall;

@end
