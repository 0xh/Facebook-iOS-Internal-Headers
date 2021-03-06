//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNativeAppModule.h"

#import "FBNuxProvider-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class FBAnimatedGIFsInFeedExperimentContext, FBFeedOptimisticPostRemovalController, FBFeedPadRedesignsExperimentContext, FBFeedReplaceBumpedAdPositionContoller, FBInstagramPhotosFromFriendsFeedUnitInvalidationController, FBMemAdInvalidationController, FBPadFeedInlinePublisherBarExperimentContext, FBPadInvalidationController, FBSideFeedJointScrollingExperimentContext, FBTopicFeedsContainerViewController, FBTopicFeedsExperimentContext, NSMutableArray, NSString, UIViewController;
@protocol FBFeedConfigProtocol, FBSideFeedConfiguration;

@interface FBFeedModule : FBNativeAppModule <UIActionSheetDelegate, FBNuxProvider>
{
    FBMemAdInvalidationController *_memAdInvalidationController;
    FBFeedReplaceBumpedAdPositionContoller *_replaceBumpedAdPositionController;
    FBPadInvalidationController *_padInvalidationController;
    FBInstagramPhotosFromFriendsFeedUnitInvalidationController *_instagramPhotoUnitInvalidationController;
    FBFeedOptimisticPostRemovalController *_optimisticPostRemovalController;
    FBTopicFeedsContainerViewController *_topicFeedsViewController;
    UIViewController *_newsFeedViewController;
    int _currentFeedType;
    FBFeedPadRedesignsExperimentContext *_padRedesignsExperimentContext;
    FBAnimatedGIFsInFeedExperimentContext *_animatedGifsInFeedExperimentContext;
    FBPadFeedInlinePublisherBarExperimentContext *_padFeedInlinePublisherBarExperimentContext;
    FBSideFeedJointScrollingExperimentContext *_sideFeedJointScrollingExperimentContext;
    FBTopicFeedsExperimentContext *_topicFeedsExperimentContext;
    NSMutableArray *_remindersSubUnitProviders;
    id <FBFeedConfigProtocol> _feedConfig;
    id <FBSideFeedConfiguration> _sideFeedConfigurationForNewsFeed;
    int _publisherBarStyleForNewsFeed;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)viewControllerForSoundSettings;
- (id)viewControllerForAutoplaySettings;
- (id)viewControllerForVideoAndPhotoSettings;
- (id)nuxPresenters;
- (void)prepareForApplicationLaunch;
- (BOOL)shouldClearBookmarkCountOnTap;
- (id)supportedKeys;
- (id)viewControllerForMenuItem:(id)arg1;
- (id)URLSegues;
- (id)viewControllerForPermalinkForStory:(id)arg1 graphQLID:(id)arg2 legacyApiPostId:(id)arg3 commentID:(id)arg4 viewerFBID:(id)arg5 notificationsLoggingContext:(id)arg6 parentTrackingCodes:(id)arg7 fallbackURL:(id)arg8;
- (id)storyViewControllerForLegacyApiPostId:(id)arg1 graphQLID:(id)arg2 fallbackURL:(id)arg3 focusedCommentID:(id)arg4 viewerFBID:(id)arg5 notificationsLoggingContext:(id)arg6;
- (id)defaultMenuItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)menuItemDidTapGear:(id)arg1 presentingView:(id)arg2;
- (BOOL)menuItemShouldShowGear:(id)arg1;
- (id)services;
- (id)sideFeedRemindersSubUnitControllersFromProviders;
- (void)registerSideFeedRemindersSubUnitProvider:(id)arg1;
- (id)ID;
- (id)_viewControllerForNewsFeedWithFeedType:(int)arg1;
- (id)viewControllerForNewsFeed;
- (id)viewControllerForTopicFeeds;
- (id)viewControllerForFeedModule;
- (void)dealloc;
- (id)initWithSession:(id)arg1 providerMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

