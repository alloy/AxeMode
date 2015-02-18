/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSImage, NSMutableArray, NSString;

@interface IDEARCConversionTargetChooserItem : NSObject
{
    id _representedObject;
    IDEARCConversionTargetChooserItem *_parentItem;
    NSMutableArray *_childItems;
}

+ (id)keyPathsForValuesAffectingArrangedChildItems;
- (void).cxx_destruct;
- (id)_childItems;
@property(readonly, copy) NSArray *arrangedChildItems;
@property(readonly, copy) NSArray *childItems;
@property(readonly, copy) NSImage *iconImage;
- (id)initWithRepresentedObject:(id)arg1;
- (void)insertObject:(id)arg1 inChildItemsAtIndex:(unsigned long long)arg2;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly, copy) NSMutableArray *mutableChildItems;
@property(retain) IDEARCConversionTargetChooserItem *parentItem; // @synthesize parentItem=_parentItem;
- (void)removeObjectFromChildItemsAtIndex:(unsigned long long)arg1;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly) double rowHeight;
@property long long state;
@property(readonly, copy) NSString *subtitle;
@property(readonly, copy) NSString *title;
@property(readonly, copy) NSString *warningMessage;

@end

