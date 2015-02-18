/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "IDEAlertEvent.h"

@class IDEKeyboardShortcut;

@interface IDECustomAlertEvent : IDEAlertEvent
{
    IDEKeyboardShortcut *_keyboardShortcut;
}

+ (id)createNewEvent;
+ (id)customAlertEventForIdentifier:(id)arg1;
+ (id)customAlertEvents;
+ (void)initialize;
- (void).cxx_destruct;
- (id)alertDefaults;
- (void)changeKeyboardShortcut:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithDefaults:(id)arg1;
- (id)keyBinding;
@property(retain, nonatomic) IDEKeyboardShortcut *keyboardShortcut; // @synthesize keyboardShortcut=_keyboardShortcut;
- (id)propertyList;
- (void)remove;
- (void)saveToUserDefaults;

@end

