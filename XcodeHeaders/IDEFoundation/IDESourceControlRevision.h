/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString;

@interface IDESourceControlRevision : NSObject
{
    NSString *_revision;
    NSString *_author;
    NSDate *_date;
    NSString *_message;
    BOOL _isHEAD;
    BOOL _isBASE;
    BOOL _isCurrent;
}

+ (id)inMemoryRevision;
+ (id)keyPathsForValuesAffectingLongRevisionString;
+ (id)localRevision;
- (void).cxx_destruct;
@property(readonly) NSString *author; // @synthesize author=_author;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (id)description;
- (unsigned long long)hash;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithRevision:(id)arg1 author:(id)arg2 date:(id)arg3 message:(id)arg4;
@property BOOL isBASE; // @synthesize isBASE=_isBASE;
@property BOOL isCurrent; // @synthesize isCurrent=_isCurrent;
- (BOOL)isEqual:(id)arg1;
@property BOOL isHEAD; // @synthesize isHEAD=_isHEAD;
@property(readonly) NSString *longRevisionString;
@property(readonly) NSString *message; // @synthesize message=_message;
@property(readonly) NSString *revision; // @synthesize revision=_revision;

@end

