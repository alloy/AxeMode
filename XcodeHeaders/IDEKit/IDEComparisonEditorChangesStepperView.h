/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEEditorNumberStepperView.h>

@class DVTBindingToken, DVTDiffSession, DVTObservingToken, IDEComparisonEditorTimelineNavBar;

@interface IDEComparisonEditorChangesStepperView : IDEEditorNumberStepperView
{
    DVTBindingToken *_leftArrowEnabledToken;
    DVTBindingToken *_rightArrowEnabledToken;
    DVTObservingToken *_visibleModifiedDescriptorIndexesToken;
    DVTObservingToken *_selectedDiffDescriptorIndexToken;
    DVTDiffSession *_diffSession;
    IDEComparisonEditorTimelineNavBar *_timelineNavBar;
    unsigned long long _indexOfSelectedDiff;
}

+ (id)keyPathsForValuesAffectingCanSelectNext;
+ (id)keyPathsForValuesAffectingCanSelectPrevious;
+ (id)keyPathsForValuesAffectingIndexOfSelectedDiff;
- (void).cxx_destruct;
- (BOOL)canSelectNext;
- (BOOL)canSelectPrevious;
- (struct CGSize)centerViewSizeInHeight:(double)arg1;
@property(retain) DVTDiffSession *diffSession; // @synthesize diffSession=_diffSession;
@property unsigned long long indexOfSelectedDiff; // @synthesize indexOfSelectedDiff=_indexOfSelectedDiff;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)invalidateLayout;
- (void)primitiveInvalidate;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
@property(retain) IDEComparisonEditorTimelineNavBar *timelineNavBar; // @synthesize timelineNavBar=_timelineNavBar;

@end

