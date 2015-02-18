/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTDeveloperProfileAccountProvider.h"

@class DVTDispatchLock, NSArray, NSMutableArray, NSOperationQueue, NSString;

@interface IDESourceControlManager : NSObject <DVTDeveloperProfileAccountProvider>
{
    NSMutableArray *_repositories;
    NSMutableArray *_workingCopyConfigurations;
    NSMutableArray *_workingTrees;
    NSMutableArray *_projects;
    NSMutableArray *_extensions;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_holdingQueue;
    DVTDispatchLock *_holdingQueueLock;
    long long _maxConcurrentOperationCount;
    long long _automaticallyScanWorkspaces;
    long long _authenticationRetryAttempts;
    BOOL _enableSourceControl;
    BOOL _localStatusCheckingEnabled;
    BOOL _remoteStatusCheckingEnabled;
    BOOL _automaticallyAddNewFiles;
    BOOL _waitingForAuthentication;
    BOOL _shouldLoadRepositories;
    double _minimumLocalStatusRequestDelay;
    NSString *_pathOfWorkspaceJustCheckedOut;
}

+ (id)keyPathsForValuesAffectingRepositories;
+ (id)sharedSourceControlManager;
+ (id)sourceControlAuthenticationLogAspect;
+ (id)sourceControlFileScanningLogAspect;
+ (id)sourceControlLogAspect;
+ (id)sourceControlProfilingLogAspect;
+ (id)sourceControlReachabilityLogAspect;
- (void).cxx_destruct;
- (id)_blacklistedDirectories;
- (id)_directoryIdentifiers;
- (void)_finishLogForRequest:(id)arg1 operation:(id)arg2 withResult:(int)arg3 completionBlock:(id)arg4;
- (void)_fixVersion100Xcode5SCMPreferences;
- (void)_startLogForRequest:(id)arg1 operation:(id)arg2;
- (id)_svnOriginURLForFilePath:(id)arg1;
- (id)_upgradableSVNWorkingTreeRootForFilePath:(id)arg1;
- (void)addRepository:(id)arg1;
- (void)addSourceControlProject:(id)arg1;
- (void)addWorkingCopyConfiguration:(id)arg1;
- (void)addWorkingTree:(id)arg1;
- (id)arrayOfProjectDictionaries;
- (id)arrayOfRepositoryDictionaries;
- (id)arrayOfWorkingCopyConfigurationDictionaries;
- (void)associateExtension:(id)arg1 withPath:(id)arg2;
- (void)associateRepositoryRoot:(id)arg1 withFilePath:(id)arg2;
@property BOOL automaticallyAddNewFiles;
@property long long automaticallyScanWorkspaces;
- (void)cancelRequest:(id)arg1;
- (id)commonExtensionForPaths:(id)arg1;
- (id)defaultExtension;
@property BOOL enableSourceControl;
- (BOOL)exportAccountsToKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id *)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (id)extensionForRequest:(id)arg1;
- (id)extensionForURL:(id)arg1;
- (id)extensionMatchingDirectoryIdentifier:(id)arg1;
- (id)extensionMatchingIdentifier:(id)arg1;
- (id)extensionToUseForFilePath:(id)arg1;
@property(readonly) NSArray *extensions; // @synthesize extensions=_extensions;
- (id)extensionsAssociatedWithFilePath:(id)arg1;
- (id)extensionsAtFilePath:(id)arg1;
- (id)extensionsMatchingProtocol:(id)arg1;
- (void)handleError:(id)arg1 forRequest:(id)arg2 operation:(id)arg3 waitUntilFinished:(BOOL)arg4 withCompletionBlock:(id)arg5;
- (BOOL)importAccountsFromKeychain:(struct OpaqueSecKeychainRef *)arg1 propertyList:(id)arg2 numberOfAccounts:(unsigned long long *)arg3 error:(id *)arg4;
- (id)initWithSavedRepositories:(BOOL)arg1;
- (void)invalidateExtensionsForFilePath:(id)arg1;
- (void)invalidateExtensionsRecursivelyForFilePath:(id)arg1;
- (void)loadExtensions;
- (void)loadProjects;
- (void)loadRepositories;
- (id)loadRepositoriesFromArray:(id)arg1 error:(id *)arg2;
- (void)loadXcode40RepositoriesFromArray:(id)arg1;
@property BOOL localStatusCheckingEnabled; // @synthesize localStatusCheckingEnabled=_localStatusCheckingEnabled;
@property long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
@property(readonly) double minimumLocalStatusRequestDelay; // @synthesize minimumLocalStatusRequestDelay=_minimumLocalStatusRequestDelay;
@property(retain) NSString *pathOfWorkspaceJustCheckedOut; // @synthesize pathOfWorkspaceJustCheckedOut=_pathOfWorkspaceJustCheckedOut;
- (void)performRequest:(id)arg1 waitUntilFinished:(BOOL)arg2 withCompletionBlock:(id)arg3;
- (void)performRequest:(id)arg1 withCompletionBlock:(id)arg2;
@property(readonly) NSArray *projects; // @synthesize projects=_projects;
@property BOOL remoteStatusCheckingEnabled; // @synthesize remoteStatusCheckingEnabled=_remoteStatusCheckingEnabled;
- (void)removeAssociatedExtension:(id)arg1 withPath:(id)arg2;
- (void)removeAssociatedRepositoryRoot:(id)arg1 withFilePath:(id)arg2;
- (void)removeRepository:(id)arg1 removePasswordFromKeychain:(BOOL)arg2;
- (void)removeSourceControlProject:(id)arg1;
- (void)removeWorkingTree:(id)arg1;
@property(readonly) NSArray *repositories; // @synthesize repositories=_repositories;
- (id)repositoryForURL:(id)arg1 sourceControlExtension:(id)arg2;
- (void)repositoryRootForRepository:(id)arg1 withCompletionBlock:(id)arg2;
- (id)repositoryWithRoot:(id)arg1 sourceControlExtension:(id)arg2;
- (void)scanForExtensionsInFilePath:(id)arg1;
@property BOOL waitingForAuthentication; // @synthesize waitingForAuthentication=_waitingForAuthentication;
@property(readonly) BOOL shouldLoadRepositories; // @synthesize shouldLoadRepositories=_shouldLoadRepositories;
@property(readonly) NSString *typeIdentifier;
- (void)updateUserDefaults;
- (BOOL)validateRequest:(id)arg1 error:(id *)arg2;
- (id)workingCopyConfigurations;
- (id)workingTreeForFilePath:(id)arg1;
- (void)workingTreeForFilePath:(id)arg1 completionBlock:(id)arg2;
- (void)workingTreeRootForFilePath:(id)arg1 completionBlock:(id)arg2;
- (void)workingTreeRootForFilePath:(id)arg1 sourceControlExtension:(id)arg2 completionBlock:(id)arg3;
@property(readonly) NSArray *workingTrees; // @synthesize workingTrees=_workingTrees;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
