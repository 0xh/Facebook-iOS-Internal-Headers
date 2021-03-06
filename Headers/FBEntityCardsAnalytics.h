//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSArray, NSDictionary, NSMapTable, NSString;

@interface FBEntityCardsAnalytics : NSObject
{
    FBUserSession *_session;
    NSDictionary *_loggingParams;
    NSMapTable *_moduleLoggers;
    NSArray *_allPerfEvents;
}

+ (id)_tagFromLoggingParams:(id)arg1;
+ (id)analyticsModuleForFrameRatePerfForDisplaySurface:(id)arg1;
- (void).cxx_destruct;
- (id)_mergeLoggingParameters:(id)arg1;
- (void)_cancelAllPerfEvents;
- (void)_processPerfEvents:(id)arg1 isStartEvent:(BOOL)arg2 result:(unsigned int)arg3 params:(id)arg4;
- (void)_logAnalyticsEvent:(id)arg1 moduleName:(id)arg2 params:(id)arg3;
- (id)loggerForModule:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sourceID;
@property(readonly, copy, nonatomic) NSString *displaySurface;
@property(readonly, copy, nonatomic) NSString *instanceID;
- (id)initWithSession:(id)arg1 displaySurface:(id)arg2 loggingParameters:(id)arg3;

@end

