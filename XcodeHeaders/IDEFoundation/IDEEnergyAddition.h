/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTSysmonBridgeDelegate.h"
#import "IDEDebuggingAddition.h"

@class DVTStackBacktrace, DVTSysmonBridge, IDEDataMatrix, IDELaunchSession, NSString;

@interface IDEEnergyAddition : NSObject <IDEDebuggingAddition, DVTSysmonBridgeDelegate>
{
    int _selectedPID;
    IDEDataMatrix *_metricsOverTime;
    NSString *_identifier;
    IDELaunchSession *_launchSession;
    id _launchSessionObservationToken;
    id _launchSessionObservationToken2;
    DVTSysmonBridge *_sysmonBridge;
}

+ (void)initialize;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
- (void).cxx_destruct;
- (void)_handlePIDChange:(int)arg1;
- (void)_sysmondControl:(int)arg1;
- (void)bridgeHasNewProcessInformation:(id)arg1;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain, nonatomic) id launchSessionObservationToken; // @synthesize launchSessionObservationToken=_launchSessionObservationToken;
@property(retain, nonatomic) id launchSessionObservationToken2; // @synthesize launchSessionObservationToken2=_launchSessionObservationToken2;
@property(retain, nonatomic) IDEDataMatrix *metricsOverTime; // @synthesize metricsOverTime=_metricsOverTime;
- (void)primitiveInvalidate;
- (void)processFinalLaunchParameters:(id)arg1;
@property(readonly, nonatomic) int selectedPID; // @synthesize selectedPID=_selectedPID;
@property(retain, nonatomic) DVTSysmonBridge *sysmonBridge; // @synthesize sysmonBridge=_sysmonBridge;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

