/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTDisclosureHeaderView.h"

@class IDECapsuleView, NSView;

@interface IDECapsuleHeaderView : DVTDisclosureHeaderView
{
    struct CGPoint _lastMouseDownLoc;
    NSView *_capsuleHeaderContentView;
    IDECapsuleView *_capsuleView;
}

- (void).cxx_destruct;
- (void)_endEditingTitleField;
- (BOOL)_isRenameEvent:(id)arg1;
- (void)_startEditingTitleFieldWithTitle:(id)arg1;
@property(retain, nonatomic) NSView *capsuleHeaderContentView; // @synthesize capsuleHeaderContentView=_capsuleHeaderContentView;
@property IDECapsuleView *capsuleView; // @synthesize capsuleView=_capsuleView;
- (id)defaultCloseButton;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (double)preferredHeight;

@end

