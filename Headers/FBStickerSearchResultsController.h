//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class FBImageDownloader, FBMStickerResourceManager, NSArray, NSString;
@protocol FBStickerSearchResultsControllerDelegate;

@interface FBStickerSearchResultsController : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    FBImageDownloader *_imageDownloader;
    FBMStickerResourceManager *_stickerResourceManager;
    id <FBStickerSearchResultsControllerDelegate> _delegate;
    NSArray *_searchResults;
}

@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) __weak id <FBStickerSearchResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 withSticker:(id)arg2;
- (void)_startDownloadStickerImageForCell:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)initWithImageDownloader:(id)arg1 stickerResourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

