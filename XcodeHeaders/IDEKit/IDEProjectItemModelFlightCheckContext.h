/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEFlightCheckingContext.h"

@class NSString, NSWindow;

@interface IDEProjectItemModelFlightCheckContext : NSObject <IDEFlightCheckingContext>
{
    BOOL _shouldResolveLongRunningFlightChecks;
    id <IDEPortalInfoDelegate> _portalInfoDelegate;
    id <IDEProjectItem> _item;
    NSWindow *_window;
}

- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (id)initWithPortalInfoDelegate:(id)arg1 item:(id)arg2;
@property(readonly, nonatomic) id <IDEProjectItem> item; // @synthesize item=_item;
- (void)performBlockRequiringAccountAndTeamSelection:(id)arg1;
@property(readonly, nonatomic) id <IDEPortalInfoDelegate> portalInfoDelegate; // @synthesize portalInfoDelegate=_portalInfoDelegate;
@property BOOL shouldResolveLongRunningFlightChecks; // @synthesize shouldResolveLongRunningFlightChecks=_shouldResolveLongRunningFlightChecks;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
