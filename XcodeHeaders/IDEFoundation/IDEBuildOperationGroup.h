/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTOperationGroup.h"

@class IDEBuildOperation;

@interface IDEBuildOperationGroup : DVTOperationGroup
{
    IDEBuildOperation *_buildOperation;
}

+ (id)operationGroupWithBuildOperation:(id)arg1 otherOperations:(id)arg2;
+ (id)operationGroupWithSuboperations:(id)arg1;
- (void).cxx_destruct;
@property(readonly) IDEBuildOperation *buildOperation; // @synthesize buildOperation=_buildOperation;

@end

