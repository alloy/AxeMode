/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class NSImageView, NSPopUpButton, NSTextField;

@interface IDESourceControlCheckoutMultiWorkingCopyTableCellView : NSTableCellView
{
    NSTextField *_subtitleTextField;
    NSTextField *_urlField;
    NSPopUpButton *_branchPopUp;
    NSImageView *_unreachableImage;
}

- (void).cxx_destruct;
@property NSPopUpButton *branchPopUp; // @synthesize branchPopUp=_branchPopUp;
- (void)setBackgroundStyle:(long long)arg1;
@property NSImageView *unreachableImage; // @synthesize unreachableImage=_unreachableImage;
@property NSTextField *urlField; // @synthesize urlField=_urlField;

@end
