/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEScriptingElement : NSObject
{
    id _container;
    id _accessor;
}

- (void).cxx_destruct;
@property(retain) id accessor; // @synthesize accessor=_accessor;
@property(retain) id container; // @synthesize container=_container;
- (id)description;
- (id)newScriptingObjectOfClass:(Class)arg1 forValueForKey:(id)arg2 withContentsValue:(id)arg3 properties:(id)arg4;
- (id)objectSpecifier;
- (id)objectSpecifierAsProperty;
- (id)objectSpecifierByID:(id)arg1;
- (id)objectSpecifierByIndex;
- (id)objectSpecifierByName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScriptingID:(id)arg1;

@end

