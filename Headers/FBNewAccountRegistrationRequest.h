//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class FBNewAccountRegistrationData, NSString;

@interface FBNewAccountRegistrationRequest : FBNetworkerRequest
{
    FBNewAccountRegistrationData *_registrationData;
    NSString *_formattedPhoneNumber;
}

@property(copy, nonatomic) NSString *formattedPhoneNumber; // @synthesize formattedPhoneNumber=_formattedPhoneNumber;
@property(retain, nonatomic) FBNewAccountRegistrationData *registrationData; // @synthesize registrationData=_registrationData;
- (void).cxx_destruct;
- (BOOL)allowRetry;
- (id)networkRequest;
- (id)init;
- (id)initWithRegistrationData:(id)arg1;

@end

