//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPlaylistDownloader, NSData, NSError;

@protocol FBPlaylistDownloaderDelegate <NSObject>
- (void)playlistDownloader:(FBPlaylistDownloader *)arg1 didFailWithError:(NSError *)arg2 respondFallback:(BOOL)arg3;
- (void)playlistDownloader:(FBPlaylistDownloader *)arg1 didFinishWithPlaylist:(NSData *)arg2 cacheAllowed:(BOOL)arg3;
- (void)playlistDownloader:(FBPlaylistDownloader *)arg1 didReceiveData:(NSData *)arg2;
@end

