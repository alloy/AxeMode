/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTStackView_ML.h"

@class NSDictionary;

@interface IDEAccountPrefsEntitlementsIconsView : DVTStackView_ML
{
    long long _backgroundStyle;
    NSDictionary *_entitlements;
}

- (void).cxx_destruct;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
- (id)features;
- (id)iconForFeature:(id)arg1 inverted:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutTopDown;

@end

