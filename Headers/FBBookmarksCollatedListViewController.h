//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBBookmarksViewControllerSelectionProtocol-Protocol.h"

@class FBBookmarksSectionDownloader, FBBookmarksUnreadCountManager, FBLocalizedIndexedCollation, FBScenePath, FBUserSession, NSArray, NSMutableDictionary, NSString, UIActivityIndicatorView;

@interface FBBookmarksCollatedListViewController : UITableViewController <FBAccessibilityInvalidationEventsListener, FBBookmarksViewControllerSelectionProtocol>
{
    BOOL _dataLoaded;
    FBBookmarksSectionDownloader *_downloader;
    FBBookmarksUnreadCountManager *_unreadCountManager;
    FBLocalizedIndexedCollation *_collation;
    FBUserSession *_session;
    FBScenePath *_scenePath;
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
    NSArray *_sectionTitles;
    NSMutableDictionary *_bookmarkUnreadCounts;
    NSMutableDictionary *_clcHandles;
    NSString *_sectionID;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)_didUpdateBookmark:(id)arg1;
- (void)_processDownloadedBookmarks:(id)arg1;
- (id)analyticsModule;
- (void)deselectSelectedRow;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (BOOL)_sectionHasTitle:(int)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)didReceiveAccessibilityInvalidation;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSection:(id)arg1 unreadCountManager:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

