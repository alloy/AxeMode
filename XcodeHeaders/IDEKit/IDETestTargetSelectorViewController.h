/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class NSButton, NSPopUpButton, NSString;

@interface IDETestTargetSelectorViewController : IDEViewController
{
    BOOL _shouldSetBundleLoader;
    id <IDEBlueprint> _unitTestBlueprint;
    NSString *_blueprintIdentifierToTest;
    NSPopUpButton *_testHostPopUp;
    NSButton *_bundleLoaderCheckbox;
}

- (void).cxx_destruct;
- (void)_rebuildTestHostPopUp;
- (id)blueprintForMenuItem:(id)arg1;
@property(retain, nonatomic) NSString *blueprintIdentifierToTest; // @synthesize blueprintIdentifierToTest=_blueprintIdentifierToTest;
@property(retain) NSButton *bundleLoaderCheckbox; // @synthesize bundleLoaderCheckbox=_bundleLoaderCheckbox;
- (void)bundleLoaderCheckboxAction:(id)arg1;
- (id)filteredBlueprints;
- (id)initWithUnitTestBlueprint:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)selectBlueprint:(id)arg1;
- (id)selectedBlueprint;
@property(nonatomic) BOOL shouldSetBundleLoader; // @synthesize shouldSetBundleLoader=_shouldSetBundleLoader;
@property(retain) NSPopUpButton *testHostPopUp; // @synthesize testHostPopUp=_testHostPopUp;
@property(retain, nonatomic) id <IDEBlueprint> unitTestBlueprint; // @synthesize unitTestBlueprint=_unitTestBlueprint;
- (void)updateUI;
- (void)updateUnitTestBlueprint;

@end

