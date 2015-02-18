/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, DVTStackView_ML, IDEFlightCheckListView, NSString, NSTextField;

@interface IDEProjectItemOffView : DVTLayoutView_ML <DVTInvalidation>
{
    DVTStackView_ML *_stackView;
    IDEFlightCheckListView *_flightCheckListView;
    NSTextField *_descriptionView;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)_attributedDescriptionWithModel:(id)arg1;
- (id)_textFieldForDescriptionOfModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithItemModel:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)primitiveInvalidate;
- (void)setupSubviewsWithModel:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

