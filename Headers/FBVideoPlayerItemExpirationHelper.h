//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;

@interface FBVideoPlayerItemExpirationHelper : NSObject
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (id)_getOEParam:(id)arg1;
- (BOOL)_urlIsExpired:(id)arg1;
- (void)_runGraphQLQueryForVideo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateVideoPlaybackItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateVideoPlayerItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)urlIsExpired:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

