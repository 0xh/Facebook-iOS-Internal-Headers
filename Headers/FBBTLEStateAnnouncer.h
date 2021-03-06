//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"

@class CBCentralManager, FBBTLEStateListenerAnnouncer, FBBTLEStateTransition, NSString;
@protocol OS_dispatch_queue;

@interface FBBTLEStateAnnouncer : NSObject <CBCentralManagerDelegate>
{
    FBBTLEStateListenerAnnouncer *_announcer;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_centralManagerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    FBBTLEStateTransition *_state;
}

+ (BOOL)isPassiveStateDetectionAvailable;
+ (id)sharedAnnouncer;
- (void).cxx_destruct;
- (void)flushAnnouncementQueue;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)updateWithCentralState:(int)arg1;
- (void)removeSubscription:(id)arg1;
- (id)addSubscription:(id)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoring;
- (id)initWithCentralManagerQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

