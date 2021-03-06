/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface IDEModule : NSObject
{
    NSString *_name;
    NSDictionary *_docParams;
    NSMutableDictionary *_submodulesByName;
}

- (void).cxx_destruct;
- (id)description;
- (id)documentParameters;
- (id)documentType;
- (id)geniusResult_identifierForGeniusCategory;
- (id)geniusResult_identifierForManualCategory;
- (id)init;
- (id)initWithName:(id)arg1 documentParameters:(id)arg2;
- (BOOL)isLeaf;
- (id)name;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_documentType;
- (id)navigableItem_name;
- (void)setDocumentParameters:(id)arg1;
- (id)submoduleWithName:(id)arg1 documentParameters:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)submodules;

@end

