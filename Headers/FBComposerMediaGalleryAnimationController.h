//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UICollectionViewCell, UIImageView;

@interface FBComposerMediaGalleryAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    struct CGRect _animationFrame;
    NSString *_faceBoxID;
    BOOL _inUnifiedMediaGalleryExperiment;
    UICollectionViewCell *_transitioningBackToCell;
    struct CGRect _transitioningBackToFrame;
    UIImageView *_transitionImageViewToUseWhenReturning;
    UIImageView *_transitionImageView;
}

@property(retain, nonatomic) UIImageView *transitionImageView; // @synthesize transitionImageView=_transitionImageView;
- (void).cxx_destruct;
- (void)_performDismissalTransition:(id)arg1;
- (void)_performPresentationTransition:(id)arg1;
- (void)prepareForDismissalAnimationWithCellEndFrame:(struct CGRect)arg1 cell:(id)arg2 animationFrame:(struct CGRect)arg3 transitionImageViewToUse:(id)arg4 inUnifiedMediaGalleryExperiment:(BOOL)arg5;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithFaceBoxID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

