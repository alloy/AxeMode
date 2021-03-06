/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEIndex, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface IDEIndexProductInfo : NSObject
{
    id <IDEIndexable> _indexable;
    IDEIndex *_index;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_buildSettings;
    NSString *_productNameKey;
    NSString *_productName;
    BOOL _unitTest;
    NSString *_targetIdentifier;
    NSString *_workspaceIdentifier;
    NSString *_productType;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIndexable:(id)arg1 forIndex:(id)arg2;
@property(readonly, nonatomic, getter=isUnitTest) BOOL unitTest; // @synthesize unitTest=_unitTest;
@property(readonly, nonatomic) NSString *productName;
- (void)productNameHint:(id)arg1;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
- (void)registerTarget;
- (void)reportBuildSettings:(id)arg1;
@property(readonly, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
- (void)unregisterTarget;
- (void)updateBuildSettings;
- (id)userInfo;
@property(readonly, nonatomic) NSString *workspaceIdentifier; // @synthesize workspaceIdentifier=_workspaceIdentifier;

@end

