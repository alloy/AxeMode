/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEAlertViewController.h>

#import "NSOpenSavePanelDelegate.h"

@class NSMutableArray, NSPopUpButton, NSString;

@interface IDERunScriptAlertViewController : IDEAlertViewController <NSOpenSavePanelDelegate>
{
    NSPopUpButton *_scriptPopUpButton;
    NSMutableArray *_recentScripts;
}

- (void).cxx_destruct;
- (id)_stringForPath:(id)arg1;
- (void)addPathToRecentScripts:(id)arg1;
- (void)awakeFromNib;
- (void)chooseScript:(id)arg1;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (void)populatePopUpButton;
@property(retain) NSPopUpButton *scriptPopUpButton; // @synthesize scriptPopUpButton=_scriptPopUpButton;
- (void)selectScript:(id)arg1;
- (void)setAlert:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

