//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MNLegacyThreadListFetcherDelegate-Protocol.h"

@class FBUserSession, MNLegacyThreadListFetcher, NSArray, NSString, PAFancyShareSheetAuthenticationManager;
@protocol FBServiceTransactionMutating;

@interface PAFancyMessengerThreadModelFetcher : NSObject <MNLegacyThreadListFetcherDelegate>
{
    BOOL _useCoefficient;
    unsigned int _threadCount;
    FBUserSession *_session;
    NSArray *_cachedMessengerThreadModels;
    MNLegacyThreadListFetcher *_threadListFetcher;
    PAFancyShareSheetAuthenticationManager *_authenticationManager;
    id <FBServiceTransactionMutating> _token;
    CDUnknownBlockType _messengerThreadModelFetcherCompletionBlock;
}

- (void).cxx_destruct;
- (void)didCancelFetchThreads;
- (void)couldNotFetchThreadsWithError:(id)arg1;
- (void)didFetchThreads:(id)arg1;
- (void)_messengerThreadModelsForThreads:(id)arg1 people:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_messengerThreadModelsForContacts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_restoreMessengerItemsFromDiskCache;
- (void)_cacheMessengerThreadModelsToDisk:(id)arg1;
- (void)_loadMessengerCoefficientThreads;
- (void)_loadMessengerInboxThreads;
- (void)fetchMessengerThreadModelsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithThreadCount:(unsigned int)arg1 useCoefficient:(BOOL)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

