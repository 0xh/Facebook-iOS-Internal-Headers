//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFeedImpressionEdgeViewState, FBFeedSampledImpressionController;

@protocol FBFeedSampledImpressionControllerDelegate <NSObject>
- (void)sampledImpressionController:(FBFeedSampledImpressionController *)arg1 activeVisibleEdgeForTwoTicks:(FBFeedImpressionEdgeViewState *)arg2;
- (void)sampledImpressionController:(FBFeedSampledImpressionController *)arg1 confirmedEdgeStateForLogging:(FBFeedImpressionEdgeViewState *)arg2 duration:(double)arg3 maxHeight:(float)arg4;
@end

