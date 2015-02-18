/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTDisclosureHeaderView.h"

@class NSTrackingArea;

@interface IDEUtilityDisclosureHeaderView : DVTDisclosureHeaderView
{
    NSTrackingArea *_mouseTracking;
    BOOL _mouseInside;
}

- (void).cxx_destruct;
- (void)_toggleDisclosureButton:(BOOL)arg1;
- (void)commonInit;
- (void)dealloc;
- (id)defaultDisclosureButton;
- (void)didCompleteLayout;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)refreshDisclosureButtonVisibility;
- (void)registerForMouseEvents;
- (void)setDisclosed:(BOOL)arg1;
- (void)setMouseInside:(BOOL)arg1;
- (void)unregisterForMouseEvents;

@end

