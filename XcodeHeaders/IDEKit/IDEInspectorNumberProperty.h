/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSNumber, NSNumberFormatter, NSStepper, NSString, NSTextField;

@interface IDEInspectorNumberProperty : IDEInspectorProperty
{
    double _increment;
    BOOL _allowsNilValues;
    BOOL _enabled;
    BOOL _showsNilValueControl;
    BOOL _allowsFloats;
    BOOL _hasTitle;
    BOOL _isIncremental;
    long long _checkStateForNil;
    long long _checkStateForNonNil;
    IDEInspectorKeyPath *_nonNilValueKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_enabledKeyPath;
    IDEInspectorKeyPath *_minValueKeyPath;
    IDEInspectorKeyPath *_maxValueKeyPath;
    NSString *_nilPlaceholder;
    NSString *_title;
    NSString *_nonNilValueLabel;
    NSNumberFormatter *_numberFormatter;
    NSNumber *_maxValue;
    NSNumber *_minValue;
    NSTextField *_textField;
    NSStepper *_stepper;
    NSTextField *_label;
    NSButton *_checkbox;
}

- (void).cxx_destruct;
- (double)baseline;
- (BOOL)canTileIntoColumnsWithMinimumWidth:(double)arg1;
@property(retain, nonatomic) NSButton *checkbox; // @synthesize checkbox=_checkbox;
- (void)clipAndApplyValue:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3;
- (id)clipValue:(id)arg1 forObject:(id)arg2;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)incrementValue:(id)arg1;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;
@property(retain, nonatomic) NSTextField *label; // @synthesize label=_label;
- (void)loadView;
- (id)nibName;
- (id)nonNilValueForObject:(id)arg1;
- (void)refresh;
- (void)refreshCheckbox;
- (void)refreshStepper;
- (void)refreshTextField;
@property(retain, nonatomic) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void)setupRefreshTriggersAndConfigure;
- (void)toggleNilValue:(id)arg1;
- (void)userDidChangeValue:(id)arg1;

@end

