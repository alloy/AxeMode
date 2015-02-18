/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEKeyBindingSet.h>

@class NSMutableDictionary;

@interface IDEMenuKeyBindingSet : IDEKeyBindingSet
{
    NSMutableDictionary *_menuKeyBindingForCommandIdentifier;
    NSMutableDictionary *_menuKeyBindingForCombinedIdentifier;
    NSMutableDictionary *_menuKeyBindingsForCommandGroupIdentifier;
    id _keyBindingDidChangeShortcutsNotificationObservingToken;
}

+ (Class)_defaultMenuKeyBindingSetClass;
+ (id)defaultKeyBindingSet;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_appendDebuggingAdditionUIKeyBindingsToMenuKeyBindingSet:(id)arg1;
- (void)_appendKeyBindingsToMenuKeyBindingSet:(id)arg1 menuDefinitionExtension:(id)arg2 group:(id)arg3 groupIdentifier:(id)arg4 parentTitle:(id)arg5;
- (void)_appendKeyBindingsToMenuKeyBindingSet:(id)arg1 menuDefinitionExtensionAttribute:(id)arg2 allowedEditorDocumentIdentifiers:(id)arg3;
- (void)_appendMenuKeyBindingsDictionary:(id)arg1;
- (void)_keyBindingSetDidInsertKeyBinding:(id)arg1;
- (void)_keyBindingSetWillRemoveKeyBinding:(id)arg1;
- (void)activate;
- (id)deltaDictionary;
- (BOOL)getLockedModifierMask:(unsigned long long *)arg1 unlockedModifierMask:(unsigned long long *)arg2 forKeyBinding:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)menuItemForCombinedIdentifier:(id)arg1;
- (id)menuItemForCommandIdentifier:(id)arg1;
- (id)menuKeyBindingForCombinedIdentifier:(id)arg1;
- (id)menuKeyBindingForCommandIdentifier:(id)arg1;
- (id)menuKeyBindingsForCommandGroupIdentifier:(id)arg1;
- (id)prefixedKeyboardShortcuts;
- (void)primitiveInvalidate;
- (void)updateDictionary;

@end

