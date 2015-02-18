/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEWorkspace, NSArray, NSString, NSWindow;

@interface _IDEReadOnlyItemsManagerContext : NSObject
{
    NSArray *_itemsToUnlock;
    NSString *_itemName;
    id _changedObject;
    IDEWorkspace *_workspace;
    NSWindow *_window;
    id _completionBlock;
}

- (void).cxx_destruct;
@property(retain) id changedObject; // @synthesize changedObject=_changedObject;
@property(copy) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy) NSArray *itemsToUnlock; // @synthesize itemsToUnlock=_itemsToUnlock;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;

@end

