/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSRegularExpression, NSSet, NSString;

@interface IDEMediaResourceVariantVariable : NSObject <NSCopying>
{
    id _searchValuesBlock;
    id _displayStringForValueBlock;
    id _matchesValueBlock;
    NSString *_displayName;
    NSRegularExpression *_expression;
    long long _valueStartOffset;
    long long _valueEndOffset;
    NSSet *_validValues;
}

+ (id)OSXImageScaleFactorVariantVariable;
+ (id)iOSHeightClassVariantVariable;
+ (id)iOSIdiomVariantVariable;
+ (id)iOSImageResolutionVariantVariable;
+ (id)iOSImageScaleFactorVariantVariable;
+ (id)iOSScreenWidthVariantVariable;
+ (id)iOSWidthClassVariantVariable;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)displayStringForValue:(id)arg1;
@property(readonly, copy, nonatomic) NSRegularExpression *expression; // @synthesize expression=_expression;
- (unsigned long long)hash;
- (id)initWithDisplayName:(id)arg1 pattern:(id)arg2 valueStartOffset:(long long)arg3 valueEndOffset:(long long)arg4 validValues:(id)arg5 searchValuesBlock:(id)arg6 displayStringForValueBlock:(void)arg7;
- (id)initWithDisplayName:(id)arg1 pattern:(id)arg2 valueStartOffset:(long long)arg3 valueEndOffset:(long long)arg4 validValues:(id)arg5 searchValuesBlock:(id)arg6 displayStringForValueBlock:(void)arg7 matchesValueBlock:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVariable:(id)arg1;
- (id)searchValuesForValue:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *validValues; // @synthesize validValues=_validValues;
- (BOOL)value:(id)arg1 matches:(id)arg2;
@property(readonly, nonatomic) long long valueEndOffset; // @synthesize valueEndOffset=_valueEndOffset;
@property(readonly, nonatomic) long long valueStartOffset; // @synthesize valueStartOffset=_valueStartOffset;

@end

