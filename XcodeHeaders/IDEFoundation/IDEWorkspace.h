/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEXMLPackageContainer.h>

#import "IDEClientTracking.h"
#import "IDEIntegrityLogDataSource.h"

@class DVTFilePath, DVTHashTable, DVTMapTable, DVTObservingToken, DVTStackBacktrace, IDEActivityLogSection, IDEBatchFindManager, IDEBreakpointManager, IDEConcreteClientTracker, IDEContainer, IDEContainer<IDECustomDataStoring>, IDEContainerQuery, IDEDeviceInstallWorkspaceMonitor, IDEExecutionEnvironment, IDEIndex, IDEIssueManager, IDELocalizationManager, IDELogManager, IDERefactoring, IDERunContextManager, IDESourceControlWorkspaceMonitor, IDETestManager, IDETextIndex, IDEWorkspaceArena, IDEWorkspaceSharedSettings, IDEWorkspaceSnapshotManager, IDEWorkspaceUpgradeTasksController, IDEWorkspaceUserSettings, NSArray, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString;

@interface IDEWorkspace : IDEXMLPackageContainer <IDEClientTracking, IDEIntegrityLogDataSource>
{
    NSString *_untitledName;
    IDEWorkspaceArena *_workspaceArena;
    DVTFilePath *_headerMapFilePath;
    IDEExecutionEnvironment *_executionEnvironment;
    IDEContainerQuery *_containerQuery;
    DVTObservingToken *_containerQueryObservingToken;
    NSMutableSet *_referencedContainers;
    DVTHashTable *_fileRefsWithContainerLoadingIssues;
    IDEActivityLogSection *_containerLoadingIntegrityLog;
    NSMutableSet *_customDataStores;
    IDEWorkspaceUserSettings *_userSettings;
    IDEWorkspaceSharedSettings *_sharedSettings;
    DVTMapTable *_blueprintProviderObserverMap;
    NSMutableSet *_referencedBlueprints;
    DVTMapTable *_testableProviderObserverMap;
    NSMutableSet *_referencedTestables;
    BOOL _initialContainerScanComplete;
    NSMutableArray *_referencedRunnableBuildableProducts;
    IDERunContextManager *_runContextManager;
    IDELogManager *_logManager;
    IDEIssueManager *_issueManager;
    IDEBreakpointManager *_breakpointManager;
    IDEBatchFindManager *_batchFindManager;
    IDETestManager *_testManager;
    IDEContainerQuery *_indexableSourceQuery;
    DVTObservingToken *_indexableSourceQueryObservingToken;
    NSMutableArray *_observedIndexableSources;
    IDEContainerQuery *_indexableFileQuery;
    DVTObservingToken *_indexableFileQueryObservingToken;
    id _indexableFileUpdateNotificationToken;
    IDEIndex *_index;
    IDERefactoring *_refactoring;
    DVTMapTable *_fileRefsToResolvedFilePaths;
    NSMutableSet *_fileRefsToRegisterForIndexing;
    IDETextIndex *_textIndex;
    IDEDeviceInstallWorkspaceMonitor *_deviceInstallWorkspaceMonitor;
    IDESourceControlWorkspaceMonitor *_sourceControlWorkspaceMonitor;
    IDEWorkspaceSnapshotManager *_snapshotManager;
    IDELocalizationManager *_localizationManager;
    DVTFilePath *_wrappedXcode3ProjectPath;
    IDEContainer<IDECustomDataStoring> *_wrappedXcode3Project;
    DVTObservingToken *_wrappedXcode3ProjectValidObservingToken;
    DVTObservingToken *_newWrappedXcode3ProjectObservingToken;
    NSHashTable *_pendingReferencedFileReferences;
    NSHashTable *_pendingReferencedContainers;
    IDEConcreteClientTracker *_clientTracker;
    DVTHashTable *_fileReferencesForProblem8727051;
    DVTObservingToken *_finishedLoadingObservingToken;
    NSDictionary *_Problem9887530_preferredStructurePaths;
    BOOL _simpleFilesFocused;
    id _openingPerformanceMetricIdentifier;
    DVTStackBacktrace *_finishedLoadingBacktrace;
    NSMutableOrderedSet *_initialOrderedReferencedBlueprintProviders;
    BOOL _hasPostedIndexingRegistrationBatchNotification;
    BOOL _didFinishLoadingFirstStage;
    BOOL _finishedLoading;
    BOOL _postLoadingPerformanceMetricsAllowed;
    BOOL _willInvalidate;
    BOOL _pendingFileReferencesAndContainers;
    BOOL _didProcessFileReferencesForProblem8727051;
    BOOL _isCleaningBuildFolder;
    BOOL _indexingAndRefactoringRestartScheduled;
    BOOL _indexCreationInFlight;
    BOOL _didFinishBuildingInitialBlueprintProviderOrderedSet;
    NSMapTable *_pendingExecutionNotificationTokens;
    BOOL _isPotentiallyClosing;
    long long _indexGenerationCounter;
    id <IDEContinuousIntegrationBotMonitor> _xcs2WorkspaceBotMonitor;
    id <IDEActiveRunContextStoring> _activeRunContextStore;
    IDEWorkspaceUpgradeTasksController *_deferredUpgradeTasksController;
}

