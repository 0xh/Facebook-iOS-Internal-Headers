//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBTextAnnotationNode.h"

@class CALayer, POPBasicAnimation, UIImage;

@interface FBAudioAnnotationNode : FBTextAnnotationNode
{
    BOOL _animating;
    BOOL _shouldStop;
    CALayer *_rings[3];
    CALayer *_mask;
    CALayer *_container;
    struct CGSize _iconSize;
    UIImage *_maskImage;
    UIImage *_ringImage;
    POPBasicAnimation *_progressAnimation;
    float _animationProgress;
}

@property(nonatomic) float animationProgress; // @synthesize animationProgress=_animationProgress;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)pop_animationDidApply:(id)arg1;
- (float)_ringOpacityWithProgress:(float)arg1;
- (float)_progressWithDelay:(double)arg1;
- (id)_createProgressAnimationIfNeeded;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_layoutRings;
- (void)layout;
- (void)dealloc;
- (void)didLoad;
- (id)initWithText:(id)arg1 icon:(id)arg2;

@end

