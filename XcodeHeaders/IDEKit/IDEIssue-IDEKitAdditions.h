/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "IDEIssue.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString;

@interface IDEIssue (IDEKitAdditions) <IDEKeyDrivenNavigableItemRepresentedObject>
+ (id)defaultImageForIssueType:(int)arg1 ofSize:(unsigned long long)arg2;
+ (BOOL)isCandidateAnnotationRepresentedObject:(id)arg1;
@property(readonly) id annotationRepresentedObject;
- (id)childExplorableItems;
@property(readonly) id exploreAnnotationRepresentedObject;
- (id)exploredIssue;
- (id)fixItImage;
@property(readonly) NSImage *image;
- (BOOL)isNoteSeverity;
- (id)locations;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)navigableItem_subtitle;
- (id)parentExplorableItem;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@end

