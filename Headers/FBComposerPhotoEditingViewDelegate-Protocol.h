//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerPhotoEditingView;

@protocol FBComposerPhotoEditingViewDelegate <NSObject>
- (void)photoEditingViewDidTapUnifiedGalleryViewButton:(FBComposerPhotoEditingView *)arg1;
- (void)photoEditingView:(FBComposerPhotoEditingView *)arg1 didChangeSliderVisible:(BOOL)arg2 animated:(BOOL)arg3;
- (void)photoEditingViewDidTapTextOnPhotosButton:(FBComposerPhotoEditingView *)arg1;
- (void)photoEditingViewDidTapStickersButton:(FBComposerPhotoEditingView *)arg1;
- (void)photoEditingViewDidTapCropButton:(FBComposerPhotoEditingView *)arg1;
- (void)photoEditingViewDidMoveSlider:(FBComposerPhotoEditingView *)arg1;
- (void)photoEditingViewDidConfirmAutoEnhanceState:(FBComposerPhotoEditingView *)arg1;
- (void)photoEditingViewDidTapAutoEnhanceButton:(FBComposerPhotoEditingView *)arg1;
@end

