//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBCommentPublishAnalyticsPayload, FBCommentsModelControllerCoordinator, FBGraphQLPagedDownloadRequest, FBGraphQLRequest, FBMemCommentStreamLoadResult, FBStreamAnalytics, NSError, NSString;
@protocol FBNetworkerRequestStatus;

@protocol FBCommentsModelControllerCoordinatorAnalyticsListener <NSObject>
- (void)modelControllerCoordinatorDidFailToPublishComment:(FBCommentsModelControllerCoordinator *)arg1 withPublishTargetID:(NSString *)arg2 error:(NSError *)arg3 analyticsPayload:(FBCommentPublishAnalyticsPayload *)arg4;
- (void)modelControllerCoordinatorDidPublishComment:(FBCommentsModelControllerCoordinator *)arg1 withPublishTargetID:(NSString *)arg2 analyticsPayload:(FBCommentPublishAnalyticsPayload *)arg3;
- (void)modelControllerCoordinator:(FBCommentsModelControllerCoordinator *)arg1 didFinishProcessingStreamResponseWithResult:(FBMemCommentStreamLoadResult *)arg2;
- (void)modelControllerCoordinator:(FBCommentsModelControllerCoordinator *)arg1 didStartProcessingStreamResponseWithAnalytics:(FBStreamAnalytics *)arg2 loadType:(unsigned int)arg3 graphQLRequest:(FBGraphQLRequest *)arg4 downloadRequest:(FBGraphQLPagedDownloadRequest *)arg5 status:(id <FBNetworkerRequestStatus>)arg6;
@end

