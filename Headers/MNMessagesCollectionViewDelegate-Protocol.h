//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class MNMessagesCollectionViewLayout, NSArray, NSIndexPath, NSString, UICollectionView;
@protocol MNCollectionViewElementAppearanceTransitioning, MNCollectionViewLayoutAttributesTransforming;

@protocol MNMessagesCollectionViewDelegate <UICollectionViewDelegate>
- (id <MNCollectionViewLayoutAttributesTransforming>)messagesCollectionView:(UICollectionView *)arg1 layout:(MNMessagesCollectionViewLayout *)arg2 disappearingTransformerForElementWithCategory:(unsigned int)arg3 kind:(NSString *)arg4 atIndexPath:(NSIndexPath *)arg5;
- (id <MNCollectionViewLayoutAttributesTransforming>)messagesCollectionView:(UICollectionView *)arg1 layout:(MNMessagesCollectionViewLayout *)arg2 appearingTransformerForElementWithCategory:(unsigned int)arg3 kind:(NSString *)arg4 atIndexPath:(NSIndexPath *)arg5;
- (id <MNCollectionViewElementAppearanceTransitioning>)messagesCollectionView:(UICollectionView *)arg1 layout:(MNMessagesCollectionViewLayout *)arg2 appearanceTransitioningForElementWithCategory:(unsigned int)arg3 kind:(NSString *)arg4 atIndexPath:(NSIndexPath *)arg5;
- (NSArray *)messagesCollectionView:(UICollectionView *)arg1 layout:(MNMessagesCollectionViewLayout *)arg2 layoutElementsForItemAtIndexPath:(NSIndexPath *)arg3;
@end

