/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDelayedInvocation, DVTStackBacktrace, NSArray, NSString, Xcode3TargetBuildSettingsCoordinator, Xcode3TargetEntitlementsCoordinator, Xcode3TargetInfoPlistCoordinator, Xcode3TargetLinkedFrameworksCoordinator, Xcode3TargetPortalEntitlementsCoordinator<IDEAppIDFeatureDelegate>;

@interface IDEProjectItemModel : NSObject <DVTInvalidation>
{
    NSArray *_flightChecks;
    id <IDECapabilitiesContextProviding> _targetCapabilitiesContext;
    id <IDEProjectItem> _item;
    DVTDelayedInvocation *_delayedUpdateInvocation;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) Xcode3TargetBuildSettingsCoordinator *buildSettingsCoordinator;
@property(readonly) DVTDelayedInvocation *delayedUpdateInvocation; // @synthesize delayedUpdateInvocation=_delayedUpdateInvocation;
@property(readonly) Xcode3TargetEntitlementsCoordinator *entitlementsCoordinator;
@property(readonly, nonatomic) NSArray *flightChecks; // @synthesize flightChecks=_flightChecks;
@property(readonly) Xcode3TargetInfoPlistCoordinator *infoPlistCoordinator;
- (id)init;
- (id)initWithCapabilitiesContext:(id)arg1 item:(id)arg2;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly) BOOL isEnabledUsingEducatedGuess;
@property(readonly) id <IDEProjectItem> item; // @synthesize item=_item;
@property(readonly) Xcode3TargetLinkedFrameworksCoordinator *linkedFrameworksCoordinator;
- (void)modelWasDisabled;
- (void)modelWasEnabledWithContext:(id)arg1;
@property(readonly) Xcode3TargetPortalEntitlementsCoordinator<IDEAppIDFeatureDelegate> *portalEntitlementsCoordinator;
- (void)primitiveInvalidate;
- (void)publishStateWithContext:(id)arg1;
@property(readonly) BOOL requiresAccountAndTeamSelection;
- (void)runFlightChecks;
- (void)setEnabled:(BOOL)arg1 flightCheckContext:(id)arg2;
@property(readonly) id <IDECapabilitiesContextProviding> targetCapabilitiesContext; // @synthesize targetCapabilitiesContext=_targetCapabilitiesContext;
- (void)targetCoordinatorChanged:(id)arg1;
- (void)updateWithContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

