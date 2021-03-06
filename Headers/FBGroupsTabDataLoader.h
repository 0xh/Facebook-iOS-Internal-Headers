//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBGroupsTabSectionDataLoaderDelegate-Protocol.h"

@class FBGroupsTabSectionDataLoader, FBUserSession, NSString;
@protocol FBGroupsTabDataLoaderDelegate;

@interface FBGroupsTabDataLoader : NSObject <FBGroupsTabSectionDataLoaderDelegate>
{
    FBUserSession *_session;
    FBGroupsTabSectionDataLoader *_eventsSectionLoader;
    FBGroupsTabSectionDataLoader *_groupsSectionLoader;
    unsigned int _unseenCount;
    BOOL _enableUnseenCount;
    id <FBGroupsTabDataLoaderDelegate> _delegate;
}

@property(nonatomic) BOOL enableUnseenCount; // @synthesize enableUnseenCount=_enableUnseenCount;
@property(nonatomic) __weak id <FBGroupsTabDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didEndDownloadForType:(int)arg2 error:(id)arg3;
- (void)_updateUnseenCount;
- (void)clearUnseenCount;
- (unsigned int)unseenCount;
- (id)_sectionDataLoaderForSection:(int)arg1;
- (id)headerConfigForSection:(int)arg1;
- (id)loadedObjectsForSection:(int)arg1;
- (void)loadMoreObjectsForSection:(int)arg1;
- (BOOL)shouldAutoLoadMoreObjectsForSection:(int)arg1;
- (BOOL)canLoadMoreObjectsForSection:(int)arg1;
- (void)refresh:(int)arg1;
- (void)refresh;
- (void)reload;
- (BOOL)isDownloadingData;
- (void)cancelRequests;
- (BOOL)hasData;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

