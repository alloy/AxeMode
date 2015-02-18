/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class DVTBindingToken, IDESourceControlTreeItem, NSProgressIndicator;

@interface IDESourceControlTreeItemRowView : NSTableCellView
{
    IDESourceControlTreeItem *_representedTreeItem;
    DVTBindingToken *_progressBindingToken;
    NSProgressIndicator *_progressIndicator;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void)removeFromSuperview;
@property(retain) IDESourceControlTreeItem *representedTreeItem;
- (void)teardown;

@end

