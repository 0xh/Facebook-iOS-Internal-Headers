//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponent.h"

@class FBFeedComponentToolbox, FBUFICountComponent;

@interface FBUFICountsComponent : CKComponent
{
    CKComponent *_actionComponent;
    CKComponent *_seenByComponent;
    FBUFICountComponent *_likeCountComponent;
    FBUFICountComponent *_reactionCountComponent;
    FBUFICountComponent *_commentCountComponent;
    FBUFICountComponent *_shareCountComponent;
    FBUFICountComponent *_fallbackComponent;
    struct vector<FBUFICountComponent *, std::__1::allocator<FBUFICountComponent *>> _additionalCountComponents;
    FBFeedComponentToolbox *_toolbox;
}

+ (id)newWithFeedback:(id)arg1 additionalCounts:(const vector_0c920a62 *)arg2 options:(unsigned int)arg3 theme:(id)arg4 suppressedCountTypes:(unsigned int)arg5 layoutIdiom:(unsigned int)arg6 action:(SEL)arg7 toolbox:(id)arg8;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)renderedCounts;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

