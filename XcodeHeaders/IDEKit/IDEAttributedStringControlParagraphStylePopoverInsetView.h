/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class NSView;

@interface IDEAttributedStringControlParagraphStylePopoverInsetView : DVTLayoutView_ML
{
    int _horizontalResizingMode;
    int _verticalResizingMode;
    NSView *_contentView;
    CDStruct_bf6d4a14 _inset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property int horizontalResizingMode; // @synthesize horizontalResizingMode=_horizontalResizingMode;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) CDStruct_bf6d4a14 inset; // @synthesize inset=_inset;
- (void)layoutBottomUp;
- (void)layoutTopDown;
@property int verticalResizingMode; // @synthesize verticalResizingMode=_verticalResizingMode;

@end

