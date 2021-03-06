//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBImageProcessingSubPipe.h"

@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface FBImageProcessingConcurrentPipe : FBImageProcessingSubPipe
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSObject<OS_dispatch_group> *_nonBackgroundableDispatchGroup;
}

+ (id)sharedPipe;
- (void).cxx_destruct;
- (id)_getAndResetNonBackgroundableDispatchGroup;
- (void)waitForOpenNonBackgroundableRequestsToComplete;
- (void)scheduleRequestQueue;
- (void)_dispatchRequest:(id)arg1;
- (id)initWithConcurrency:(unsigned int)arg1;
- (id)initWithDefaultConcurrency;
- (id)init;

@end

