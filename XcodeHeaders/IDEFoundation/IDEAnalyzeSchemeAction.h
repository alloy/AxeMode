/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDESchemeAction.h>

#import "DVTXMLUnarchiving.h"

@class NSString;

@interface IDEAnalyzeSchemeAction : IDESchemeAction <DVTXMLUnarchiving>
{
    NSString *_buildConfiguration;
}

+ (void)insertsynthesizedMacrosIntoOverridingProperties:(id)arg1;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (BOOL)shouldAllowCustomPhaseActions;
- (void).cxx_destruct;
- (void)_commonInit;
@property(copy) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
- (id)buildOperationForExecutionEnvironment:(id)arg1 buildPurpose:(int)arg2 buildCommand:(int)arg3 schemeCommand:(id)arg4 filePath:(id)arg5 buildConfiguration:(id)arg6 buildLog:(id)arg7 overridingProperties:(id)arg8 activeRunDestination:(id)arg9 activeArchitecture:(id)arg10 restorePersistedBuildResults:(BOOL)arg11 schemeActionRecord:(id)arg12 error:(id *)arg13;
- (BOOL)doesNonActionWork;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)init;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)mutablePostPhaseExecutionActions;
- (id)mutablePrePhaseExecutionActions;
- (id)name;
- (id)postPhaseExecutionActions;
- (id)prePhaseExecutionActions;
- (id)subtitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

