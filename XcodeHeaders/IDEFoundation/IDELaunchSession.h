/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFileDataType, DVTFuture, DVTMapTable, DVTObservingToken, DVTPerformanceMetric, IDEExecutionEnvironment, IDEExecutionTracker, IDELaunchParametersSnapshot, IDELocationSimulator, IDERunDestination, IDESchemeActionRecord, IDESchemeCommand, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface IDELaunchSession : NSObject
{
    NSMutableArray *_debugSessions;
    NSMutableArray *_debuggingAdditions;
    NSMutableSet *_shellXPCLaunchSessions;
    NSMutableSet *_xpcLaunchSessions;
    DVTPerformanceMetric *_xpcDebuggingMetric;
    NSArray *_frameworkNamesIncludingExtensionsLinkedByExecutable;
    NSArray *_frameworkNamesIncludingExtensionsLinkedByExecutableForAllSlices;
    BOOL _allConsoleAdaptorsTerminated;
    NSMutableArray *_prioritizedGaugeLocations;
    NSMutableArray *_nonPrioritizedGaugeLocations;
    NSMutableDictionary *_gaugeLocationsToSortCharacteristic;
    DVTFuture *_appExtensionInstallFuture;
    BOOL _iconChanged;
    BOOL _representsAnXPCService;
    int _state;
    int _runnablePID;
    int _parentPID;
    int _simulatorPID;
    int _targetOutputState;
    IDEExecutionEnvironment *_executionEnvironment;
    IDESchemeActionRecord *_schemeActionRecord;
    IDEExecutionTracker *_executionTracker;
    id <IDEDebugSession> _currentDebugSession;
    id <IDETraceInferiorSession> _currentTraceInferiorSession;
    NSArray *_gaugeLocations;
    IDELaunchParametersSnapshot *_launchParameters;
    DVTFileDataType *_runnableType;
    IDESchemeCommand *_schemeCommand;
    IDERunDestination *_runDestination;
    NSString *_runnableDisplayName;
    IDELocationSimulator *_locationSimulator;
    NSError *_alertError;
    NSString *_explicitActivityViewTitle;
    NSArray *_xpcServices;
    NSMutableSet *_consoleAdaptors;
    DVTMapTable *_targetConsoleAdaptorToTerminationToken;
    DVTObservingToken *_codeModulesObserver;
}

