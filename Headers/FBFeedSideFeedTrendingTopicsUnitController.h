//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBSideFeedUnitController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBFeedSideFeedTrendingTopicsUnitView, FBPopoverActionSheet, NSArray, NSMutableDictionary, NSString, UITableView;

@interface FBFeedSideFeedTrendingTopicsUnitController : FBSideFeedUnitController <UITableViewDataSource, UITableViewDelegate>
{
    FBFeedSideFeedTrendingTopicsUnitView *_trendingTopicsUnitView;
    UITableView *_tableView;
    NSMutableDictionary *_impressionHistory;
    NSMutableDictionary *_clickHistory;
    NSMutableDictionary *_hideHistory;
    NSArray *_validModelEdges;
    int _presentedTopicViewControllersCount;
    BOOL _isInExclusiveMode;
    BOOL _isPreparingToAnimateIntoExclusiveMode;
    BOOL _isJointScrollingEnabled;
    FBPopoverActionSheet *_negativeFeedbackActionSheet;
    unsigned int _sideFeedTrendingTopicsUnitStyle;
}

@property(nonatomic) unsigned int sideFeedTrendingTopicsUnitStyle; // @synthesize sideFeedTrendingTopicsUnitStyle=_sideFeedTrendingTopicsUnitStyle;
- (void).cxx_destruct;
- (void)_hideRowAtIndexPath:(id)arg1;
- (id)_negativeFeedbackButtonItemForIndexPath:(id)arg1;
- (void)_handleNegativeFeedback:(id)arg1;
- (void)_addNegativeFeedbackInteraction;
- (BOOL)validateModel;
- (id)graphQLIDForItemPosition:(unsigned int)arg1;
- (id)trackingStringForItemPosition:(unsigned int)arg1;
- (void)_resetLoggingHistory;
- (id)_topicsModel;
- (int)_numberOfItems;
- (void)relinquishExclusiveMode;
- (void)requestExclusiveMode;
- (void)onTopicFeedClosed;
- (void)onTopicFeedOpened;
- (void)openTopicFeedWithNavigationInfo:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)openTopicFeedForTopic:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getUnitNameForAnalytics;
- (void)dealloc;
- (void)loadView;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

