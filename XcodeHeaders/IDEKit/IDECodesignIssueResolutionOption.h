/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTLogAspect, NSString;

@interface IDECodesignIssueResolutionOption : NSObject
{
    BOOL _requiresUserInteraction;
    NSString *_name;
    DVTLogAspect *_logAspect;
}

- (void).cxx_destruct;
- (id)initWithLogAspect:(id)arg1;
- (id)invokeOptionWithWindowOrNil:(id)arg1;
@property(readonly) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) BOOL requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;

@end

