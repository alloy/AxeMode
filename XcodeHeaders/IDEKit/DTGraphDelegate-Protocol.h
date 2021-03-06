/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol DTGraphDelegate <NSObject>

@optional
- (id)backgroundColorForGraph:(id)arg1 entry:(id)arg2;
- (id)colorForGraph:(id)arg1 entry:(id)arg2;
- (void)drawGraph:(id)arg1 entry:(id)arg2 inPath:(id)arg3;
- (void)drawGraph:(id)arg1 entry:(id)arg2 inRect:(struct CGRect)arg3;
- (void)drawGraph:(id)arg1 entry:(id)arg2 path:(id)arg3 cell:(id)arg4 cellRect:(struct CGRect)arg5;
- (void)drawGraph:(id)arg1 entrySeries:(id)arg2 inPath:(id)arg3;
- (void)graph:(id)arg1 entry:(id)arg2 willDrawCell:(id)arg3;
- (id)iconForGraph:(id)arg1 entry:(id)arg2;
- (id)imageForGraph:(id)arg1 entry:(id)arg2 inRect:(struct CGRect)arg3;
- (id)labelForGraph:(id)arg1 entry:(id)arg2;
- (BOOL)lineFilledForGraph:(id)arg1 entry:(id)arg2;
- (void)setPathStyleForGraph:(id)arg1 entry:(id)arg2 path:(id)arg3;
- (int)shapeForGraph:(id)arg1 entry:(id)arg2;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (void)userClickedInGraph:(id)arg1 onEntry:(id)arg2;
- (void)userMouseExitedGraph:(id)arg1 event:(id)arg2;
- (void)userMousedOverInGraph:(id)arg1 onEntry:(id)arg2 event:(id)arg3;
@end

