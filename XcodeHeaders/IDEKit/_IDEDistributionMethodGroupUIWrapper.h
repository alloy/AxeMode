/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/_IDEDistributionMethodUIWrapper.h>

@class NSArray;

@interface _IDEDistributionMethodGroupUIWrapper : _IDEDistributionMethodUIWrapper
{
    NSArray *_distributionMethods;
    unsigned long long _selectedMethodIndex;
}

+ (id)keyPathsForValuesAffectingDistributionMethod;
+ (id)wrapperForDistributionMethods:(id)arg1;
- (void).cxx_destruct;
- (id)distributionMethod;
@property(readonly) NSArray *distributionMethods; // @synthesize distributionMethods=_distributionMethods;
- (BOOL)isGroup;
@property unsigned long long selectedMethodIndex; // @synthesize selectedMethodIndex=_selectedMethodIndex;
- (id)title;

@end

