//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;

@interface FBDBLCheckPasswordRequest : FBNetworkerRequest
{
    NSString *_accountID;
    NSString *_password;
}

+ (float)networkTimeoutInSec;
- (void).cxx_destruct;
- (BOOL)allowRetry;
- (id)networkRequest;
- (id)init;
- (id)initWithAccountID:(id)arg1 password:(id)arg2 callbackPerformer:(id)arg3;

@end

