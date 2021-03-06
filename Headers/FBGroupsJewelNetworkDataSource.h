//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBJewelNetworkDataSource-Protocol.h"

@class FBUserSession, NSString;

@interface FBGroupsJewelNetworkDataSource : NSObject <FBJewelNetworkDataSource>
{
    FBUserSession *_session;
    unsigned int unseenCount;
    unsigned int _badgingType;
    BOOL _needsReload;
    unsigned int _unseenCount;
}

@property(nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int unseenCount; // @synthesize unseenCount=_unseenCount;
- (void)cancelAllRequests;
- (void)_downloadData;
- (void)reloadDataWithReason:(int)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

