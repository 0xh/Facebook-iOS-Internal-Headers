//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBPushRegisterRequestParams, FBPushUnregisterRequestParams, FBUserSession;
@protocol FBPushRegistrationDelegate;

@protocol FBPushRegistrationRequestSender <NSObject>
@property(nonatomic) id <FBPushRegistrationDelegate> delegate;
- (void)sendUnregisterRequestWithParams:(FBPushUnregisterRequestParams *)arg1 session:(FBUserSession *)arg2;
- (void)cancelCurrentRegisterRequest;
- (void)sendRegisterRequestWithParams:(FBPushRegisterRequestParams *)arg1 session:(FBUserSession *)arg2;
@end

