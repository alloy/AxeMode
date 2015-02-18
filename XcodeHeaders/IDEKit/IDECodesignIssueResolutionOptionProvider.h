/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTProvisioningProfileManager, DVTSigningCertificateManager, IDECodesignIssueResolutionPortalSource;

@interface IDECodesignIssueResolutionOptionProvider : NSObject
{
    IDECodesignIssueResolutionPortalSource *_portal;
    DVTSigningCertificateManager *_certificateManager;
    DVTProvisioningProfileManager *_provisioningProfileManager;
}

+ (id)defaultProvider;
- (void).cxx_destruct;
- (id)_resolutionOptionsForMissingNewestCertWithAccount:(id)arg1 portalTeamID:(id)arg2 certificiateKind:(id)arg3 platformIdentifier:(id)arg4 existingCertificateSerialNumber:(id)arg5 logAspect:(id)arg6;
- (id)_resolutionOptionsForMissingProfilesWithAccount:(id)arg1 portalTeamID:(id)arg2 signingCertificate:(id)arg3 platformIdentifier:(id)arg4 bundleIdentifiers:(id)arg5 requiredFeaturesOrNil:(id)arg6 requiredDeviceUDIDsOrNil:(id)arg7 provisioningProfileType:(unsigned long long)arg8 logAspect:(id)arg9;
- (id)_resolutionOptionsForNoCertWithAccount:(id)arg1 portalTeamID:(id)arg2 certificiateKind:(id)arg3 platformIdentifier:(id)arg4 logAspect:(id)arg5;
@property(retain) DVTSigningCertificateManager *certificateManager; // @synthesize certificateManager=_certificateManager;
- (id)determineResolutionOptionsForAccount:(id)arg1 portalTeamID:(id)arg2 certificiateKind:(id)arg3 installerCertificateKindOrNil:(id)arg4 platformIdentifier:(id)arg5 bundleIdentifiersOrNil:(id)arg6 requireProvisioningProfiles:(BOOL)arg7 requiredFeaturesOrNil:(id)arg8 requiredEntitlementsOrNil:(id)arg9 requiredDeviceUDIDsOrNil:(id)arg10 provisioningProfileType:(unsigned long long)arg11 logAspectOrNil:(id)arg12;
- (id)initWithPortalInfoSource:(id)arg1 certificateManager:(id)arg2 provisioningProfileManager:(id)arg3;
- (id)logAspect;
@property(retain) IDECodesignIssueResolutionPortalSource *portal; // @synthesize portal=_portal;
@property(retain) DVTProvisioningProfileManager *provisioningProfileManager; // @synthesize provisioningProfileManager=_provisioningProfileManager;

@end

