/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DTStackedBarGraph.h"

@interface IDEEnergyAnnotatedBarGraph : DTStackedBarGraph
{
}

- (void)addHorizontalLinesToBezierPath:(id)arg1 inStacks:(id)arg2 withHeight:(double)arg3;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (BOOL)canDrawBeyondContentRect;
- (void)drawStacks:(id)arg1 rect:(struct CGRect)arg2;
- (id)guidanceTitles;
- (id)labelAttributes;
- (unsigned long long)longestGuidanceStringLength;
- (id)paddingString;
- (id)translateValue:(id)arg1 keypath:(id)arg2;

@end

