/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

#import "DVTFontTextFieldCellDelegate.h"

@class DVTFontTextField, IDEInspectorKeyPath, NSStepper, NSString;

@interface IDEInspectorFontProperty : IDEInspectorProperty <DVTFontTextFieldCellDelegate>
{
    IDEInspectorKeyPath *_dataSourceKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    DVTFontTextField *_textField;
    NSStepper *_stepper;
}

- (void).cxx_destruct;
- (double)baseline;
- (BOOL)canEditSize;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)fontTextFieldCell:(id)arg1 enumerateMultipleValues:(id)arg2;
- (void)incrementSize:(id)arg1;
- (void)refresh;
@property(retain, nonatomic) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) DVTFontTextField *textField; // @synthesize textField=_textField;
- (void)setupRefreshTriggersAndConfigure;
- (void)tearDownRefreshTriggers;
- (void)userDidChangeValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

