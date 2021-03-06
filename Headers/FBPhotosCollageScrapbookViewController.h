//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPhotosCollageInsetsTrackingViewController.h"

#import "FBGraphQLConnectionSyncStoreListener-Protocol.h"
#import "FBPhotosCollageScrapbookDelegate-Protocol.h"

@class FBMemFamilyNonUserMember, FBMemPerson, FBPhotosCollageScrapbookEmptyView, FBUserSession, NSString;
@protocol FBGraphQLConnectionSyncStoreProtocol;

@interface FBPhotosCollageScrapbookViewController : FBPhotosCollageInsetsTrackingViewController <FBGraphQLConnectionSyncStoreListener, FBPhotosCollageScrapbookDelegate>
{
    FBMemFamilyNonUserMember *_familyMember;
    id <FBGraphQLConnectionSyncStoreProtocol> _mediaStore;
    FBUserSession *_session;
    FBMemPerson *_currentUser;
    FBPhotosCollageScrapbookEmptyView *_scrapbookNullStateView;
}

- (void).cxx_destruct;
- (void)_addEmptyScrapbookViewIfNeeded;
- (void)_fetchCurrentUser;
- (void)_didTapEditButton:(id)arg1;
- (void)collectionViewDidScroll;
- (void)didTapLearnMoreButton;
- (void)didTapTagPhotosButton;
- (void)connectionSyncStore:(id)arg1 requestProvider:(id)arg2 didReceiveResponse:(id)arg3 fromCache:(BOOL)arg4;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithMediaStore:(id)arg1 session:(id)arg2 enableImageStreaming:(BOOL)arg3 streamingConfigurator:(CDUnknownBlockType)arg4 referrer:(id)arg5 analyticsModule:(id)arg6;
- (id)init;
- (id)initWithFamilyMemberID:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

