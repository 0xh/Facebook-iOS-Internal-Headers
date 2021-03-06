//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox;
@protocol FBQueriedFeedUnitFieldsProtocol><FBHideable;

@interface FBFeedNegativeFeedbackComponent : CKCompositeComponent
{
    BOOL _hideAutomatically;
    BOOL _hidden;
    id <FBQueriedFeedUnitFieldsProtocol><FBHideable> _unit;
    FBFeedComponentToolbox *_toolbox;
}

+ (id)newWithUnit:(id)arg1 hideAutomatically:(BOOL)arg2 toolbox:(id)arg3;
+ (id)initialState;
@property(readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) BOOL hideAutomatically; // @synthesize hideAutomatically=_hideAutomatically;
@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) id <FBQueriedFeedUnitFieldsProtocol><FBHideable> unit; // @synthesize unit=_unit;
- (void).cxx_destruct;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;

@end

