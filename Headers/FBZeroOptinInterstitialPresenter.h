//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBClassProvidable-Protocol.h"
#import "FBNuxPresenter-Protocol.h"
#import "FBZeroNativeOptinInterstitialViewControllerDelegate-Protocol.h"
#import "FBZeroOptinInterstitialViewControllerDelegate-Protocol.h"

@class NSDictionary, NSString, ZRApplicationState, ZRTokenUpdater;
@protocol FBNuxDelegate, FBProvider;

@interface FBZeroOptinInterstitialPresenter : NSObject <FBNuxPresenter, FBZeroOptinInterstitialViewControllerDelegate, FBZeroNativeOptinInterstitialViewControllerDelegate, FBClassProvidable>
{
    BOOL _optinPerformed;
    id <FBNuxDelegate> _nuxCoordinator;
    ZRApplicationState *_applicationState;
    ZRTokenUpdater *_tokenUpdater;
    id <FBProvider> _zeroNativeOptinInterstitialControllerProvider;
}

@property(readonly, nonatomic) id <FBProvider> zeroNativeOptinInterstitialControllerProvider; // @synthesize zeroNativeOptinInterstitialControllerProvider=_zeroNativeOptinInterstitialControllerProvider;
@property(readonly, nonatomic) ZRTokenUpdater *tokenUpdater; // @synthesize tokenUpdater=_tokenUpdater;
@property(readonly, nonatomic) ZRApplicationState *applicationState; // @synthesize applicationState=_applicationState;
@property(readonly, nonatomic) BOOL optinPerformed; // @synthesize optinPerformed=_optinPerformed;
@property(nonatomic) __weak id <FBNuxDelegate> nuxCoordinator; // @synthesize nuxCoordinator=_nuxCoordinator;
- (void).cxx_destruct;
- (void)dismissWithoutAnyChoice;
- (void)dismissWithOptinOrOptoutError:(id)arg1;
- (void)dismissWithSuccessfulOptout;
- (void)dismissWithSuccessfulOptin;
- (void)zeroOptinInterstitialViewController:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)zeroOptinInterstitialViewController:(id)arg1 didDismissWithOptin:(BOOL)arg2;
- (int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2;
- (id)viewControllerForPresentation;
@property(readonly, nonatomic) int nuxType;
- (id)triggerIDs;
- (id)nuxID;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;
- (id)initWithZeroRatingState:(id)arg1 zeroTokenUpdater:(id)arg2 zeroNativeOptinInterstitialControllerProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *extraLogData;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *nuxAnalyticsModule;
@property(copy, nonatomic) CDUnknownBlockType onClosedBlock;
@property(readonly) Class superclass;

@end

