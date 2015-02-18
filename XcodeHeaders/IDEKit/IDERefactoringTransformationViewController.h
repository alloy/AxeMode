/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDERefactoringViewController.h>

#import "NSTextFieldDelegate.h"

@class IDEIndexSymbol, IDERefactoringInputValidator, NSDictionary, NSString;

@interface IDERefactoringTransformationViewController : IDERefactoringViewController <NSTextFieldDelegate>
{
    IDEIndexSymbol *_originalSymbol;
    IDERefactoringInputValidator *_inputValidator;
    Class _inputValidatorClass;
    BOOL _checkForReservedWords;
    id <IDERefactoringReservedWordChecking> _reservedWordChecker;
}

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
@property(retain) IDERefactoringInputValidator *inputValidator; // @synthesize inputValidator=_inputValidator;
- (id)nibBundle;
@property(retain) IDEIndexSymbol *originalSymbol; // @synthesize originalSymbol=_originalSymbol;
@property(readonly) NSString *previewSummary;
@property(retain) id <IDERefactoringReservedWordChecking> reservedWordChecker; // @synthesize reservedWordChecker=_reservedWordChecker;
- (void)setInitialData:(id)arg1;
@property(readonly) NSDictionary *userInput;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

