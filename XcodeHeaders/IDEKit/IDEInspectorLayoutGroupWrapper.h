/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorLayoutGroup.h>

@interface IDEInspectorLayoutGroupWrapper : IDEInspectorLayoutGroup
{
    CDStruct_bf6d4a14 _subgroupInset;
}

- (id)attributeDescription;
- (id)initWithSubgroupInset:(CDStruct_bf6d4a14)arg1;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
@property CDStruct_bf6d4a14 subgroupInset; // @synthesize subgroupInset=_subgroupInset;
- (id)subgroup;

@end

