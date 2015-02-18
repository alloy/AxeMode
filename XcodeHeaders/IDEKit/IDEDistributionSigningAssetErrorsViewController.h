/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTTableViewDelegate.h"

@class DVTFuture, DVTTableView, IDEDistributionLogging, NSArray, NSButton, NSString, NSTextField;

@interface IDEDistributionSigningAssetErrorsViewController : IDEViewController <DVTTableViewDelegate>
{
    DVTFuture *_recoveryF;
    NSArray *_errors;
    IDEDistributionLogging *_logging;
    DVTTableView *_errorTable;
    NSButton *_resolutionButton1;
    NSTextField *_resolutionButtonConjunctionText;
    NSButton *_resolutionButton2;
}

- (void).cxx_destruct;
- (void)attemptRecovery:(id)arg1;
@property(retain) DVTTableView *errorTable; // @synthesize errorTable=_errorTable;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (void)importProfile:(id)arg1;
- (void)loadView;
@property(retain) IDEDistributionLogging *logging; // @synthesize logging=_logging;
- (id)nibName;
- (void)primitiveInvalidate;
@property(retain) NSButton *resolutionButton1; // @synthesize resolutionButton1=_resolutionButton1;
@property(retain) NSButton *resolutionButton2; // @synthesize resolutionButton2=_resolutionButton2;
@property(retain) NSTextField *resolutionButtonConjunctionText; // @synthesize resolutionButtonConjunctionText=_resolutionButtonConjunctionText;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)visitMemberCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

