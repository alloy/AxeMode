/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface IDECodesignIssueResolutionDescription : NSObject
{
    NSArray *_resolutionOptions;
    NSString *_title;
    NSString *_message;
}

- (void).cxx_destruct;
- (id)errorRepresentation;
- (id)errorRepresentationWithCancel:(BOOL)arg1;
- (id)initWithResolutionOptions:(id)arg1 title:(id)arg2 message:(id)arg3;
@property(readonly) NSString *message; // @synthesize message=_message;
@property(readonly) NSArray *resolutionOptions; // @synthesize resolutionOptions=_resolutionOptions;
@property(readonly) NSString *title; // @synthesize title=_title;

@end

