//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBAlbumPublicationResponse, FBFeedStatusPostPublicationResponse, FBPhotoMenuUploadPublicationResponse, FBPlatformPublicationResponse, FBPresencePostPublicationResponse, NSString;

@interface FBPublicationResponse : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBFeedStatusPostPublicationResponse *_feedStatusPostResponse_feedStatusPostResponse;
    FBAlbumPublicationResponse *_album_albumResponse;
    FBPlatformPublicationResponse *_platform_platformResponse;
    NSString *_shareResponse_postID;
    FBPhotoMenuUploadPublicationResponse *_photoMenuUploadResponse_photoMenuUploadResponse;
    FBPresencePostPublicationResponse *_nowResponse_presencePostResponse;
}

+ (id)shareResponseWithPostID:(id)arg1;
+ (id)platformWithPlatformResponse:(id)arg1;
+ (id)photoMenuUploadResponseWithPhotoMenuUploadResponse:(id)arg1;
+ (id)nowResponseWithPresencePostResponse:(id)arg1;
+ (id)feedStatusPostResponseWithFeedStatusPostResponse:(id)arg1;
+ (id)albumWithAlbumResponse:(id)arg1;
- (void).cxx_destruct;
- (void)matchFeedStatusPostResponse:(CDUnknownBlockType)arg1 album:(CDUnknownBlockType)arg2 platform:(CDUnknownBlockType)arg3 shareResponse:(CDUnknownBlockType)arg4 photoMenuUploadResponse:(CDUnknownBlockType)arg5 nowResponse:(CDUnknownBlockType)arg6;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

