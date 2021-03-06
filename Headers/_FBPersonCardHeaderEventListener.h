//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBContextualTimelineHeaderEventListener-Protocol.h"

@class FBPersonCardViewController, NSString;

@interface _FBPersonCardHeaderEventListener : NSObject <FBContextualTimelineHeaderEventListener>
{
    FBPersonCardViewController *_personCardViewController;
}

@property(nonatomic) __weak FBPersonCardViewController *personCardViewController; // @synthesize personCardViewController=_personCardViewController;
- (void).cxx_destruct;
- (void)friendsTabLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 status:(unsigned int)arg3 loggingParams:(id)arg4;
- (void)didTapOnFriendsTabForProfileID:(id)arg1 analyticsUUID:(id)arg2;
- (void)navTilesLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 status:(unsigned int)arg3 loggingParams:(id)arg4;
- (void)contextItemsLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 status:(unsigned int)arg3 loggingParams:(id)arg4;
- (void)coverPhotoLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 isLowRes:(BOOL)arg3 status:(unsigned int)arg4 loggingParams:(id)arg5;
- (void)profilePictureLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 isLowRes:(BOOL)arg3 status:(unsigned int)arg4 loggingParams:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

