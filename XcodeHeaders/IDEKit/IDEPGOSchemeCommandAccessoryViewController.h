/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSAlert, NSMatrix;

@interface IDEPGOSchemeCommandAccessoryViewController : NSViewController
{
    NSMatrix *_runOrTestMatrix;
    int _selectedMatrixTag;
    NSAlert *_alert;
}

- (void).cxx_destruct;
@property __weak NSAlert *alert; // @synthesize alert=_alert;
- (void)chooseWhatToRunAction:(id)arg1;
@property int selectedMatrixTag;
- (void)setRunRadioButtonEnabled:(BOOL)arg1;
- (void)setTestRadioButtonEnabled:(BOOL)arg1;
- (void)viewDidLoad;

@end
