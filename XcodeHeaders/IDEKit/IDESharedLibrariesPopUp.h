/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTPopoverContentViewController.h"

@class DVTBorderedView, NSArray, NSArrayController, NSURL;

@interface IDESharedLibrariesPopUp : DVTPopoverContentViewController
{
    id _modulesObservingToken;
    NSArrayController *_arrayController;
    DVTBorderedView *_glassBar;
    NSArray *_sharedLibraryEntries;
    id <IDEDebugSession> _debugSession;
    NSURL *_URL;
}

+ (void)showPopUpAtPoint:(struct CGPoint)arg1 relativeToView:(id)arg2 debugSession:(id)arg3 executableURL:(id)arg4;
- (void).cxx_destruct;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (void)_cleanUpAfterClosingPopUpWindow;
- (void)_handleCodeModulesChanged:(id)arg1;
- (void)_handleDebugSessionStateChanged:(id)arg1;
- (id)_initWithDebugSession:(id)arg1 executableURL:(id)arg2;
- (void)_setupGlassBar;
- (void)_showPopUpAtPoint:(struct CGPoint)arg1 relativeToView:(id)arg2;
- (void)copy:(id)arg1;
@property(retain) id <IDEDebugSession> debugSession; // @synthesize debugSession=_debugSession;
- (void)done:(id)arg1;
- (void)loadView;
@property(retain) NSArray *sharedLibraryEntries; // @synthesize sharedLibraryEntries=_sharedLibraryEntries;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;

@end

