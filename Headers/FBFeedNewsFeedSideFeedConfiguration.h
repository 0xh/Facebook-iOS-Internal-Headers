//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSideFeedConfiguration-Protocol.h"

@class FBChatListSideFeedUnitController, FBFeedSideFeedNUXPresenter, FBSideFeedChatUnitController, FBUserSession, MNOnlineStatusManager, NSArray, NSString;
@protocol FBContactsSearch;

@interface FBFeedNewsFeedSideFeedConfiguration : NSObject <FBSideFeedConfiguration>
{
    FBUserSession *_session;
    id <FBContactsSearch> _contactsSearch;
    MNOnlineStatusManager *_onlineStatusManager;
    FBChatListSideFeedUnitController *_chatListUnitController;
    FBSideFeedChatUnitController *_chatUnitController;
    FBFeedSideFeedNUXPresenter *_nuxPresenter;
    BOOL _isMessengerModuleStartupComplete;
    float _width;
    NSArray *_remindersSubUnitControllers;
}

- (void).cxx_destruct;
- (BOOL)canBeUsedWithViewController:(id)arg1;
- (id)_groupsUnitControllerFromModel:(id)arg1;
- (id)_nuxUnitController;
- (unsigned int)_indexOfChatUnitControllerInUnitControllers:(id)arg1;
- (id)_chatUnitController;
- (id)_unitControllerFromNode:(id)arg1 pymkPymlExperimentContext:(id)arg2 nativeVideosExperimentContext:(id)arg3;
- (id)unitControllersFromData:(id)arg1;
- (id)graphQLQueries;
- (void)dealloc;
- (id)initWithSession:(id)arg1 contactsSearch:(id)arg2 onlineStatusManager:(id)arg3 sideFeedWidth:(float)arg4 remindersSubUnitControllers:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

