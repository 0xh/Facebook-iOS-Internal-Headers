//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBStarRatingsQuiesenceTrigger, FBStarRatingsUserData;
@protocol FBStarRatingsTriggering;

@protocol FBStarRatingsQuiesenceTriggerDelegateProtocol <NSObject>
- (void)displayTrigger:(id <FBStarRatingsTriggering>)arg1 didChangeUserData:(FBStarRatingsUserData *)arg2;
- (FBStarRatingsUserData *)latestUserData;
- (void)displayTrigger:(id <FBStarRatingsTriggering>)arg1 didTriggerWithUserData:(FBStarRatingsUserData *)arg2;
- (BOOL)displayTriggerCanDisplay:(FBStarRatingsQuiesenceTrigger *)arg1;
@end

