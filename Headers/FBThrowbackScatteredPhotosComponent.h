//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponent.h"

@interface FBThrowbackScatteredPhotosComponent : CKComponent
{
    struct FBThrowbackScatteredPhotosComponentConfiguration _configuration;
    CKComponent *_contentComponent;
    struct vector<FBThrowbackScatteredPhotosComponentChild, std::__1::allocator<FBThrowbackScatteredPhotosComponentChild>> _children;
    BOOL _shouldDisplay;
}

+ (id)newWithImageCount:(unsigned int)arg1 images:(id)arg2 size:(struct CKComponentSize)arg3 configuration:(struct FBThrowbackScatteredPhotosComponentConfiguration)arg4 contentComponent:(id)arg5 toolbox:(id)arg6;
+ (id)initialState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)userDidPan:(id)arg1 gestureRecognizer:(id)arg2;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

