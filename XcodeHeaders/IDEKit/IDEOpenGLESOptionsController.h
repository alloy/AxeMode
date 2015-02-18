/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class DVTObservingToken;

@interface IDEOpenGLESOptionsController : IDELaunchActionOptionViewController
{
    DVTObservingToken *_frameCaptureModeObservingToken;
    BOOL _enableGPUValidationMode;
}

+ (BOOL)availableForScheme:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL enableGPUValidationMode; // @synthesize enableGPUValidationMode=_enableGPUValidationMode;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)viewWillUninstall;

@end

