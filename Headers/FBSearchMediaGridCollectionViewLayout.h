//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class FBSearchMediaGridLayoutManager, NSMutableDictionary;

@interface FBSearchMediaGridCollectionViewLayout : UICollectionViewLayout
{
    BOOL _isPreparing;
    NSMutableDictionary *_layoutInfo;
    NSMutableDictionary *_columnRowOccupancy;
    FBSearchMediaGridLayoutManager *_layoutManager;
}

- (void).cxx_destruct;
- (void)_resetColumnRowOccupancyAndLayout;
- (float)_itemSideSize;
- (unsigned int)_spacingForNumberOfRowsOrColumns:(unsigned int)arg1;
- (float)_headerTotalHeight;
- (float)_yOffsetForSection:(unsigned int)arg1;
- (float)_heightForContentSection:(unsigned int)arg1;
- (float)_heightBeforeIndexPath:(id)arg1;
- (struct CGRect)_frameForFooterItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForFilterItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForHeaderItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForContentItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForContentHeaderAtIndexPath:(id)arg1;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1;
- (unsigned int)_layoutSpacingSize;
- (id)_occupancyInfoForSection:(unsigned int)arg1;
- (unsigned int)_numberOfRowsForSection:(unsigned int)arg1;
- (unsigned int)_numberOfRowsForAllSections;
- (unsigned int)_numberOfColumns;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)_resultsContentSize;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithGridLayoutManager:(id)arg1;

@end

