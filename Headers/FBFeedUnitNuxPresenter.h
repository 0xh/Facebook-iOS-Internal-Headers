//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNuxPresenter-Protocol.h"
#import "FBPopoverControllerDelegate-Protocol.h"
#import "FBSelfPresentingNux-Protocol.h"

@class FBFeedUnitNuxPresenterListenerAnnouncer, FBPopoverController, FBUserSession, NSArray, NSDictionary, NSString, UIView;
@protocol FBFeedUnitNuxPresenterViewProvider, FBNuxDelegate;

@interface FBFeedUnitNuxPresenter : NSObject <FBPopoverControllerDelegate, FBNuxPresenter, FBSelfPresentingNux>
{
    FBUserSession *_session;
    NSString *_nuxID;
    FBPopoverController *_popoverController;
    BOOL _hasAnimatedAppearance;
    BOOL _isPresenting;
    FBFeedUnitNuxPresenterListenerAnnouncer *_announcer;
    NSString *_message;
    NSString *_body;
    id <FBNuxDelegate> _nuxCoordinator;
    id <FBFeedUnitNuxPresenterViewProvider> _viewProvider;
    UIView *_anchorView;
    UIView *_hostingView;
    NSArray *_triggerIDs;
    CDUnknownBlockType _eligibilityBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType eligibilityBlock; // @synthesize eligibilityBlock=_eligibilityBlock;
@property(readonly, copy, nonatomic) NSArray *triggerIDs; // @synthesize triggerIDs=_triggerIDs;
@property(nonatomic) __weak UIView *hostingView; // @synthesize hostingView=_hostingView;
@property(nonatomic) __weak UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) __weak id <FBFeedUnitNuxPresenterViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) id <FBNuxDelegate> nuxCoordinator; // @synthesize nuxCoordinator=_nuxCoordinator;
- (void).cxx_destruct;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)closeNuxAnimated:(BOOL)arg1;
- (void)showNux;
- (unsigned int)presenterOptions;
- (int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2;
@property(readonly, nonatomic) int nuxType;
- (id)viewControllerForPresentation;
- (id)nuxID;
- (void)hideAnimated:(BOOL)arg1;
- (void)showAnimated:(BOOL)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (BOOL)isPresenting;
- (void)forceCloseNUX;
- (void)positionUpdateWithPoint:(struct CGPoint)arg1 inView:(id)arg2 inCell:(id)arg3;
- (id)initWithSession:(id)arg1 nuxID:(id)arg2 triggerIDs:(id)arg3 message:(id)arg4 body:(id)arg5 eligibilityBlock:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *extraLogData;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *nuxAnalyticsModule;
@property(copy, nonatomic) CDUnknownBlockType onClosedBlock;
@property(readonly) Class superclass;

@end

