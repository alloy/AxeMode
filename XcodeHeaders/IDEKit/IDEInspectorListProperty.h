/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

@class IDEInspectorKeyPath, NSComboBox, NSString;

@interface IDEInspectorListProperty : IDEInspectorProperty
{
    IDEInspectorKeyPath *_listContentKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    NSString *_placeholder;
    NSComboBox *_comboBox;
}

- (void).cxx_destruct;
- (double)baseline;
@property(retain, nonatomic) NSComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;

@end

