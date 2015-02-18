/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTextDelegate.h"

@protocol NSTextViewDelegate <NSTextDelegate>

@optional
- (id)textView:(id)arg1 URLForContentsOfTextAttachment:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)textView:(id)arg1 didCheckTextInRange:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 results:(id)arg5 orthography:(id)arg6 wordCount:(long long)arg7;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 draggedCell:(id)arg2 inRect:(struct CGRect)arg3 event:(id)arg4;
- (void)textView:(id)arg1 draggedCell:(id)arg2 inRect:(struct CGRect)arg3 event:(id)arg4 atIndex:(unsigned long long)arg5;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (long long)textView:(id)arg1 shouldSetSpellingState:(long long)arg2 range:(struct _NSRange)arg3;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (id)textView:(id)arg1 willChangeSelectionFromCharacterRanges:(id)arg2 toCharacterRanges:(id)arg3;
- (id)textView:(id)arg1 willCheckTextInRange:(struct _NSRange)arg2 options:(id)arg3 types:(unsigned long long *)arg4;
- (id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (id)textView:(id)arg1 willShowSharingServicePicker:(id)arg2 forItems:(id)arg3;
- (id)textView:(id)arg1 writablePasteboardTypesForCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)textView:(id)arg1 writeCell:(id)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(id)arg4 type:(id)arg5;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChangeTypingAttributes:(id)arg1;
- (id)undoManagerForTextView:(id)arg1;
@end