+ (void)_setLaunchSession:(id)arg1 forReference:(id)arg2;
+ (BOOL)automaticallyNotifiesObserversOfTargetOutputState;
+ (id)createLaunchSessionForDebuggingAddition:(id)arg1 inWorkspace:(id)arg2 launchParameters:(id)arg3 runnableDisplayName:(id)arg4 runDestination:(id)arg5;
+ (void)initialize;
+ (id)launchSessionForReference:(id)arg1;
+ (void)terminateLaunchSession:(id)arg1 inWorkspace:(id)arg2;
+ (id)watchLaunchOptionsForLaunchParameters:(id)arg1;
- (void).cxx_destruct;
@property(readonly) int CPUType;
- (void)_cancelXPCLaunchSessions;
- (void)_cancelXPCPostLaunchActions;
- (id)_createDebuggingAdditionForExtension:(id)arg1 availableBinariesNames:(id)arg2 anyMatchCriteriaFailuresDueToAvailableBinaries:(char *)arg3;
- (id)_createLaunchSessionForXPCServiceName:(id)arg1 withLaunchParameters:(id)arg2;
- (void)_didStart;
- (id)_environmentVariablesWithTestingFilteredOut:(id)arg1;
- (BOOL)_extensionHasLinkedFrameworkNameMatchCriteria:(id)arg1;
- (id)_findShellXPCLaunchSessionForServiceName:(id)arg1;
- (id)_frameworkNamesIncludingExtensionsFromLoadedCodeModules;
- (id)_frameworkNamesIncludingExtensionsLinkedByExecutableForCpuType:(int)arg1;
- (void)_handleConsoleAdaptorOutputTerminated:(id)arg1;
- (void)_handleConsoleItemAdded:(id)arg1;
- (void)_handleXPCServiceObservation:(id)arg1;
- (void)_invalidateExecutionEnvironment;
- (void)_removeAllGaugeLocations;
- (void)_removeConsoleAdaptorObservations:(id)arg1;
- (void)_startObservingXPCServicesAndAppExtensions;
- (void)_startObservingXPCServicesAndAppExtensionsStage2;
- (void)_startXPCPostLaunchActions;
- (void)_willExpire;
- (void)addConsoleAdaptor:(id)arg1;
- (void)addNewGaugeLocation:(id)arg1;
- (void)addNewGaugeLocation:(id)arg1 withPriority:(unsigned long long)arg2;
@property(copy) NSError *alertError; // @synthesize alertError=_alertError;
@property(retain, nonatomic) DVTObservingToken *codeModulesObserver; // @synthesize codeModulesObserver=_codeModulesObserver;
@property(retain, nonatomic) NSMutableSet *consoleAdaptors; // @synthesize consoleAdaptors=_consoleAdaptors;
@property(retain, nonatomic) id <IDEDebugSession> currentDebugSession; // @synthesize currentDebugSession=_currentDebugSession;
@property(retain) id <IDETraceInferiorSession> currentTraceInferiorSession; // @synthesize currentTraceInferiorSession=_currentTraceInferiorSession;
- (id)debuggingAdditionMatchingID:(id)arg1;
@property(readonly, copy) NSArray *debuggingAdditions; // @synthesize debuggingAdditions=_debuggingAdditions;
@property(readonly) IDEExecutionEnvironment *executionEnvironment; // @synthesize executionEnvironment=_executionEnvironment;
@property(retain) IDEExecutionTracker *executionTracker; // @synthesize executionTracker=_executionTracker;
- (id)existingGaugeLocationForURL:(id)arg1;
@property(copy) NSString *explicitActivityViewTitle; // @synthesize explicitActivityViewTitle=_explicitActivityViewTitle;
@property(readonly) NSArray *frameworkNamesIncludingExtensionsLinkedByExecutable;
@property(readonly) NSArray *frameworkNamesIncludingExtensionsLinkedByExecutableForAllSlices;
@property(copy) NSArray *gaugeLocations; // @synthesize gaugeLocations=_gaugeLocations;
@property BOOL iconChanged; // @synthesize iconChanged=_iconChanged;
- (id)initWithExecutionEnvironment:(id)arg1 launchParameters:(id)arg2 runnableDisplayName:(id)arg3 runnableType:(id)arg4 runDestination:(id)arg5;
- (BOOL)isAlive;
@property(readonly) BOOL isCurrentlyTracing;
@property(readonly, copy) NSMutableSet *kvoConsoleAdaptors;
@property(retain) IDELaunchParametersSnapshot *launchParameters; // @synthesize launchParameters=_launchParameters;
@property(readonly) IDELocationSimulator *locationSimulator; // @synthesize locationSimulator=_locationSimulator;
@property(readonly, copy) NSMutableArray *mutableGaugeLocations;
@property int parentPID; // @synthesize parentPID=_parentPID;
- (void)performanceMetric_xpcDebuggingCheckpointWithLabel:(id)arg1;
- (void)performanceMetric_xpcDebuggingCompleted;
- (void)performanceMetric_xpcDebuggingStarted;
- (id)performanceMetric_xpcIdentifierForLaunchSession;
- (id)referenceWhenAlive;
- (void)removeConsoleAdaptor:(id)arg1;
- (void)removeGaugeLocation:(id)arg1;
@property BOOL representsAnXPCService; // @synthesize representsAnXPCService=_representsAnXPCService;
@property(retain) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
@property(readonly, copy) NSString *runnableDisplayName; // @synthesize runnableDisplayName=_runnableDisplayName;
@property(nonatomic) int runnablePID; // @synthesize runnablePID=_runnablePID;
@property(readonly) DVTFileDataType *runnableType; // @synthesize runnableType=_runnableType;
@property(retain) IDESchemeActionRecord *schemeActionRecord; // @synthesize schemeActionRecord=_schemeActionRecord;
@property(retain) IDESchemeCommand *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property int simulatorPID; // @synthesize simulatorPID=_simulatorPID;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) DVTMapTable *targetConsoleAdaptorToTerminationToken; // @synthesize targetConsoleAdaptorToTerminationToken=_targetConsoleAdaptorToTerminationToken;
- (void)setTargetOutputState:(int)arg1;
@property(copy) NSArray *xpcServices; // @synthesize xpcServices=_xpcServices;
@property(readonly) BOOL supportsDebugSession;
@property(readonly, nonatomic) int targetOutputState; // @synthesize targetOutputState=_targetOutputState;
- (id)xpcLaunchSessions;

// Remaining properties
@property(copy) NSArray *debugSessions; // @dynamic debugSessions;
@property(readonly, copy) NSMutableArray *mutableDebugSessions; // @dynamic mutableDebugSessions;
@property(retain, nonatomic) NSMutableArray *mutableDebuggingAdditions; // @dynamic mutableDebuggingAdditions;

@end
