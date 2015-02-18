/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSString;

@interface IDEDistributionMethod : NSObject
{
    double _sortOrder;
    NSString *_group;
    NSSet *_requiredTeamTypes;
}

- (void).cxx_destruct;
@property(readonly) NSArray *availableICloudEnvironmentsOverride;
@property(readonly) NSString *certificateKind;
@property(readonly) NSArray *entitlementsProcessorClasses;
@property(readonly) NSString *exportStepName;
@property(readonly) NSString *group; // @synthesize group=_group;
- (id)initWithExtension:(id)arg1;
@property(readonly) NSString *installerCertificateKind;
@property(readonly, getter=isAppStoreBound) BOOL appStoreBound;
@property(readonly) NSArray *orderedDistributionStepClassNames;
@property(readonly) NSString *packagingStepIdentifier;
@property(readonly) unsigned long long provisioningProfileType;
@property(readonly) NSDictionary *requiredProfileEntitlements;
@property(readonly) NSSet *requiredTeamTypes; // @synthesize requiredTeamTypes=_requiredTeamTypes;
@property(readonly) BOOL requiresDeveloperAccount;
@property(readonly) NSString *shortTitle;
@property(readonly) double sortOrder; // @synthesize sortOrder=_sortOrder;
@property(readonly) NSString *subtitle;
@property(readonly) int supportedTask;
- (_Bool)supportsDistributionOfArchive:(id)arg1;
@property(readonly) NSString *taskNoun;
@property(readonly) NSString *taskVerb;
@property(readonly) NSString *title;
@property(readonly) BOOL wantsProvisioningProfiles;

@end

