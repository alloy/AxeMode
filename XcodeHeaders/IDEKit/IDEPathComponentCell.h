/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSPathComponentCell.h"

@class NSImage;

@interface IDEPathComponentCell : NSPathComponentCell
{
    int _gradientStyle;
    BOOL _isLastItem;
    BOOL _isFirstItem;
    NSImage *_realImage;
}

+ (id)_textDrawingAttributes;
- (void).cxx_destruct;
- (id)_attributedStringValue:(BOOL)arg1;
- (void)_drawChevronDividerInFrame:(struct CGRect)arg1 isActive:(BOOL)arg2 isDemiSize:(BOOL)arg3;
- (void)_drawDividerForFrame:(struct CGRect)arg1 inControlView:(id)arg2;
- (double)_leftDividerWidth;
- (double)_rightDividerWidth;
- (double)_textOffsetForIcon:(id)arg1 inFrame:(struct CGRect)arg2 doDraw:(BOOL)arg3 isActive:(BOOL)arg4;
- (void)_useChevronForLeftEdge:(char *)arg1 rightEdge:(char *)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (BOOL)iconHitTest:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2;
- (double)iconSize;
- (id)image;
@property BOOL isFirstItem; // @synthesize isFirstItem=_isFirstItem;
@property BOOL isLastItem; // @synthesize isLastItem=_isLastItem;
- (void)setImage:(id)arg1;
- (id)shadow;

@end

