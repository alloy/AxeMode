/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSButton, NSStepper, NSString, NSTextField;

@interface IDEInspectorRectProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_nonNilValueKeyPath;
    IDEInspectorKeyPath *_nonNilValueObjectKeyPath;
    IDEInspectorKeyPath *_insetKeyPath;
    IDEInspectorKeyPath *_insetObjectKeyPath;
    NSString *_nilPlaceholder;
    BOOL _allowsNilValues;
    NSTextField *_xTextField;
    NSTextField *_yTextField;
    NSStepper *_xStepper;
    NSStepper *_yStepper;
    NSTextField *_xLabel;
    NSTextField *_yLabel;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSStepper *_widthStepper;
    NSStepper *_heightStepper;
    NSTextField *_widthLabel;
    NSTextField *_heightLabel;
    NSButton *_hasValueCheckBox;
}

- (void).cxx_destruct;
- (BOOL)allowsNilValues;
- (void)applyUserRectFromSender:(id)arg1 byMappingValues:(id)arg2;
- (double)baseline;
- (id)findIndicatorContentViewWithContext:(id)arg1;
@property(retain, nonatomic) NSButton *hasValueCheckBox; // @synthesize hasValueCheckBox=_hasValueCheckBox;
@property(retain, nonatomic) NSTextField *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(retain, nonatomic) NSStepper *heightStepper; // @synthesize heightStepper=_heightStepper;
@property(retain, nonatomic) NSTextField *heightTextField; // @synthesize heightTextField=_heightTextField;
- (id)insetRectValueForValue:(id)arg1 fromObject:(id)arg2;
- (void)loadView;
- (id)nibName;
- (void)refresh;
@property(retain, nonatomic) NSTextField *widthLabel; // @synthesize widthLabel=_widthLabel;
@property(retain, nonatomic) NSStepper *widthStepper; // @synthesize widthStepper=_widthStepper;
@property(retain, nonatomic) NSTextField *widthTextField; // @synthesize widthTextField=_widthTextField;
@property(retain, nonatomic) NSTextField *xLabel; // @synthesize xLabel=_xLabel;
@property(retain, nonatomic) NSStepper *xStepper; // @synthesize xStepper=_xStepper;
@property(retain, nonatomic) NSTextField *xTextField; // @synthesize xTextField=_xTextField;
@property(retain, nonatomic) NSTextField *yLabel; // @synthesize yLabel=_yLabel;
@property(retain, nonatomic) NSStepper *yStepper; // @synthesize yStepper=_yStepper;
@property(retain, nonatomic) NSTextField *yTextField; // @synthesize yTextField=_yTextField;
- (void)setupRefreshTriggersAndConfigure;
- (id)singleRectValueForKeyPath:(id)arg1 state:(long long *)arg2 transformer:(id)arg3;
- (void)toggleNilValue:(id)arg1;
- (void)userDidEnterHeight:(id)arg1;
- (void)userDidEnterWidth:(id)arg1;
- (void)userDidEnterX:(id)arg1;
- (void)userDidEnterY:(id)arg1;
- (void)userDidIncrementHeight:(id)arg1;
- (void)userDidIncrementWidth:(id)arg1;
- (void)userDidIncrementX:(id)arg1;
- (void)userDidIncrementY:(id)arg1;

@end

