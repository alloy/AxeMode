/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol IDECompletionDestinationDelegate <NSObject>
- (BOOL)destinationManager:(id)arg1 shouldAddItemToMenu:(id)arg2;
- (void)destinationManagerGroupDidChange:(id)arg1;
- (void)destinationManagerWorkspaceDidChange:(id)arg1;
- (id)targetWorkspacesForDestinationManager:(id)arg1;
@end

