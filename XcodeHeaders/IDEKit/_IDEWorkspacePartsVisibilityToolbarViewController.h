/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTToolbarViewController.h"

@class DVTObservingToken;

@interface _IDEWorkspacePartsVisibilityToolbarViewController : DVTToolbarViewController
{
    DVTObservingToken *_navigatorVisibilityObservationToken;
    DVTObservingToken *_debuggerVisibilityObservationToken;
    DVTObservingToken *_utilitiesVisibilityObservationToken;
}

- (void).cxx_destruct;
- (id)_create1010AndLaterControl;
- (id)_createPre1010Control;
- (id)_imageFactoryForImageNamed:(id)arg1;
- (void)_menuItemAction:(id)arg1;
- (id)_menuItemTitleForSplitViewWithTag:(unsigned long long)arg1 state:(BOOL)arg2;
- (id)_propertyNameForSplitViewWithTag:(unsigned long long)arg1;
- (void)_segmentStateDidChange:(id)arg1;
- (void)_toggleStateForSplitViewWithTag:(unsigned long long)arg1;
- (id)_viewDebugAreaImageFactory;
- (id)_viewNavigatorsImageFactory;
- (id)_viewUtilitiesImageFactory;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;
- (id)menuForMenuFormRepresentation;
- (void)primitiveInvalidate;
- (BOOL)validateMenuItem:(id)arg1;

@end

