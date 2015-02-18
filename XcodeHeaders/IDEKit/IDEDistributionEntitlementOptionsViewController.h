/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTStackView_AppKitAutolayout, NSArray;

@interface IDEDistributionEntitlementOptionsViewController : IDEDistributionStepViewController
{
    NSArray *_optionsViewControllers;
    DVTStackView_AppKitAutolayout *_optionsStackView;
}

+ (void)_createProcessorsForContext:(id)arg1;
+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
- (void).cxx_destruct;
- (id)nibName;
@property(retain, nonatomic) DVTStackView_AppKitAutolayout *optionsStackView; // @synthesize optionsStackView=_optionsStackView;
@property(retain, nonatomic) NSArray *optionsViewControllers; // @synthesize optionsViewControllers=_optionsViewControllers;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)title;
- (void)viewDidInstall;

@end
