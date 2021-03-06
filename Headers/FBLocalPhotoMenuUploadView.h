//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBRichTextView, UIButton, UICollectionView, UIImageView;
@protocol FBLocalPhotoMenuUploadViewDelegate;

@interface FBLocalPhotoMenuUploadView : UIView
{
    UIView *_addPhotoButtonTopDivider;
    UIButton *_addPhotoButton;
    UIImageView *_cameraImageView;
    FBRichTextView *_actionLabel;
    UICollectionView *_collectionView;
    id <FBLocalPhotoMenuUploadViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBLocalPhotoMenuUploadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_didTapButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

