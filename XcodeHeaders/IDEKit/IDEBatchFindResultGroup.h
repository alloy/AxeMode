/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"
#import "NSCopying.h"

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, IDEBatchFindCandidateFile, IDEFileReference, IDEIndex, NSArray, NSImage, NSMutableArray, NSString;

@interface IDEBatchFindResultGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, NSCopying>
{
    NSArray *_results;
    NSMutableArray *_filteredResults;
    IDEBatchFindCandidateFile *_fileCandidate;
    unsigned long long _replaceableCount;
    unsigned long long _filteredReplaceableCount;
    IDEIndex *_index;
    BOOL _symbolLookUpEnabled;
    DVTFilePath *_filePath;
    NSString *_groupTitle;
    id <IDEBatchFindResultGroupDelegate> _delegate;
    id _representingNavItem;
}

- (void).cxx_destruct;
- (void)_beginSymbolLookupForResults;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain) id <IDEBatchFindResultGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSImage *displayImage;
@property(readonly) NSString *displaySubtitle;
@property(readonly) NSString *displayTitle;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) IDEBatchFindCandidateFile *fileCandidate; // @synthesize fileCandidate=_fileCandidate;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(copy) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(readonly) unsigned long long hash;
- (void)hideResultsWithIndexes:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
@property __weak IDEIndex *index; // @synthesize index=_index;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 fromFileCandidate:(id)arg2;
- (id)initWithResults:(id)arg1 fromFilePath:(id)arg2;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
@property(getter=isSymbolLookUpEnabled) BOOL symbolLookUpEnabled; // @synthesize symbolLookUpEnabled=_symbolLookUpEnabled;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly) unsigned long long replaceableCount;
- (void)resetHiddenResults;
@property(readonly) NSArray *results;
- (void)setDelegate:(id)arg1 navigableItem:(id)arg2;
- (void)setResults:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

