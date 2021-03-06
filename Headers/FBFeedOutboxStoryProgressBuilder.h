//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBFeedOutboxStoryProgressBuilder : NSObject
{
    unsigned int _state;
    BOOL _shouldNotifyOfProgressCompletion;
    NSString *_controlTitle;
    float _destinationProgress;
    BOOL _shouldForceStartProgress;
    float _startProgress;
    double _durationOfProgressAnimation;
    double _durationOfTransitionBetweenStates;
}

+ (id)feedOutboxStoryProgressFromExistingFeedOutboxStoryProgress:(id)arg1;
+ (id)feedOutboxStoryProgress;
- (void).cxx_destruct;
- (id)withDurationOfTransitionBetweenStates:(double)arg1;
- (id)withDurationOfProgressAnimation:(double)arg1;
- (id)withStartProgress:(float)arg1;
- (id)withShouldForceStartProgress:(BOOL)arg1;
- (id)withDestinationProgress:(float)arg1;
- (id)withControlTitle:(id)arg1;
- (id)withShouldNotifyOfProgressCompletion:(BOOL)arg1;
- (id)withState:(unsigned int)arg1;
- (id)build;

@end

