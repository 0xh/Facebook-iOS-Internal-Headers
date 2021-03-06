//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAnalytics, FBAnalyticsPerfLogger, NSString;

@interface FBAnalyticsSpinnerLogger : NSObject
{
    double _spinnerStartTime;
    BOOL _active;
    NSString *_spinnerName;
    NSString *_moduleName;
    NSString *_analyticsUUID;
    FBAnalytics *_analytics;
    FBAnalyticsPerfLogger *_perfLogger;
    unsigned int _currentSpinnerID;
    double _timeElapsed;
}

@property(nonatomic) double timeElapsed; // @synthesize timeElapsed=_timeElapsed;
@property(readonly, nonatomic) unsigned int currentSpinnerID; // @synthesize currentSpinnerID=_currentSpinnerID;
@property(readonly, nonatomic) BOOL active; // @synthesize active=_active;
- (void).cxx_destruct;
- (CDUnknownBlockType)_perfLoggerBlockForResult:(unsigned int)arg1 extraBlock:(CDUnknownBlockType)arg2;
- (void)markAsStartupLoad;
- (void)markNetworkTimeout;
- (void)logSpinnerEvent:(CDUnknownBlockType)arg1 withResult:(unsigned int)arg2 timeInterval:(double)arg3;
- (void)logSpinnerEvent:(CDUnknownBlockType)arg1 withResult:(unsigned int)arg2;
- (void)reset;
- (void)start;
- (id)spinnerNameSpace;
- (id)description;
- (void)dealloc;
- (id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2 analyticsUUID:(id)arg3 analytics:(id)arg4 perfLogger:(id)arg5;
- (id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2 analyticsUUID:(id)arg3;
- (id)initWithSpinnerName:(id)arg1 moduleName:(id)arg2;

@end

