/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTLibraryController.h"

@class DVTObservingToken;

@interface IDELibraryController : DVTLibraryController
{
    DVTObservingToken *_activeEditorDocumentKVOToken;
}

- (void).cxx_destruct;
- (void)activeEditorDocumentDidChange:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (id)workspaceWindowController;

@end

