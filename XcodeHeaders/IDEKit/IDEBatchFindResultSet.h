/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEBatchFindResultSetProtocol.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject.h"
#import "NSCopying.h"

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEBatchFindCriteria, IDEFileReference, NSArray, NSAttributedString, NSImage, NSMutableArray, NSString;

@interface IDEBatchFindResultSet : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, NSCopying, IDEBatchFindResultSetProtocol, DVTInvalidation>
{
    IDEBatchFindCriteria *_criteria;
    NSMutableArray *_resultGroups;
    NSMutableArray *_rawGroups;
    NSArray *_allResults;
    unsigned long long _replaceableCount;
    unsigned long long _replaceableGroupCount;
    unsigned long long _allResultsCount;
    BOOL _allResultsCounted;
    BOOL _wasReplacementOperationAttempted;
    id _searchLocations;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingHasResults;
- (void).cxx_destruct;
- (void)addResultGroup:(id)arg1;
- (void)addResultGroups:(id)arg1;
@property(readonly, copy) NSArray *allResults;
@property(readonly) long long allResultsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) IDEBatchFindCriteria *criteria; // @synthesize criteria=_criteria;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) BOOL hasResults;
- (void)hideResultGroups:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1;
- (void)invalidateAllResultsCount;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (void)primitiveInvalidate;
@property(nonatomic) unsigned long long replaceableCount; // @synthesize replaceableCount=_replaceableCount;
@property(nonatomic) unsigned long long replaceableGroupCount; // @synthesize replaceableGroupCount=_replaceableGroupCount;
- (void)resetHiddenResultGroups;
@property(readonly) NSAttributedString *searchAttributedString;
@property(retain) id searchLocations; // @synthesize searchLocations=_searchLocations;
@property(readonly) NSString *searchString;
@property BOOL wasReplacementOperationAttempted; // @synthesize wasReplacementOperationAttempted=_wasReplacementOperationAttempted;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableArray *mutableResultGroups; // @dynamic mutableResultGroups;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) NSArray *resultGroups; // @dynamic resultGroups;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

