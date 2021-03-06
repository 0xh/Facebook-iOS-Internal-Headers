//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBFeedStoryGutterActorProviderProtocol-Protocol.h"

@class FBFeedComponentToolbox, NSString;
@protocol FBQueriedActorFieldsProtocol;

@interface FBFeedAggregatedBirthdayStoryComponent : CKCompositeComponent <FBFeedStoryGutterActorProviderProtocol>
{
    id <FBQueriedActorFieldsProtocol> _gutterActor;
    FBFeedComponentToolbox *_toolbox;
    NSString *_storyID;
}

+ (id)newWithStory:(id)arg1 insets:(struct UIEdgeInsets)arg2 toolbox:(id)arg3;
- (void).cxx_destruct;
- (void)seeAllPosts;
- (id)gutterActor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

