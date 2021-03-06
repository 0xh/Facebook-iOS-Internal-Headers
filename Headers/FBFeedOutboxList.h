//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBCollectionViewSectionDataSource-Protocol.h"
#import "FBComposerPublicationStatusEventListener-Protocol.h"
#import "FBFeedOptimisticPostPerfLogging-Protocol.h"
#import "FBFeedOutboxFeedStoryInsertionListener-Protocol.h"
#import "FBFeedOutboxFeedUpdateTrackingDelegate-Protocol.h"
#import "FBPostedStoryLoaderListener-Protocol.h"
#import "FBStreamListener-Protocol.h"
#import "FBTableViewSectionDataSource-Protocol.h"

@class FBCachedBackedOutboxImageCache, FBComposerPublicationStatusEventListenerAnnouncer, FBFeedOptimisticPostPerfLogger, FBFeedOptimisticPostRemovalExperimentContext, FBFeedOutboxAssetImageLoaderListenerAnnouncer, FBFeedOutboxCurrentStoriesListenerAnnouncer, FBFeedOutboxFeedUpdateTracker, FBFeedOutboxListAnalyticsLogger, FBFeedOutboxListBugReportLogger, FBFeedOutboxListDataSource, FBFeedOutboxListDelayScheduler, FBFeedOutboxListErrorPresenter, FBFeedOutboxListLifecycleCoordinator, FBFeedOutboxListLifecycleListenerAnnouncer, FBFeedOutboxListListenerAnnouncer, FBFeedOutboxListPublisherUpdater, FBFeedOutboxListSoundsPlayer, FBFeedOutboxListUpdater, FBFeedOutboxStoryPreviewImageUpdater, FBOutboxPreviewImageAssetLibraryFetcher, FBUserSession, NSString;
@protocol FBCollectionViewMutating, FBFeedOutboxListDataSourceMutator, FBFeedOutboxListDelegate, FBTableViewMutating;

@interface FBFeedOutboxList : NSObject <FBFeedOutboxFeedUpdateTrackingDelegate, FBTableViewSectionDataSource, FBCollectionViewSectionDataSource, FBComposerPublicationStatusEventListener, FBFeedOutboxFeedStoryInsertionListener, FBStreamListener, FBPostedStoryLoaderListener, FBFeedOptimisticPostPerfLogging>
{
    FBFeedOutboxListAnalyticsLogger *_analyticsLogger;
    FBFeedOutboxListBugReportLogger *_bugReportLogger;
    FBFeedOutboxCurrentStoriesListenerAnnouncer *_currentStoriesAnnouncer;
    FBFeedOutboxListDataSource *_dataSource;
    FBFeedOutboxListDelayScheduler *_delayScheduler;
    FBFeedOutboxListErrorPresenter *_errorPresenter;
    FBFeedOutboxFeedUpdateTracker *_feedUpdateTracker;
    FBOutboxPreviewImageAssetLibraryFetcher *_imageAssetFetcher;
    FBCachedBackedOutboxImageCache *_imageCache;
    FBFeedOutboxAssetImageLoaderListenerAnnouncer *_imageLoaderAnnouncer;
    FBFeedOutboxStoryPreviewImageUpdater *_imageUpdater;
    FBFeedOutboxListLifecycleCoordinator *_lifecycleCoordinator;
    FBFeedOutboxListLifecycleListenerAnnouncer *_lifecycleAnnouncer;
    FBFeedOutboxListListenerAnnouncer *_listEventAnnouncer;
    FBFeedOutboxListListenerAnnouncer *_listEventsFilteredByCoordinatorAnnouncer;
    FBFeedOutboxListUpdater *_updater;
    FBFeedOptimisticPostRemovalExperimentContext *_optimisticPostRemovalExperimentContext;
    FBComposerPublicationStatusEventListenerAnnouncer *_publicationAnnouncer;
    FBFeedOutboxListPublisherUpdater *_publisherUpdater;
    FBFeedOutboxListSoundsPlayer *_soundsPlayer;
    FBFeedOptimisticPostPerfLogger *_optimisticPostPerfLogger;
    FBUserSession *_session;
    id <FBTableViewMutating> _tableViewMutator;
    id <FBCollectionViewMutating> _collectionViewMutator;
    id <FBFeedOutboxListDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFeedOutboxListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <FBCollectionViewMutating> collectionViewMutator; // @synthesize collectionViewMutator=_collectionViewMutator;
@property(nonatomic) id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
- (void).cxx_destruct;
- (void)outboxContainerNoLongerVisible;
- (void)markStartForEventWithSourceType:(id)arg1 targetType:(id)arg2;
- (void)startedServerProcessingForUploadedComposerPublication:(id)arg1;
- (void)cannotCancelComposerPublication:(id)arg1;
- (void)canCancelComposerPublication:(id)arg1;
- (void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forComposerPublication:(id)arg3;
- (void)publicationProgressedWithProgress:(float)arg1 forComposerPublication:(id)arg2;
- (void)scheduledPublishingComposerPublication:(id)arg1 atDate:(id)arg2;
- (void)startedWaitingForConnectivityForComposerPublication:(id)arg1;
- (void)retriedPublishingComposerPublication:(id)arg1;
- (void)cancelledPublishingComposerPublication:(id)arg1;
- (void)successfullyPublishedComposerPublication:(id)arg1 response:(id)arg2;
- (void)pausedPublishingComposerPublication:(id)arg1;
- (void)terminallyFailedPublishingComposerPublication:(id)arg1 withError:(id)arg2;
- (void)failedPublishingAndWaitingForRetryForComposerPublication:(id)arg1 withError:(id)arg2;
- (void)failedPublishingComposerPublication:(id)arg1 withError:(id)arg2;
- (void)attemptedPublishingComposerPublication:(id)arg1;
- (void)startedPublishingComposerPublication:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) id <FBFeedOutboxListDataSourceMutator> mutator;
- (void)registerClassWithReuseIdentifier;
- (void)outboxDatasourceDidRefresh;
- (void)outboxDatasourceRemovedStories;
- (void)outboxDatasourceInsertedNewStories;
- (void)outboxDatasourceWillRefresh;
- (void)desiresHeadLoad;
- (void)postedStoryLoaderDidFailLoadingForPublisherData:(id)arg1;
- (void)stream:(id)arg1 didCancelLoading:(unsigned int)arg2 requestAnalyticsUUID:(id)arg3;
- (void)stream:(id)arg1 willStartLoading:(unsigned int)arg2 refreshMode:(unsigned int)arg3 requestAnalyticsUUID:(id)arg4;
- (void)stream:(id)arg1 didFinishLoading:(unsigned int)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4;
- (void)feedWillInsertStoriesWithMutationIdentifiers:(id)arg1;
- (void)dealloc;
- (id)initWithPublisherManager:(id)arg1 alertPresenter:(id)arg2 session:(id)arg3 optimisticPostPerfLogger:(id)arg4;

// Remaining properties
@property(nonatomic, getter=isActive) BOOL active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

