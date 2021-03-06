/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorProperty.h>

#import "DVTFilePathFieldCellDelegate.h"

@class DVTFilePathField, IDEInspectorKeyPath, NSString;

@interface IDEInspectorPathFieldProperty : IDEInspectorProperty <DVTFilePathFieldCellDelegate>
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_placeholderKeyPath;
    NSString *_placeholder;
    IDEInspectorKeyPath *_choosePathMessageKeyPath;
    NSString *_choosePathMessage;
    IDEInspectorKeyPath *_linkPathKeyPath;
    IDEInspectorKeyPath *_choosePathDefaultFilePathKeyPath;
    IDEInspectorKeyPath *_shouldChooseFileKeyPath;
    IDEInspectorKeyPath *_shouldChooseDirKeyPath;
    BOOL _shouldChooseFile;
    BOOL _shouldChooseDir;
    BOOL _shouldCreateDirIfMissing;
    DVTFilePathField *_filePathField;
}

- (void).cxx_destruct;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (double)baseline;
@property(retain, nonatomic) DVTFilePathField *filePathField; // @synthesize filePathField=_filePathField;
- (void)primitiveInvalidate;
- (void)refresh;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;
- (id)view;

@end

