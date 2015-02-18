/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "IDESnapshotConfirmationDelegate.h"

@class DVTStackBacktrace, IDEWorkspace, NSImage, NSString, NSWindow;

@interface IDESnapshotAreYouSureController : DVTViewController <IDESnapshotConfirmationDelegate>
{
    NSWindow *_hostWindow;
    id _completionBlock;
    IDEWorkspace *_workspace;
    NSWindow *_sheetWindow;
    NSImage *_snapshotImage;
    NSString *_projectOrWorkspaceCapitalized;
    NSString *_operationName;
    BOOL _shouldTakeSnapshot;
}

+ (id)defaultViewNibName;
- (void).cxx_destruct;
- (void)_sheetDidEnd;
- (void)cleanup;
- (id)initUsingDefaultNib;
- (id)messageDescription;
- (id)messageTitle;
- (void)primitiveInvalidate;
- (void)requestSnapshotConfirmationForOperationName:(id)arg1 inWorkspace:(id)arg2 completionBlock:(id)arg3;
- (void)skipSnapshot:(id)arg1;
- (void)takeSnapshot:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

