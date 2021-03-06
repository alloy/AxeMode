/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEContainer.h>

@class DVTDispatchLock;

@interface IDEFolder : IDEContainer
{
    DVTDispatchLock *_generationLock;
    int _superclassActivity;
    unsigned long long _updateOperationGeneration;
    BOOL _didSetSuperclassActivity;
    unsigned long long _readingCount;
}

+ (BOOL)_THREAD_shouldAddFileWithName:(id)arg1;
+ (BOOL)_observeContainerDataFilePathsForChanges;
+ (id)containerFileDataType;
+ (id)containerTypeDisplayName;
+ (void)initialize;
+ (BOOL)supportsMultipleInstancesPerFilePath;
- (void).cxx_destruct;
- (id)_THREAD_fileNamesAtFilePath:(id)arg1;
- (void)_decrementReadingCount;
- (void)_filePathDidChange:(id)arg1;
- (void)_incrementReadingCount;
- (id)_itemBaseFilePathForFilePath:(id)arg1;
- (void)_respondToFileChangeOnDiskWithFilePath:(id)arg1;
- (void)_updateSubitemsWithFileNames:(id)arg1;
- (id)createRootGroup;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) BOOL isReading;
- (void)primitiveInvalidate;
- (void)setActivity:(int)arg1;

@end

