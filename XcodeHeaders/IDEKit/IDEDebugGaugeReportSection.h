/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class IDEDebugGaugeReportContentBackground, NSLayoutConstraint, NSTextField, NSView;

@interface IDEDebugGaugeReportSection : IDEViewController
{
    NSView *_headerContainer;
    NSTextField *_titleLabel;
    NSView *_accessoryContainerView;
    IDEDebugGaugeReportContentBackground *_contentContainer;
    NSLayoutConstraint *_widthConstraintToRemoveAtRuntime;
}

- (void).cxx_destruct;
- (void)_addContentView:(id)arg1 topSpaceOffset:(long long)arg2 bottomSpaceOffset:(long long)arg3;
- (void)_installTitleAccessoryView:(id)arg1;
@property __weak NSView *accessoryContainerView; // @synthesize accessoryContainerView=_accessoryContainerView;
- (void)addContentView:(id)arg1;
@property __weak IDEDebugGaugeReportContentBackground *contentContainer; // @synthesize contentContainer=_contentContainer;
@property __weak NSView *headerContainer; // @synthesize headerContainer=_headerContainer;
- (id)initWithTitle:(id)arg1 accessoryView:(id)arg2 contentView:(id)arg3 topSpaceOffset:(long long)arg4 bottomSpaceOffset:(long long)arg5 hasBottomBorder:(BOOL)arg6;
- (id)initWithTitle:(id)arg1 contentView:(id)arg2;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak NSLayoutConstraint *widthConstraintToRemoveAtRuntime; // @synthesize widthConstraintToRemoveAtRuntime=_widthConstraintToRemoveAtRuntime;

@end

