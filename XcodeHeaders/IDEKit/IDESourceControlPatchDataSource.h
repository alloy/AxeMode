/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlReviewFilesDataSource.h>

@class NSArray;

@interface IDESourceControlPatchDataSource : IDESourceControlReviewFilesDataSource
{
    NSArray *_operationInfo;
}

- (void).cxx_destruct;
@property(copy) NSArray *operationInfo; // @synthesize operationInfo=_operationInfo;
- (id)operationInfoForAncestorOfFilePath:(id)arg1;
- (id)operationInfoForFilePath:(id)arg1;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (void)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forNavigableItem:(id)arg4;

@end

