/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTObservingToken, DVTToggleSwitch, IDESourceControlRepository, NSImageView, NSString, NSTextField;

@interface IDEAccountPrefsRepositoryDetailViewController : IDEViewController
{
    NSTextField *_userTextField;
    NSTextField *_passwordTextField;
    DVTObservingToken *_repositoryEnabledWatcher;
    DVTObservingToken *_passwordObserver;
    NSString *_connectionError;
    BOOL _isVerifiying;
    DVTToggleSwitch *_toggleSwitch;
    NSImageView *_errorImageView;
    DVTBorderedView *_borderedView;
}

+ (id)keyPathsForValuesAffectingAddressContainsUser;
+ (id)keyPathsForValuesAffectingConnectionError;
- (void).cxx_destruct;
@property(readonly) BOOL addressContainsUser;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (id)connectionError;
- (id)contextMenu;
@property __weak NSImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property BOOL isVerifiying; // @synthesize isVerifiying=_isVerifiying;
- (id)nibName;
- (void)primitiveInvalidate;
@property(readonly) IDESourceControlRepository *repository;
- (void)setRepresentedObject:(id)arg1;
@property __weak DVTToggleSwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
- (void)verifyCredentials:(id)arg1;
- (void)viewDidInstall;

@end
