//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBContainerViewController.h"

#import "FBActivitySharingPickerDataSourceDelegate-Protocol.h"
#import "FBComposerToolTipCoordinatorDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBActivitySharingActivityPickerDataSource, FBActivitySharingComposition, FBActivitySharingFlowManager, FBActivitySharingPeoplePickerDataSource, FBActivitySharingPlacePickerDataSource, FBActivitySharingSearchBarExperimentContext, FBActivitySharingTableViewCellFactory, FBActivitySuggestionManager, FBComposerToolTipCoordinator, FBTableViewAggregatedDataSource, FBUserSession, NSString, NSTimer, UITableView;
@protocol FBActivitySharingViewControllerDelegate;

@interface FBActivitySharingViewController : FBContainerViewController <UITableViewDelegate, FBActivitySharingPickerDataSourceDelegate, FBComposerToolTipCoordinatorDelegate>
{
    FBUserSession *_session;
    UITableView *_tableView;
    FBTableViewAggregatedDataSource *_aggregatedDataSource;
    FBActivitySharingPlacePickerDataSource *_placePickerDataSource;
    FBActivitySharingActivityPickerDataSource *_activityPickerDataSource;
    FBActivitySharingPeoplePickerDataSource *_peoplePickerDataSource;
    FBActivitySharingTableViewCellFactory *_cellFactory;
    int _entryPoint;
    BOOL _needsToAdjustTableRowHeight;
    FBActivitySuggestionManager *_activitySuggestionManager;
    FBComposerToolTipCoordinator *_toolTipCoordinator;
    FBActivitySharingSearchBarExperimentContext *_searchBarExperiment;
    BOOL _shouldHideNextButton;
    id <FBActivitySharingViewControllerDelegate> _delegate;
    FBActivitySharingFlowManager *_flowManager;
    FBActivitySharingComposition *_composition;
    NSTimer *_navigateToComposerTimer;
}

@property(retain, nonatomic) NSTimer *navigateToComposerTimer; // @synthesize navigateToComposerTimer=_navigateToComposerTimer;
@property(retain, nonatomic) FBActivitySharingComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) FBActivitySharingFlowManager *flowManager; // @synthesize flowManager=_flowManager;
@property(nonatomic) __weak id <FBActivitySharingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)composerToolTipCoordinator:(id)arg1 canDisplayTooltip:(id)arg2;
- (void)_showTooltipWithIdentifier:(id)arg1 nuxBody:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)fb_showNavigationJewels;
- (BOOL)fb_showBackArrowButton;
- (void)animateDeactiveDataSource:(id)arg1 activateDataSource:(id)arg2;
- (void)animateDeactiveDataSource:(id)arg1 unhideDataSource:(id)arg2;
- (void)animateActiveDataSource:(id)arg1 hideDataSource:(id)arg2;
- (void)_didTapNext;
- (void)_didTapNextFromTimer:(id)arg1;
- (void)_didTapCancel;
- (id)_defaultCancelBarButtonItem;
- (void)dataSourceDidNavigateToController:(id)arg1 title:(id)arg2 leftBarButtonItem:(id)arg3;
- (void)dataSourceSearchBarDidAppear:(id)arg1;
- (BOOL)dataSourceHasTriggeredFlow:(id)arg1;
- (void)dataSource:(id)arg1 willDismissController:(id)arg2;
- (void)dataSource:(id)arg1 willPresentController:(id)arg2;
- (void)dataSourceDidSelect:(id)arg1;
- (void)dataSourceDidActivate:(id)arg1;
- (void)dataSourceWillDisplay:(id)arg1 inContainerCell:(id)arg2 atIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithSession:(id)arg1 entryPoint:(int)arg2 composition:(id)arg3 bootstrapper:(id)arg4 activitySuggestionManager:(id)arg5 nearbyFetcher:(id)arg6 prefetchedActivityController:(id)arg7;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

