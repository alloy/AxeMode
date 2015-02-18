/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEPathComponentCell, NSString;

@interface IDEPathComponentCellAccessibilityObject : NSObject
{
    IDEPathComponentCell *_componentCell;
    NSString *_role;
    id _pathCell;
    NSString *_description;
}

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
@property(readonly) IDEPathComponentCell *componentCell; // @synthesize componentCell=_componentCell;
- (unsigned long long)hash;
- (id)initWithPathComponentCell:(id)arg1 pathCell:(id)arg2 description:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

