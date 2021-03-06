//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemStickerPack, FBUserSession;
@protocol FBServiceTransactionMutating, FBStickerPackMetadataDownloaderDelegate;

@interface FBStickerPackMetadataDownloader : NSObject
{
    FBUserSession *_session;
    FBMemStickerPack *_stickerPack;
    int _requestPriority;
    id <FBStickerPackMetadataDownloaderDelegate> _delegate;
    id <FBServiceTransactionMutating> _networkRequest;
}

- (void).cxx_destruct;
- (void)_setConfigurationObject:(id)arg1;
- (void)_handleDownloadResponse:(id)arg1;
- (void)_handleDownloadError:(id)arg1;
- (void)cancel;
- (void)fetchStickerPackMetadata;
- (id)initWithSession:(id)arg1 stickerPack:(id)arg2 requestPriority:(int)arg3 delegate:(id)arg4;

@end

