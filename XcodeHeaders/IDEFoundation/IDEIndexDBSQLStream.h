/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEIndexDBConnection, IDEIndexDatabase;

@interface IDEIndexDBSQLStream : NSObject
{
}

@property(readonly, nonatomic) IDEIndexDatabase *database;
@property(readonly, nonatomic) IDEIndexDBConnection *dbConnection;
- (void)doBlock:(id)arg1;
- (void)doSQL1:(id)arg1 withBindings:(id)arg2;
- (void)doSQL:(id)arg1;
- (id)newTransaction;
- (void)willSubmitTransaction:(id)arg1;

@end
