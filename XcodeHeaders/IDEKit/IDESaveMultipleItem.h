/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEEditorDocument;

@interface IDESaveMultipleItem : NSObject
{
    IDEEditorDocument *_editorDocument;
    BOOL _isSelected;
}

- (void).cxx_destruct;
@property(readonly) IDEEditorDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
- (id)initWithEditorDocument:(id)arg1;
@property BOOL isSelected; // @synthesize isSelected=_isSelected;

@end

