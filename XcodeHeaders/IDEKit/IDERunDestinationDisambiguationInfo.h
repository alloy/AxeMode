/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class DVTSDK, NSString;

@interface IDERunDestinationDisambiguationInfo : NSObject <NSCopying>
{
    NSString *_deviceOperatingSystemVersion;
    NSString *_deviceOperatingSystemBuild;
    NSString *_deviceModelName;
    NSString *_deviceIdentifier;
    NSString *_targetArchitecture;
    DVTSDK *_targetSDK;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly) NSString *deviceModelName; // @synthesize deviceModelName=_deviceModelName;
@property(readonly) NSString *deviceOperatingSystemBuild; // @synthesize deviceOperatingSystemBuild=_deviceOperatingSystemBuild;
@property(readonly) NSString *deviceOperatingSystemVersion; // @synthesize deviceOperatingSystemVersion=_deviceOperatingSystemVersion;
- (id)initWithDeviceOperatingSystemVersion:(id)arg1 deviceOperatingSystemBuild:(id)arg2 deviceModelName:(id)arg3 deviceIdentifier:(id)arg4 targetArchitecture:(id)arg5 targetSDK:(id)arg6;
- (id)initWithRunDestination:(id)arg1;
@property(readonly) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly) DVTSDK *targetSDK; // @synthesize targetSDK=_targetSDK;

@end

