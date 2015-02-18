/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEContainer.h>

#import "DVTXMLUnarchiverDelegate.h"
#import "DVTXMLUnarchiving.h"
#import "IDECustomDataStoring.h"

@class DVTMapTable, IDEDirectoryBasedCustomDataStore, IDEGroup, NSMutableDictionary, NSString;

@interface IDEXMLPackageContainer : IDEContainer <DVTXMLUnarchiverDelegate, DVTXMLUnarchiving, IDECustomDataStoring>
{
    IDEGroup *_unarchivingGroup;
    NSMutableDictionary *_unarchivingProperties;
    IDEDirectoryBasedCustomDataStore *_customDataStore;
    DVTMapTable *_unsavedXMLDataForCustomDataStoreSpecifier;
    BOOL _hasUnhandledArchiveData;
}

+ (id)containerDataFilePathsForFilePath:(id)arg1;
+ (id)rootElementName;
+ (BOOL)supportsFilePersistence;
+ (id)xmlArchiveFileName;
- (void).cxx_destruct;
- (id)_archiveFilePathForFilePath:(id)arg1;
- (void)_createCustomDataStore:(id)arg1;
- (void)_handleFilePathDidChange:(id)arg1;
- (id)_xmlData;
- (void)addSpecifier:(id)arg1 inWorkspace:(id)arg2 toSCMWithCompletionBlock:(id)arg3;
@property(readonly) float archiveVersion;
- (id)customDataOwnershipsForGrouping:(id)arg1;
- (id)customDataSpecifiersForGrouping:(id)arg1 ownership:(id)arg2;
@property(retain) IDEDirectoryBasedCustomDataStore *customDataStore; // @synthesize customDataStore=_customDataStore;
- (void)customDataStoreClosing:(id)arg1;
- (BOOL)didReadFromFilePath:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *displayName;
- (void)dvt_addObject:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_setProperty:(id)arg1 fromUTF8String:(const char *)arg2 fromXMLUnarchiver:(id)arg3;
@property(readonly) BOOL hasUnhandledArchiveData; // @synthesize hasUnhandledArchiveData=_hasUnhandledArchiveData;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
@property(readonly) float maxSupportedArchiveVersion;
- (void)moveCustomDataWithSpecifier:(id)arg1 toSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(id)arg4;
- (void)primitiveInvalidate;
- (id)readCustomDataWithSpecifier:(id)arg1 error:(id *)arg2;
- (BOOL)readFromFilePath:(id)arg1 error:(id *)arg2;
- (void)removeCustomDataWithSpecifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (void)scmStatusForSpecifier:(id)arg1 completionBlock:(id)arg2;
- (BOOL)supportsCustomDataForOwnership:(id)arg1;
- (BOOL)willReadFromFilePath:(id)arg1 error:(id *)arg2;
- (void)writeCustomData:(id)arg1 withSpecifier:(id)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)writeToFilePath:(id)arg1 forceWrite:(BOOL)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

