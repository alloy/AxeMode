/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDESchemeCommand : NSObject
{
    BOOL _appleInternalOnly;
    BOOL _supportsSingleFileProcessing;
    BOOL _shouldLaunch;
    BOOL _shouldTest;
    BOOL _shouldProfile;
    BOOL _shouldArchive;
    BOOL _shouldInstall;
    BOOL _shouldGenerateOptimizationProfile;
    NSString *_commandName;
    NSString *_commandNameGerund;
}

+ (id)allNonAppleInternalPrimitiveSchemeCommands;
+ (id)allNonAppleInternalSchemeCommands;
+ (id)allPrimitiveSchemeCommands;
+ (id)allSchemeCommands;
+ (id)analyzeSchemeCommand;
+ (id)archiveSchemeCommand;
+ (id)availablePrimitiveSchemeCommands;
+ (id)availableSchemeCommands;
+ (id)installSchemeCommand;
+ (id)integrateSchemeCommand;
+ (id)launchForPGOSchemeCommand;
+ (id)launchSchemeCommand;
+ (id)profileSchemeCommand;
+ (id)testForPGOSchemeCommand;
+ (id)testSchemeCommand;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *commandName; // @synthesize commandName=_commandName;
@property(readonly, copy, nonatomic) NSString *commandNameGerund; // @synthesize commandNameGerund=_commandNameGerund;
- (id)description;
- (id)init;
- (id)initWithCommandName:(id)arg1 gerund:(id)arg2 appleInternalOnly:(BOOL)arg3;
@property(readonly, nonatomic, getter=isAppleInternalOnly) BOOL appleInternalOnly; // @synthesize appleInternalOnly=_appleInternalOnly;
@property(readonly, nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property(readonly, nonatomic) BOOL shouldGenerateOptimizationProfile; // @synthesize shouldGenerateOptimizationProfile=_shouldGenerateOptimizationProfile;
@property(readonly, nonatomic) BOOL shouldInstall; // @synthesize shouldInstall=_shouldInstall;
@property(readonly, nonatomic) BOOL shouldLaunch; // @synthesize shouldLaunch=_shouldLaunch;
@property(readonly, nonatomic) BOOL shouldProfile; // @synthesize shouldProfile=_shouldProfile;
@property(readonly, nonatomic) BOOL shouldTest; // @synthesize shouldTest=_shouldTest;
@property(readonly, nonatomic) BOOL supportsSingleFileProcessing; // @synthesize supportsSingleFileProcessing=_supportsSingleFileProcessing;

@end

