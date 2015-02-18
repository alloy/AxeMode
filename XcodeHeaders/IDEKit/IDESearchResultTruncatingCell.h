/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTImageAndTextCell.h"

@class IDEBatchFindResult, NSOutlineView, NSTextStorage;

@interface IDESearchResultTruncatingCell : DVTImageAndTextCell
{
    IDEBatchFindResult *_findResult;
    NSTextStorage *_textStorage;
    struct _NSRange _focusRange;
    BOOL _superDrawing;
    BOOL _stringCalculated;
    BOOL _showsStatusImage;
    BOOL _selectedState;
    int _navigatorDetailLevel;
    int _width;
    long long _rowNumber;
    NSOutlineView *_outlineView;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingImage;
- (void).cxx_destruct;
- (struct CGSize)_attributedStringValueSize;
- (id)_backgroundHighlightColor;
- (double)_defaultLineHeight;
- (id)_ellipsis:(long long *)arg1;
- (id)_generateTextStorage;
- (id)_layoutManagerForTextStorage:(id)arg1 withTextContainer:(id)arg2;
- (id)_newlineReplacement;
- (void)_trimLeadingWhitespaceFromString:(id)arg1 updateFocusRange:(struct _NSRange *)arg2;
- (void)_truncateStringForSize:(struct CGSize)arg1;
- (id)_underlineHighlightColor;
- (void)_updateStringStorage;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)attributedStringValue;
- (struct CGSize)computedSizeForResult:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTitleInCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)dvtExtraBindings;
@property(retain, nonatomic) IDEBatchFindResult *findResult; // @synthesize findResult=_findResult;
- (id)image;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int navigatorDetailLevel; // @synthesize navigatorDetailLevel=_navigatorDetailLevel;
@property __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (id)paragraphStyle;
- (int)rowHeightForItem:(id)arg1;
@property(nonatomic) long long rowNumber; // @synthesize rowNumber=_rowNumber;
@property(nonatomic) BOOL selectedState; // @synthesize selectedState=_selectedState;
@property BOOL showsStatusImage; // @synthesize showsStatusImage=_showsStatusImage;
@property(nonatomic) int width; // @synthesize width=_width;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)updateBoundFindResult;
- (BOOL)useCamelCaseWrapping;
@property(readonly, nonatomic) BOOL wrappingEnabled;

@end

