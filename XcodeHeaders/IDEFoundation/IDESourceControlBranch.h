/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDESourceControlRepository, IDESourceControlRevision, IDESourceControlWorkingCopyConfiguration, NSString;

@interface IDESourceControlBranch : NSObject
{
    NSString *_name;
    IDESourceControlWorkingCopyConfiguration *_wcc;
    IDESourceControlRepository *_remote;
    BOOL _isMainBranch;
    BOOL _orphaned;
    BOOL _isNewBranch;
    IDESourceControlRevision *_currentRevision;
}

- (void).cxx_destruct;
@property(retain) IDESourceControlRevision *currentRevision; // @synthesize currentRevision=_currentRevision;
- (id)description;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithName:(id)arg1 workingCopyConfiguration:(id)arg2 isMainBranch:(BOOL)arg3;
- (id)initWithNewBranchName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) BOOL isMainBranch; // @synthesize isMainBranch=_isMainBranch;
@property(readonly) BOOL isNewBranch; // @synthesize isNewBranch=_isNewBranch;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)nameOfTrackingBranch:(id)arg1;
@property BOOL orphaned; // @synthesize orphaned=_orphaned;
@property(retain) IDESourceControlRepository *remote; // @synthesize remote=_remote;
- (id)repository:(id)arg1 currentRevisionWithCompletionBlock:(id)arg2;
@property(readonly) NSString *repositoryURLString;
@property(readonly) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
- (id)workingTree:(id)arg1 parentBranchesWithCompletionBlock:(id)arg2;

@end

