/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IDEExecutionActionType : NSObject
{
    NSString *_identifier;
}

+ (id)actionTypePoint;
+ (id)actionTypeWithIdentifier:(id)arg1 error:(id *)arg2;
+ (BOOL)point:(id)arg1 isSubpointOfPoint:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;

@end

