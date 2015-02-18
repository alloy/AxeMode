/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, NSDictionary;

@interface IDEWorkspaceArenaInfo : NSObject
{
    NSDictionary *_infoDict;
    DVTFilePath *_workspacePath;
}

+ (id)workspaceArenaInfoFromFileAtPath:(id)arg1 error:(id *)arg2;
+ (id)workspaceArenaInfoWithWorkspacePath:(id)arg1;
- (void).cxx_destruct;
@property(readonly) DVTFilePath *workspacePath;
- (BOOL)writeToFileAtPath:(id)arg1 withRelativeWorkspacePath:(BOOL)arg2 error:(id *)arg3;

@end

