/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol DVTStatefulObject <NSObject>
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (long long)version;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
@end

