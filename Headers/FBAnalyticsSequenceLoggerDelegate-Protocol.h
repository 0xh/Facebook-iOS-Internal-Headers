//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAnalyticsSequenceLogger, NSDictionary, NSOrderedSet;

@protocol FBAnalyticsSequenceLoggerDelegate <NSObject>
- (BOOL)sequenceLogger:(FBAnalyticsSequenceLogger *)arg1 shouldAutomaticallyStopSequenceForMarkers:(NSOrderedSet *)arg2;

@optional
- (void)sequenceLoggerDidLogSequence:(FBAnalyticsSequenceLogger *)arg1;
- (void (^)(FBAnalyticsPerfLoggerContext *))perfLoggerContextBlockForSequenceLogger:(FBAnalyticsSequenceLogger *)arg1;
- (double)sequenceLogger:(FBAnalyticsSequenceLogger *)arg1 timeIntervalAtIndex:(int)arg2 markers:(NSOrderedSet *)arg3 timestamps:(NSDictionary *)arg4;
- (unsigned int)sequenceLogger:(FBAnalyticsSequenceLogger *)arg1 numberOfTimeIntervalsForMarkers:(NSOrderedSet *)arg2;
- (BOOL)sequenceLogger:(FBAnalyticsSequenceLogger *)arg1 shouldCalculateTimeIntervalsAutomaticallyForMarkers:(NSOrderedSet *)arg2;
- (void)sequenceLogger:(FBAnalyticsSequenceLogger *)arg1 didStopSequenceManuallyStopped:(BOOL)arg2;
@end

