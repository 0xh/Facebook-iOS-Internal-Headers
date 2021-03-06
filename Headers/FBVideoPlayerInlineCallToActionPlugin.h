//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBVideoPluginView-Protocol.h"

@class FBMemLinkOpenActionLink, FBMemStoryAttachment, NSArray, NSDictionary, NSString, UIButton;
@protocol FBIntentHandler, FBVideoPlaybackController;

@interface FBVideoPlayerInlineCallToActionPlugin : UIView <FBVideoPluginView>
{
    struct CGRect _videoFrame;
    UIButton *_ctaButton;
    NSArray *_trackingCodes;
    id <FBIntentHandler> _intentHandler;
    NSString *_analyticsModule;
    NSDictionary *_linkOpenExtra;
    FBMemStoryAttachment *_attachment;
    FBMemLinkOpenActionLink *_actionLink;
    id <FBVideoPlaybackController> videoController;
}

@property(nonatomic) __weak id <FBVideoPlaybackController> videoController; // @synthesize videoController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)videoPlaybackControllerDidStartPlayback:(id)arg1;
@property(readonly, nonatomic) unsigned int visibilityOptions;
@property(nonatomic) struct CGRect videoFrame;
- (void)_handleCallToActionTapped:(id)arg1;
- (void)_hideCallToActionButton;
- (void)_showCallToActionButton;
- (void)sizeToFit;
- (id)deepCopy;
- (id)initWithFrame:(struct CGRect)arg1 attachment:(id)arg2 trackingCodes:(id)arg3 analyticsModule:(id)arg4 intentHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

