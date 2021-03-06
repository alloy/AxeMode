/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEEditor.h>

#import "DVTReplacementViewDelegate.h"

@class DVTObservingToken, DVTReplacementView, NSArray, NSString;

@interface IDELogAndTestsEditor : IDEEditor <DVTReplacementViewDelegate>
{
    DVTObservingToken *_logTestsViewControllerDocLocObserver;
    DVTObservingToken *_logEditorDocLocObserver;
    NSArray *_currentSelectedDocumentLocations;
    DVTReplacementView *_replacementView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (long long)version;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)installLogEditor;
- (void)installTestsViewController;
- (void)loadView;
- (id)logEditor;
- (id)logTestsViewController;
- (void)primitiveInvalidate;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
- (void)takeFocus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

