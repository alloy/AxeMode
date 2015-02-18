/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindowController.h"

@class IDESourceControlCredentialsValidator, IDESourceControlRepository, NSButton, NSProgressIndicator, NSSecureTextField, NSString, NSTextField, NSTimer;

@interface IDESourceControlAuthenticationWindowController : NSWindowController
{
    NSTextField *messageTextField;
    NSTextField *infoTextField;
    NSTextField *usernameTextField;
    NSTextField *statusTextField;
    NSSecureTextField *passwordTextField;
    NSProgressIndicator *progressIndicator;
    NSButton *OKButton;
    IDESourceControlRepository *_repository;
    IDESourceControlCredentialsValidator *_validator;
    id _completionBlock;
    NSTimer *_autodismissTimer;
    long long _count;
    BOOL _isCheckingPassword;
    NSString *_username;
    NSString *_password;
}

+ (id)keyPathsForValuesAffectingAddressContainsUser;
- (void).cxx_destruct;
- (id)_openWindowTerminationDisablingReason;
@property(readonly) BOOL addressContainsUser;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)autodismiss;
- (void)beginAutodismissCountdown;
- (void)cancel:(id)arg1;
- (void)cancelAutodismiss;
@property(copy) id completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (void)dontAsk:(id)arg1;
@property BOOL isCheckingPassword; // @synthesize isCheckingPassword=_isCheckingPassword;
- (void)ok:(id)arg1;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void)presentAuthenticationWindowForRepository:(id)arg1;
- (void)presentWindow;
@property(retain) IDESourceControlRepository *repository; // @synthesize repository=_repository;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)startAutodismissTimer;
- (void)validateCredentialsWithCompletionBlock:(id)arg1;
- (id)windowNibName;
- (void)windowWillClose:(id)arg1;

@end

