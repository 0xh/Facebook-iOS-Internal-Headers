//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSessionClassProvidable-Protocol.h"
#import "MNPhotoUploadListener-Protocol.h"

@class MNPhotoImageCache, MNPhotoImageUploadCandidateStore, NSString;

@interface MNPhotoImageUploadResultCacher : NSObject <FBSessionClassProvidable, MNPhotoUploadListener>
{
    MNPhotoImageCache *_imageCache;
    MNPhotoImageUploadCandidateStore *_uploadCandidateStore;
}

- (void).cxx_destruct;
- (void)clearCacheForPhotoViewModel:(id)arg1;
- (void)didCancelPhotoAttachmentUploadWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3;
- (void)willUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3;
- (void)didFailToUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 photoData:(id)arg2 messageOfflineId:(id)arg3 error:(id)arg4;
- (void)didUploadPhotoAttachmentWithProgress:(double)arg1 messageOfflineId:(id)arg2;
- (void)didUploadPhotoAttachmentWithPhotoViewModel:(id)arg1 fbId:(id)arg2 photoData:(id)arg3 messageOfflineId:(id)arg4;
- (void)prepareImageUploadCandidateStoreWithPhotoImage:(id)arg1 cacheKey:(id)arg2;
- (id)generateCacheKeyForImageCandidatePreparation;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithImageCache:(id)arg1 uploadCandidateStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

