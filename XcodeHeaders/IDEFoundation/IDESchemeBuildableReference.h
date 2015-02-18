/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTXMLUnarchiving.h"
#import "NSCopying.h"

@class DVTObservingToken, IDEContainer<IDEBlueprintProvider>, IDEScheme, NSString;

@interface IDESchemeBuildableReference : NSObject <DVTXMLUnarchiving, NSCopying>
{
    NSString *_buildableIdentifier;
    NSString *_blueprintIdentifier;
    NSString *_cachedBuildableName;
    NSString *_cachedBlueprintName;
    NSString *_legacyBuildableIdentifier;
    IDEContainer<IDEBlueprintProvider> *_referencedContainer;
    NSString *_lastArchivedReferencedContainerPath;
    IDEScheme *_scheme;
    id <IDEBlueprint> _cachedResolvedBlueprint;
    id <IDEBuildable> _cachedResolvedBuildable;
    DVTObservingToken *_referencedContainersObservingToken;
    DVTObservingToken *_schemeClosedToken;
    DVTObservingToken *_schemeValidToken;
    DVTObservingToken *_referencedContainerFilePathObservingToken;
    DVTObservingToken *_referencedContainerBlueprintsObservingToken;
    DVTObservingToken *_referencedContainerIsValidObservingToken;
    DVTObservingToken *_resolvedBuildableNameObservingToken;
    DVTObservingToken *_resolvedBlueprintNameObservingToken;
    BOOL _resolvingBlueprint;
    BOOL _willBeArchived;
}

+ (id)keyPathsForValuesAffectingBlueprintName;
+ (id)keyPathsForValuesAffectingBuildableName;
+ (id)resolvedBuildableForLegacyIdentifier:(id)arg1 inContainer:(id)arg2;
- (void).cxx_destruct;
- (void)_invalidateResolvedBlueprint;
- (void)_invalidateResolvedBuildable;
@property(copy) NSString *blueprintIdentifier;
@property(readonly) NSString *blueprintName;
@property(copy) NSString *buildableIdentifier;
@property(readonly) NSString *buildableName;
@property(copy) NSString *cachedBlueprintName;
@property(copy) NSString *cachedBuildableName; // @synthesize cachedBuildableName=_cachedBuildableName;
- (id)containerReferenceResolver;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentReferencedContainerPath;
@property(readonly, copy) NSString *description;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)initWithBuildable:(id)arg1 scheme:(id)arg2 willBeArchived:(BOOL)arg3;
- (void)loadLegacyBuildableWithResolutionContextContainer:(id)arg1;
- (void)markSchemeDirty;
- (id)referenceResolutionContext;
@property(retain, nonatomic) IDEContainer<IDEBlueprintProvider> *referencedContainer; // @synthesize referencedContainer=_referencedContainer;
- (id)referencedContainerFromSchemeForArchivedPath:(id)arg1;
- (BOOL)referencesSameBuildableAsReference:(id)arg1;
- (void)resolveBuildableFromImport;
@property(readonly) id <IDEBlueprint> resolvedBlueprint;
@property(readonly) id <IDEBuildable> resolvedBuildable;
@property(retain, nonatomic) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (void)setBlueprintIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBlueprintIdentifierWithoutInvalidatingResolvedBlueprint:(id)arg1;
- (void)setBlueprintNameFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildableIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildableNameFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setBuildableProductIdentifierFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setReferencedContainerFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (BOOL)updateCachedBlueprintName;
- (BOOL)updateCachedBuildableName;
@property(readonly) BOOL willBeArchived; // @synthesize willBeArchived=_willBeArchived;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

