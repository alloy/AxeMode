/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSColor, NSString;

@interface IDEGraphChart : NSObject
{
    NSString *_label;
    NSColor *_color;
    NSArray *_entries;
}

- (void).cxx_destruct;
- (void)addValues:(id)arg1 startingAtIndex:(long long)arg2;
- (void)addValues:(id)arg1 startingAtIndex:(long long)arg2 userInfos:(id)arg3;
- (void)clearValues;
@property(retain) NSColor *color; // @synthesize color=_color;
@property(copy) NSArray *entries; // @synthesize entries=_entries;
- (void)flushEntriesToCount:(unsigned long long)arg1;
- (id)initWithLabel:(id)arg1 color:(id)arg2;
@property(retain) NSString *label; // @synthesize label=_label;
- (void)setValue:(id)arg1 forIndexedValue:(id)arg2;
- (void)setValue:(id)arg1 forIndexedValue:(id)arg2 userInfo:(id)arg3;

@end

