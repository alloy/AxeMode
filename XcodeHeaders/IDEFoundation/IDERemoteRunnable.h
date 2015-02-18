/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDERunnable.h>

#import "DVTXMLUnarchiving.h"

@class DVTFilePath, IDESchemeBuildableReference, NSString;

@interface IDERemoteRunnable : IDERunnable <DVTXMLUnarchiving>
{
    DVTFilePath *_remotePath;
    IDESchemeBuildableReference *_buildableReference;
}

+ (id)keyPathsForValuesAffectingBuildableProduct;
+ (id)remoteRunnableWithBundleIdentifier:(id)arg1 filePath:(id)arg2 mode:(int)arg3 buildableReference:(id)arg4;
- (void).cxx_destruct;
- (void)addBuildableReference:(id)arg1 fromXMLUnarchiver:(id)arg2;
@property(readonly) id <IDEBuildableProduct> buildableProduct;
@property(retain) IDESchemeBuildableReference *buildableReference; // @synthesize buildableReference=_buildableReference;
- (id)displayName;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (BOOL)hasRunnablePath;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithRemotePath:(id)arg1 bundleIdentifier:(id)arg2;
- (id)pathToRunnableForBuildParameters:(id)arg1;
- (id)remotePath;
- (BOOL)requiresPairedProxyDevice;
- (int)runnableType;
- (id)runnableUTIType:(id *)arg1;
- (void)setRemotePathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setScheme:(id)arg1;
- (id)toolTip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

