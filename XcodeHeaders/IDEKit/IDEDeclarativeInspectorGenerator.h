/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEDeclarativeInspectorGenerator : NSObject
{
}

+ (id)_visibilityKeyPathsFromXMLElement:(id)arg1;
+ (void)enumerateTopLevelElements:(id)arg1 boundTo:(id)arg2 block:(id)arg3;
+ (id)generateInspectorInterfaceFromFile:(id)arg1 boundTo:(id)arg2;
+ (id)generateInspectorInterfaceFromXMLElement:(id)arg1 boundTo:(id)arg2;
+ (id)generateInspectorLayoutGroupFromXMLElement:(id)arg1 boundTo:(id)arg2;
+ (id)generateInspectorLayoutGroupFromXMLElement:(id)arg1 boundTo:(id)arg2 withSectionSliverInsets:(BOOL)arg3;
+ (id)generateInspectorSectionFromXMLElement:(id)arg1 boundTo:(id)arg2 withTitle:(id)arg3 withSliverInsets:(BOOL)arg4;
+ (id)inspectorXMLElementsFromIncludeElement:(id)arg1 boundTo:(id)arg2;
+ (id)localizedStringForAttributeNamed:(id)arg1 inXMLElement:(id)arg2 fromInspectorController:(id)arg3;
+ (id)parseInterfaceXMLDocumentFromFile:(id)arg1;
+ (id)rootInspectorXMLElementFromIncludeElement:(id)arg1 boundTo:(id)arg2;
+ (id)sectionHeaderTitleItemWithTitle:(id)arg1;
+ (id)topLevelXMLElementsInReverseOrder:(id)arg1;

@end

