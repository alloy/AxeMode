/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlOperationInfo.h>

@class DVTFilePath, NSString;

@interface IDESourceControlCreateGitRepositoryOperationInfo : IDESourceControlOperationInfo
{
    BOOL _shouldPush;
    DVTFilePath *_repositoryRoot;
    id _serverToPushTo;
    NSString *_serverRepositoryName;
    NSString *_localRemoteName;
}

- (void).cxx_destruct;
@property(copy) NSString *localRemoteName; // @synthesize localRemoteName=_localRemoteName;
- (void)primitiveInvalidate;
- (id)processInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
@property(retain) DVTFilePath *repositoryRoot; // @synthesize repositoryRoot=_repositoryRoot;
@property(copy) NSString *serverRepositoryName; // @synthesize serverRepositoryName=_serverRepositoryName;
@property id serverToPushTo; // @synthesize serverToPushTo=_serverToPushTo;
@property BOOL shouldPush; // @synthesize shouldPush=_shouldPush;

@end

