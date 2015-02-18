/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTStatefulObject.h"
#import "NSObject.h"

@protocol IDEOrganizerSource <NSObject, DVTStatefulObject>

@optional
- (void)openFileURL:(id)arg1 withFileType:(id)arg2;
- (void)organizerSourceWillAppearInWindowController:(id)arg1;
- (void)organizerSourceWillCloseInWindowController:(id)arg1;
- (void)searchWithString:(id)arg1;
@end

