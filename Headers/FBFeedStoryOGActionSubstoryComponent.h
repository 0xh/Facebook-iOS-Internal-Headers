//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBFeedComponentToolbox, FBMemFeedStory, NSArray;

@interface FBFeedStoryOGActionSubstoryComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBMemFeedStory *_story;
    FBFeedComponentToolbox *_toolbox;
    NSArray *_parentTrackingCodes;
    NSArray *_trackingCodes;
    NSArray *_trackingNodes;
}

+ (id)newWithStory:(id)arg1 toolbox:(id)arg2;
- (void).cxx_destruct;
- (void)didTapStoryContent:(id)arg1;

@end

