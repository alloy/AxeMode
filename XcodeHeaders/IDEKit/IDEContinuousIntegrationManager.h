/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEContinuousIntegrationManager : NSObject
{
}

+ (id)actionManager;
+ (void)addServerOnHostWindow:(id)arg1 completionBlock:(id)arg2;
+ (void)addServerOnHostWindow:(id)arg1 connectionAddress:(id)arg2 completionBlock:(id)arg3;
+ (void)additionalIntegrationsOnServerForBotNavigable:(id)arg1 completionBlock:(id)arg2;
+ (Class)botIntegrationClass;
+ (Class)botNavigableItemClass;
+ (BOOL)canUserCreateAndDeleteBotsOnServiceForBotOrIntegration:(id)arg1;
+ (BOOL)canUserCreateBotsOnAnyService;
+ (void)cancelIntegration:(id)arg1 withCompletionBlock:(id)arg2;
+ (id)clickableStringForLegacyBotURL:(id)arg1;
+ (void)deleteBot:(id)arg1 workspace:(id)arg2 withCompletionBlock:(id)arg3;
+ (void)deleteIntegration:(id)arg1 withCompletionBlock:(id)arg2;
+ (void)determineUserBotCreationAndDeletionPrivileges;
+ (Class)integrationNavigableItemClass;
+ (BOOL)isIntegrationFinished:(id)arg1;
+ (id)legacyBotNavigablesForLegacyBots:(id)arg1;
+ (Class)legacyNavigableItemClass;
+ (void)loadMoreBotsInBotNavigable:(id)arg1 completionBlock:(id)arg2;
+ (id)logNavigatorHelper;
+ (Class)navigableItemClass;
+ (id)navigableItemForBot:(id)arg1;
+ (id)navigableItemForIntegration:(id)arg1;
+ (BOOL)navigableItemSelection:(id)arg1 allowsAction:(SEL)arg2;
+ (void)performAction:(SEL)arg1 forNavigableItemSelection:(id)arg2 withNavigator:(id)arg3;
+ (id)projectNameInBlueprintForBot:(id)arg1;
+ (Class)serviceClass;
+ (id)serviceManager;
+ (void)showBotEditorForWorkspaceTabController:(id)arg1 bot:(id)arg2 completionBlock:(id)arg3;
+ (void)showBotEditorForWorkspaceTabController:(id)arg1 bot:(id)arg2 editingMode:(long long)arg3 completionBlock:(id)arg4;
+ (int)statusOfIntegration:(id)arg1;
+ (id)titleForNavigableItemSelection:(id)arg1 action:(SEL)arg2;
+ (id)webURLForBot:(id)arg1;
+ (id)webURLForIntegration:(id)arg1;

@end

