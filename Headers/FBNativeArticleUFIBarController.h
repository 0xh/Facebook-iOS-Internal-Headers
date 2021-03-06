//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNativeArticleUFIBarListener-Protocol.h"

@class FBConsistentLookasideCacheObservationHandle, FBMemFeedback, FBNativeArticleUFIBar, FBNativeArticleUFIBarListenerAnnouncer, FBUserSession, NSString;
@protocol FBNativeArticleUFIBarMetrics;

@interface FBNativeArticleUFIBarController : NSObject <FBNativeArticleUFIBarListener>
{
    FBNativeArticleUFIBarListenerAnnouncer *_announcer;
    id <FBNativeArticleUFIBarMetrics> _metrics;
    unsigned int _initialStyle;
    FBNativeArticleUFIBar *_UFIBar;
    FBMemFeedback *_feedback;
    FBUserSession *_session;
    FBConsistentLookasideCacheObservationHandle *_feedbackObservationHandle;
}

- (void).cxx_destruct;
- (void)didTapOnSummaryTextNode;
- (void)didTapOnCommentButtonNode;
- (void)didTapOnLikeButtonNodeWithSelectState:(BOOL)arg1;
- (void)_feedbackDidUpdate:(id)arg1;
@property(readonly, nonatomic) FBNativeArticleUFIBar *UFIBar;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithUFIBarMetrics:(id)arg1 style:(unsigned int)arg2 session:(id)arg3 feedback:(id)arg4;
- (id)renderable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

