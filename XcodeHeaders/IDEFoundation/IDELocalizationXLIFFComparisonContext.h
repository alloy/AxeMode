/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class NSArray, NSURL;

@interface IDELocalizationXLIFFComparisonContext : IDELocalizationWorkContext
{
    NSURL *_destinationURL;
    NSArray *_issues;
    NSArray *_filesWithChanges;
}

- (void).cxx_destruct;
@property(retain) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain) NSArray *filesWithChanges; // @synthesize filesWithChanges=_filesWithChanges;
@property(retain) NSArray *issues; // @synthesize issues=_issues;
- (void)recordEmptyTarget:(id)arg1 appendedIncomingRange:(struct _NSRange)arg2 appendedProjectRange:(struct _NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordExtraFile:(id)arg1 appendedIncomingRange:(struct _NSRange)arg2 appendedProjectRange:(struct _NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordExtraTranslationUnit:(id)arg1 appendedIncomingRange:(struct _NSRange)arg2 appendedProjectRange:(struct _NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordFileChangeForImportUrl:(id)arg1 exportUrl:(id)arg2 original:(id)arg3 foundInProject:(BOOL)arg4;
- (void)recordIssue:(int)arg1 message:(id)arg2 appendedIncomingRange:(struct _NSRange)arg3 appendedProjectRange:(struct _NSRange)arg4 importUrl:(id)arg5 exportUrl:(id)arg6;
- (void)recordMismatchedSource:(id)arg1 projectStringValue:(id)arg2 appendedIncomingRange:(struct _NSRange)arg3 appendedProjectRange:(struct _NSRange)arg4 importUrl:(id)arg5 exportUrl:(id)arg6;
- (void)recordMissingFile:(id)arg1 appendedIncomingRange:(struct _NSRange)arg2 appendedProjectRange:(struct _NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;
- (void)recordMissingTranslationUnit:(id)arg1 appendedIncomingRange:(struct _NSRange)arg2 appendedProjectRange:(struct _NSRange)arg3 importUrl:(id)arg4 exportUrl:(id)arg5;

@end

