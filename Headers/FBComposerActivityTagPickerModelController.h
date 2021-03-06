//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBInvalidating-Protocol.h"
#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBGraphQLDownloadRequest, FBUserSession, NSMutableOrderedSet, NSString;
@protocol FBComposerActivityTagPickerModelControllerDelegate;

@interface FBComposerActivityTagPickerModelController : NSObject <FBNetworkerRequestDelegate, FBInvalidating>
{
    NSMutableOrderedSet *_activities;
    NSMutableOrderedSet *_filteredActivities;
    FBGraphQLDownloadRequest *_downloadRequest;
    BOOL _invalidated;
    BOOL _lastResultsFromCache;
    BOOL _shouldShowAttending;
    FBUserSession *_session;
    id <FBComposerActivityTagPickerModelControllerDelegate> _delegate;
}

@property(nonatomic) BOOL shouldShowAttending; // @synthesize shouldShowAttending=_shouldShowAttending;
@property(readonly, nonatomic) BOOL lastResultsFromCache; // @synthesize lastResultsFromCache=_lastResultsFromCache;
@property(nonatomic) __weak id <FBComposerActivityTagPickerModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)updateVisibleTaggableActivitiesWithQuery:(id)arg1;
- (BOOL)_shouldShowTaggableActivities:(id)arg1;
- (id)objectInTaggableActivitiesAtIndex:(unsigned int)arg1;
- (unsigned int)countOfTaggableActivities;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)_setActivitiesFromMemModelResponse:(id)arg1 cached:(BOOL)arg2;
- (id)initWithSession:(id)arg1 isPrefetch:(BOOL)arg2 selectedPlace:(id)arg3 actorFBID:(id)arg4;
- (id)initWithSession:(id)arg1 isPrefetch:(BOOL)arg2 actorFBID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

