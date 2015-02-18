/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class DVTGradientImageButton, NSTextField, NSTrackingArea;

@interface IDESourceControlCheckoutRecentsTableCellView : NSTableCellView
{
    BOOL _favorite;
    NSTextField *_subtitleTextField;
    BOOL _mouseInside;
    DVTGradientImageButton *_favoriteButton;
    NSTrackingArea *_trackingArea;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL favorite;
@property DVTGradientImageButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
@property BOOL mouseInside; // @synthesize mouseInside=_mouseInside;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setFavoriteImageBasedOnBackgroundStyle:(long long)arg1;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
- (void)updateTrackingAreas;

@end

