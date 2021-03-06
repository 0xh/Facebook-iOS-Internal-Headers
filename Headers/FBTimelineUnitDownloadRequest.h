//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLPagedDownloadRequest.h"

@class NSNumber, NSString;

@interface FBTimelineUnitDownloadRequest : FBGraphQLPagedDownloadRequest
{
    BOOL _expandedQuery;
    NSString *_loadIdentifier;
    int _feedType;
    NSNumber *_maxTimelineUnits;
}

@property(readonly, copy, nonatomic) NSNumber *maxTimelineUnits; // @synthesize maxTimelineUnits=_maxTimelineUnits;
@property(readonly, nonatomic) BOOL expandedQuery; // @synthesize expandedQuery=_expandedQuery;
@property(readonly, nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(readonly, copy, nonatomic) NSString *loadIdentifier; // @synthesize loadIdentifier=_loadIdentifier;
- (void).cxx_destruct;
- (id)audienceFilter;
- (id)analyticsUUID;
- (id)queryName;
- (id)newQueryWithCursor:(id)arg1;
- (id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 loadIdentifier:(id)arg3 feedType:(int)arg4 maxTimelineUnits:(id)arg5 expandedQuery:(BOOL)arg6;

@end

