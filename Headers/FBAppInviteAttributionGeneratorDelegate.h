//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAttributionGeneratorDelegateProtocol-Protocol.h"

@class NSSet, NSString;

@interface FBAppInviteAttributionGeneratorDelegate : NSObject <FBAttributionGeneratorDelegateProtocol>
{
    NSSet *_requestFBIDs;
}

@property(readonly, copy, nonatomic) NSSet *requestFBIDs; // @synthesize requestFBIDs=_requestFBIDs;
- (void).cxx_destruct;
- (void)_applicationRequestDidAcceptWithRequestIDs:(id)arg1 didJustInstall:(BOOL)arg2 userSession:(id)arg3;
- (void)addToLogExtra:(id)arg1;
- (void)attributionDidFailForStoreEntity:(id)arg1 exception:(id)arg2;
- (void)attributionAlreadyHappenedForStoreEntity:(id)arg1 entityLocations:(id)arg2 userSession:(id)arg3;
- (void)attributionDidHappenForStoreEntity:(id)arg1 entityLocations:(id)arg2 pollCount:(int)arg3 userSession:(id)arg4;
@property(readonly) unsigned int hash;
- (BOOL)isEqualToAppInviteAttributionGeneratorDelegate:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppRequestFBIDs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

