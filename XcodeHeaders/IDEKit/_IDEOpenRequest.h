/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEOpenRequest.h"

@class IDEEditorContext, IDEEditorOpenSpecifier, IDEWorkspaceTabController, NSString;

@interface _IDEOpenRequest : NSObject <IDEOpenRequest>
{
    IDEEditorOpenSpecifier *_openSpecifier;
    IDEWorkspaceTabController *_workspaceTabController;
    IDEEditorContext *_editorContext;
    IDEEditorContext *_explicitEditorContext;
    int _eventBehavior;
    int _takeFocus;
    int _requestState;
}

- (void).cxx_destruct;
- (void)_enqueueForEventBehavior:(int)arg1;
- (void)_runIfNecessary;
- (void)cancel;
- (id)initWithIgnore;
- (id)initWithOpenSpecifier:(id)arg1 explicitEditorContext:(id)arg2;
- (id)initWithOpenSpecifier:(id)arg1 workspaceTabController:(id)arg2 editorContext:(id)arg3 eventBehavior:(int)arg4 takeFocus:(int)arg5;
@property int requestState; // @synthesize requestState=_requestState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

