/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class IDENavigableItemArchivableRepresentation, IDEWorkspaceTabControllerLayoutTree, NSArray, NSString, NSURL;

@interface IDEWorkspaceTabControllerLayoutTreeNode : NSObject <NSCoding>
{
    unsigned long long _orientation;
    unsigned long long _contentType;
    IDEWorkspaceTabControllerLayoutTreeNode *_parent;
    IDENavigableItemArchivableRepresentation *_documentArchivableRepresentation;
    IDEWorkspaceTabControllerLayoutTree *_layoutTree;
    NSArray *_children;
}

- (void).cxx_destruct;
- (void)addLeafNodesToMutableArray:(id)arg1;
- (void)appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;
@property(readonly) NSArray *children; // @synthesize children=_children;
@property(readonly) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly) NSArray *descendantLeafNodes;
- (id)descendantTreeNodeForIndexPath:(id)arg1;
- (id)description;
@property(readonly) IDENavigableItemArchivableRepresentation *documentArchivableRepresentation; // @synthesize documentArchivableRepresentation=_documentArchivableRepresentation;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) NSURL *fileURL;
- (id)firstLeafNodeOfContentType:(unsigned long long)arg1;
@property(readonly) NSString *fullDescription;
- (id)generateLayoutTreeCell;
- (id)indexPathRelativeToNode:(id)arg1;
- (id)initLeafNodeWithContentType:(unsigned long long)arg1 documentArchivableRepresentation:(id)arg2;
- (id)initWithChildren:(id)arg1 orientation:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
@property(readonly, getter=isLeaf) BOOL leaf;
- (id)lastLeafNodeOfContentType:(unsigned long long)arg1;
@property(nonatomic) IDEWorkspaceTabControllerLayoutTree *layoutTree; // @synthesize layoutTree=_layoutTree;
@property(readonly) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) IDEWorkspaceTabControllerLayoutTreeNode *parent; // @synthesize parent=_parent;
@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *rootLayoutTreeNode;

@end

