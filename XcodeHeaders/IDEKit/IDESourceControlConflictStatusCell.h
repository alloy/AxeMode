/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSActionCell.h"

@class NSAttributedString, NSNumber;

@interface IDESourceControlConflictStatusCell : NSActionCell
{
    NSAttributedString *_string;
    NSNumber *_conflictStateForUpdateOrMerge;
    BOOL _hidden;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)_bezelPathInRect:(struct CGRect)arg1;
- (void)_drawStatusString:(id)arg1 inPathRect:(struct CGRect)arg2 view:(id)arg3;
- (id)_validateAttributedString;
- (struct CGSize)cellSize;
@property(copy) NSNumber *conflictStateForUpdateOrMerge; // @synthesize conflictStateForUpdateOrMerge=_conflictStateForUpdateOrMerge;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property BOOL hidden; // @synthesize hidden=_hidden;
- (id)init;

@end

