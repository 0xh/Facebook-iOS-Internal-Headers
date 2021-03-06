//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBApplication.h"

#import "FBZeroRatedApplicationProtocol-Protocol.h"
#import "ZRURLCheckerDelegate-Protocol.h"

@class FBGLog, NSString, ZRURLChecker;

@interface FBWildeApplication : FBApplication <ZRURLCheckerDelegate, FBZeroRatedApplicationProtocol>
{
    ZRURLChecker *_urlChecker;
    FBGLog *_fbglog;
}

+ (id)fencePrefKeyForURL:(id)arg1;
+ (void)setApplicationViewCoordinatorClass:(Class)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)setupFBGLog;
- (void)_disableLigerChanged;
- (BOOL)fb_ligerIsEnabled;
- (void)fb_ligerInitWithSession:(id)arg1;
- (id)fb_webViewLinkHandlerForUserSession:(id)arg1;
- (BOOL)urlChecker:(id)arg1 didVerifyCanOpenURL:(id)arg2;
- (BOOL)openURL:(id)arg1 withZRTariffedUxSentry:(id)arg2;
- (void)fb_networkerExperimentsInitWithSession:(id)arg1;
- (id)fb_startupSceneTagWhitelist;
- (id)fb_uiapplicationSendEventListeners;
- (void)fb_configureDataModelInfra:(id)arg1;
- (void)fb_configureGraphQL:(id)arg1;
- (void)fb_configureDefaultGraphQLParameters;
- (BOOL)fb_shouldUseInterstitialPushRegistration;
- (id)fb_overrideLogoutTitleForSession:(id)arg1;
- (void)fb_setFeedStreamingRefreshInterval:(double)arg1 withSession:(id)arg2;
- (id)fb_internalSettingsManagerWithSessionController:(id)arg1 applicationWindow:(id)arg2;
- (id)fb_initialModuleID;
- (Class)fb_windowClass;
- (Class)fb_applicationViewCoordinatorClass;
- (id)fb_deviceBasedSettingsAction;
- (id)fb_deviceBasedAccountsProvider;
- (id)fb_newAuthenticationView;
- (id)fb_checkpointActionWithNetworkConfiguration:(id)arg1;
- (id)fb_signupActionForSession:(id)arg1;
- (id)fb_appServicesForSession:(id)arg1;
- (id)fb_URLProtocols;
- (id)fb_providerModulesWithSession:(id)arg1 sessionScope:(id)arg2;
- (BOOL)fb_allowDelayingServices;
- (id)fb_globalProviderModulesWithSessionScope:(id)arg1;
- (BOOL)openURL:(id)arg1;
- (void)dealloc;
- (id)initWithExceptionHandler:(id)arg1 safeModeChecker:(id)arg2 keySourceFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

