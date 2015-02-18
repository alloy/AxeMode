/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, NSArray, NSMutableArray, NSNumber, NSString;

@interface IDELocationScenario : NSObject
{
    NSString *_identifier;
    NSArray *_locations;
    BOOL _autorepeat;
    NSNumber *_speed;
    DVTFilePath *_filePath;
    BOOL _hasLoadedContent;
    BOOL _valid;
    BOOL _isCurrentLocation;
}

+ (id)builtInScenarioWithIdentifier:(id)arg1;
+ (id)currentLocationScenario;
+ (id)defaultScenarios;
- (void).cxx_destruct;
- (id)_locationsFromReferencedGPXFileWithError:(id *)arg1;
@property(readonly) BOOL autorepeat; // @synthesize autorepeat=_autorepeat;
- (id)description;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 locations:(id)arg2;
- (id)initWithIdentifier:(id)arg1 locations:(id)arg2 speed:(id)arg3 autorepeat:(BOOL)arg4;
- (id)initWithIdentifier:(id)arg1 referencingFilePath:(id)arg2;
- (id)initWithWorkspace:(id)arg1 referencingFilePath:(id)arg2;
@property(readonly) BOOL isCurrentLocationScenario; // @synthesize isCurrentLocationScenario=_isCurrentLocation;
@property(readonly, getter=isDefaultScenario) BOOL defaultScenario;
@property(readonly) BOOL isValid;
@property(readonly) NSArray *locations; // @dynamic locations;
@property(readonly) NSString *name;
@property(readonly) NSNumber *speed; // @synthesize speed=_speed;

// Remaining properties
@property(readonly) NSMutableArray *mutableLocations; // @dynamic mutableLocations;

@end

