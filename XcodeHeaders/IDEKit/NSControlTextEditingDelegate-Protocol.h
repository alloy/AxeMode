/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol NSControlTextEditingDelegate <NSObject>

@optional
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (void)control:(id)arg1 didFailToValidatePartialString:(id)arg2 errorDescription:(id)arg3;
- (BOOL)control:(id)arg1 isValidObject:(id)arg2;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
@end

