/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEDistributionStepViewController.h>

#import "DVTTableViewDelegate.h"
#import "NSTableViewDataSource.h"

@class DVTTableView, NSArray, NSLayoutConstraint, NSString;

@interface IDEDistributionMethodStepViewController : IDEDistributionStepViewController <DVTTableViewDelegate, NSTableViewDataSource>
{
    DVTTableView *_distributionTableView;
    id _selectedDistributionMethodWrapper;
    NSArray *_distributionMethodWrappers;
    NSLayoutConstraint *_distributionTableHeightConstraint;
}

- (void).cxx_destruct;
- (BOOL)canGoNext;
- (BOOL)canGoPrevious;
@property(retain) NSArray *distributionMethodWrappers; // @synthesize distributionMethodWrappers=_distributionMethodWrappers;
- (id)distributionSelectionDescription;
@property(retain) NSLayoutConstraint *distributionTableHeightConstraint; // @synthesize distributionTableHeightConstraint=_distributionTableHeightConstraint;
@property(retain) DVTTableView *distributionTableView; // @synthesize distributionTableView=_distributionTableView;
- (void)loadView;
- (id)nibName;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (void)selectDistributionMethod:(id)arg1;
- (void)selectDistributionMethodWrapper:(id)arg1;
- (void)selectGroupedDistributionMethod:(id)arg1;
@property(retain, nonatomic) id selectedDistributionMethodWrapper; // @synthesize selectedDistributionMethodWrapper=_selectedDistributionMethodWrapper;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