+ (BOOL)_shouldLoadUISubsystems;
+ (BOOL)_shouldTrackReadOnlyStatus;
+ (id)_workspaceFileExtension;
+ (id)_wrappedWorkspacePathForProjectPath:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfFileRefsWithContainerLoadingIssues;
+ (BOOL)automaticallyNotifiesObserversOfWrappedXcode3ProjectPath;
+ (id)containerFileDataType;
+ (id)containerTypeDisplayName;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingHostOnlyXcode3Project;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingRepresentingCustomDataStore;
+ (id)keyPathsForValuesAffectingRepresentingFilePath;
+ (id)keyPathsForValuesAffectingRepresentingTitle;
+ (id)rootElementName;
+ (id)xmlArchiveFileName;
- (void).cxx_destruct;
- (id)_Problem9887530_preferredStructurePathForContainerAtPath:(id)arg1;
- (id)_Problem9887530_preferredStructurePaths;
- (id)_Problem9887530_preferredStructurePathsForContainerToContainerFileReferences:(id)arg1;
- (id)_Problem9887530_wrappedContainerFileReferences:(id)arg1 forPath:(id)arg2;
- (void)_addBlueprintProviderToOrderedSet:(id)arg1;
- (void)_addFileReferenceForProblem8727051:(id)arg1;
- (void)_addPendingReferencedContainerPath:(id)arg1;
- (void)_addPendingReferencedFileReference:(id)arg1;
@property(retain) id _applicationDelegate; // @dynamic _applicationDelegate;
- (void)_buildProductsLocationDidChange;
- (BOOL)_cancelOngoingBuildWithCompletionBlockIfNeeded:(id)arg1;
- (void)_changeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_changeContainerFilePath:(id)arg1 inContext:(id)arg2 upgradeToWorkspace:(BOOL)arg3;
- (void)_checkIfHasFinishedLoading;
- (void)_clearPendingFileReferencesAndContainerLoadingTokens;
- (BOOL)_configureWrappedWorkspaceWithError:(id *)arg1;
- (void)_containerDidLoad;
- (void)_enqueueIndexRegistrationBatchNotification;
- (id)_fileRefsToResolvedFilePaths;
- (void)_finishLoadingAsynchronously:(BOOL)arg1 shouldUpgradeFromSimpleFilesFocused:(BOOL)arg2;
- (void)_handleContainerResolutionFailureForFileReference:(id)arg1;
- (void)_handleIndexableFilesChange:(id)arg1;
- (void)_handleIndexableSourcesChange:(id)arg1;
- (void)_handleIndexablesChange:(id)arg1;
- (void)_initializeSourceControlWorkspaceMonitor;
- (id)_openingPerformanceMetricIdentifier;
- (void)_primitiveSetSimpleFilesFocused:(BOOL)arg1;
- (void)_processFileReferencesForProblem8727051;
- (void)_processIndexRegistrationBatch:(id)arg1;
- (void)_referencedBlueprintsDidUpdateForProvider:(id)arg1;
- (void)_referencedContainersDidUpdate;
- (void)_referencedTestablesOfProvider:(id)arg1 didChange:(id)arg2;
- (void)_removePendingReferencedContainerPath:(id)arg1;
- (void)_removePendingReferencedFileReference:(id)arg1;
- (void)_restartIndexingAndRefactoring;
- (void)_scheduleIndexingAndRefactoringRestart;
- (void)_scheduleWorkspaceUpgradeTasksController:(id)arg1;
- (BOOL)_setContainerFilePath:(id)arg1 upgradeToWorkspace:(BOOL)arg2 error:(id *)arg3;
- (void)_setFileRefsWithContainerLoadingIssues:(id)arg1;
- (void)_setSimpleFilesFocused:(BOOL)arg1;
- (void)_setWrappedXcode3Project:(id)arg1;
- (void)_setWrappedXcode3ProjectPath:(id)arg1;
- (void)_setupBuildCompletedNotificationForExecutionEnvironment:(id)arg1 completionBlock:(id)arg2;
- (void)_setupContainerQueries;
- (void)_setupDeviceInstallWorkspaceMonitor;
- (void)_setupExecutionEnvironment;
- (void)_setupIssueManagerIfNeeded;
- (void)_setupLogManagerIfNeeded;
- (void)_setupSourceControlWorkspaceMonitorIfNeeded;
- (void)_setupWorkspaceArenaIfNeeded;
- (void)_setupWorkspaceUpgradeTasksController;
- (void)_updateIndexableFiles:(id)arg1;
- (void)_updateWrappedXcode3Project;
- (id)_wrappingContainerPath;
@property(retain) id <IDEActiveRunContextStoring> activeRunContextStore; // @synthesize activeRunContextStore=_activeRunContextStore;
- (void)analyzeModelIntegrity;
- (float)archiveVersion;
@property(readonly) IDEBatchFindManager *batchFindManager;
- (void)beginTextIndexing;
- (id)blueprintsContainingFilePaths:(id)arg1;
@property(retain) IDEBreakpointManager *breakpointManager; // @dynamic breakpointManager;
- (id)buildableProductsForBaseName:(id)arg1;
- (id)buildableProductsForProductName:(id)arg1;
- (void)cancelTrackedClients;
@property(readonly) IDEConcreteClientTracker *clientTracker;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
- (id)containerGraphOrderForBlueprintProviders:(id)arg1;
@property(readonly) NSSet *customDataStores;
@property(retain) IDEWorkspaceUpgradeTasksController *deferredUpgradeTasksController; // @synthesize deferredUpgradeTasksController=_deferredUpgradeTasksController;
@property(retain) IDEDeviceInstallWorkspaceMonitor *deviceInstallWorkspaceMonitor; // @synthesize deviceInstallWorkspaceMonitor=_deviceInstallWorkspaceMonitor;
- (void)didCreateIndex:(id)arg1;
- (id)displayName;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
@property(retain) IDEExecutionEnvironment *executionEnvironment;
@property(nonatomic) BOOL finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(readonly) BOOL hostsOnlyXcode3Project;
- (id)ideModelObjectTypeIdentifier;
@property(retain) IDEIndex *index; // @synthesize index=_index;
@property(readonly, nonatomic) long long indexGenerationCounter; // @synthesize indexGenerationCounter=_indexGenerationCounter;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
@property BOOL initialContainerScanComplete; // @synthesize initialContainerScanComplete=_initialContainerScanComplete;
- (void)initializeIndexAndRefactoring:(id)arg1;
- (void)insertInSdefSupport_breakpoints:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInSdefSupport_fileBreakpoints:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInSdefSupport_symbolicBreakpoints:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly) IDEActivityLogSection *integrityLog;
- (void)invokeChangingValueForKey:(id)arg1 fromSet:(id)arg2 toSet:(id)arg3 block:(id)arg4;
@property BOOL isCleaningBuildFolder; // @synthesize isCleaningBuildFolder=_isCleaningBuildFolder;
@property(nonatomic) BOOL isPotentiallyClosing; // @synthesize isPotentiallyClosing=_isPotentiallyClosing;
@property(readonly, getter=isSimpleFilesFocused) BOOL simpleFilesFocused;
@property(readonly) IDEIssueManager *issueManager; // @synthesize issueManager=_issueManager;
@property(readonly) IDELocalizationManager *localizationManager;
@property(readonly) IDELogManager *logManager; // @synthesize logManager=_logManager;
- (float)maxSupportedArchiveVersion;
@property(readonly) NSString *name;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
@property(readonly) NSArray *notificationPayloadFileReferences;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)patchesDirectory;
- (id)patchesDirectoryWrapper;
@property(nonatomic) BOOL pendingFileReferencesAndContainers; // @synthesize pendingFileReferencesAndContainers=_pendingFileReferencesAndContainers;
@property(readonly, nonatomic) BOOL postLoadingPerformanceMetricsAllowed; // @synthesize postLoadingPerformanceMetricsAllowed=_postLoadingPerformanceMetricsAllowed;
- (void)primitiveInvalidate;
@property(readonly) IDERefactoring *refactoring; // @synthesize refactoring=_refactoring;
@property(readonly) NSSet *referencedBlueprintProviders;
@property(readonly) NSSet *referencedBlueprints;
@property(readonly) NSSet *referencedContainers;
@property(readonly) NSSet *referencedRunnableBuildableProducts;
@property(readonly) NSSet *referencedTestableProviders;
@property(readonly) NSSet *referencedTestables;
- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(id)arg3;
- (id)registerUncancellableClientWithName:(id)arg1;
@property(readonly) IDEContainer<IDECustomDataStoring> *representingCustomDataStore;
@property(readonly) DVTFilePath *representingFilePath;
@property(readonly) NSString *representingTitle;
@property(retain) IDERunContextManager *runContextManager; // @synthesize runContextManager=_runContextManager;
- (id)sdefSupport_breakpointsForDocument:(id)arg1;
- (id)sdefSupport_buildFolderName;
- (id)sdefSupport_fileBreakpointsForDocument:(id)arg1;
- (id)sdefSupport_newBreakpointWithProperties:(id)arg1;
- (id)sdefSupport_newBuildMessagesWithProperties:(id)arg1;
- (id)sdefSupport_newFileBreakpointWithProperties:(id)arg1;
- (id)sdefSupport_newFileReferenceWithProperties:(id)arg1;
- (id)sdefSupport_newGroupWithProperties:(id)arg1;
- (id)sdefSupport_newItemReferenceWithProperties:(id)arg1;
- (id)sdefSupport_newProjectForDocument:(id)arg1 withContentsValue:(id)arg2 andProperties:(id)arg3;
- (id)sdefSupport_newRunContextWithProperties:(id)arg1;
- (id)sdefSupport_newSymbolicBreakpointWithProperties:(id)arg1;
- (id)sdefSupport_newXcode3FileReferenceWithProperties:(id)arg1;
- (id)sdefSupport_newXcode3GroupWithProperties:(id)arg1;
- (id)sdefSupport_symbolicBreakpointsForDocument:(id)arg1;
- (void)setBatchFindManager:(id)arg1;
- (BOOL)setContainerFilePath:(id)arg1 error:(id *)arg2;
- (void)setSdefSupport_buildFolderName:(id)arg1;
@property(retain, nonatomic) IDEWorkspaceSharedSettings *sharedSettings; // @synthesize sharedSettings=_sharedSettings;
- (void)setSimpleFilesFocused:(BOOL)arg1;
@property(retain) IDEWorkspaceSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(retain) IDESourceControlWorkspaceMonitor *sourceControlWorkspaceMonitor; // @synthesize sourceControlWorkspaceMonitor=_sourceControlWorkspaceMonitor;
@property(retain) IDETestManager *testManager; // @dynamic testManager;
@property(retain, nonatomic) IDEWorkspaceUserSettings *userSettings; // @synthesize userSettings=_userSettings;
@property(retain, nonatomic) IDEWorkspaceArena *workspaceArena; // @synthesize workspaceArena=_workspaceArena;
@property(retain) id <IDEWorkspaceDelegate> workspaceDelegate;
@property(retain, nonatomic) id <IDEContinuousIntegrationBotMonitor> xcs2WorkspaceBotMonitor; // @synthesize xcs2WorkspaceBotMonitor=_xcs2WorkspaceBotMonitor;
- (id)tearDownIndexAndRefactoring;
@property(readonly) IDETextIndex *textIndex; // @synthesize textIndex=_textIndex;
@property(readonly) IDEContainer *wrappedXcode3Project;
@property(readonly) DVTFilePath *wrappedXcode3ProjectPath; // @synthesize wrappedXcode3ProjectPath=_wrappedXcode3ProjectPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

