/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEDistributionStepViewController.h>

#import "DVTLinkViewDelegate.h"
#import "NSTableViewDelegate.h"

@class DVTLinkView, DVTTableView, NSArray, NSMenuItem, NSString, NSTextField, NSWindow;

@interface IDEDistributionSummaryStepViewController : IDEDistributionStepViewController <DVTLinkViewDelegate, NSTableViewDelegate>
{
    DVTLinkView *_learnMoreLinkView;
    NSTextField *_learnMoreLinkTextField;
    NSMenuItem *_exportPackageMenuItem;
    NSMenuItem *_exportArchiveMenuItem;
    DVTTableView *_detailTable;
    NSWindow *_learnMoreSheet;
    NSTextField *_learnMoreContentsTextField;
    NSString *_signingIdentityName;
    NSArray *_summaryItems;
}

- (void).cxx_destruct;
- (id)_clickedSummaryItemForSender:(id)arg1;
- (void)_exportFileURL:(id)arg1 withMessage:(id)arg2;
@property(retain) DVTTableView *detailTable; // @synthesize detailTable=_detailTable;
- (void)done:(id)arg1;
- (void)expandEntitlements:(id)arg1;
@property(retain) NSMenuItem *exportArchiveMenuItem; // @synthesize exportArchiveMenuItem=_exportArchiveMenuItem;
@property(retain) NSMenuItem *exportPackageMenuItem; // @synthesize exportPackageMenuItem=_exportPackageMenuItem;
@property(retain, nonatomic) NSTextField *learnMoreContentsTextField; // @synthesize learnMoreContentsTextField=_learnMoreContentsTextField;
@property(retain, nonatomic) NSTextField *learnMoreLinkTextField; // @synthesize learnMoreLinkTextField=_learnMoreLinkTextField;
@property(retain, nonatomic) DVTLinkView *learnMoreLinkView; // @synthesize learnMoreLinkView=_learnMoreLinkView;
@property(retain, nonatomic) NSWindow *learnMoreSheet; // @synthesize learnMoreSheet=_learnMoreSheet;
- (void)linkView:(id)arg1 didReceiveClickAtPoint:(struct CGPoint)arg2;
- (id)nextButtonTitle;
- (id)nibName;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (void)revealProfile:(id)arg1;
@property(retain) NSString *signingIdentityName; // @synthesize signingIdentityName=_signingIdentityName;
@property(retain) NSArray *summaryItems; // @synthesize summaryItems=_summaryItems;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)title;
- (void)viewDidInstall;
- (BOOL)wantsSymbolCollectionAsk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
