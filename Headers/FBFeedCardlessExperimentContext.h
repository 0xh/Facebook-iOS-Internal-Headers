//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBFeedCardlessExperimentContext : FBExperimentContext
{
    BOOL _mediaBorderEnabled;
    BOOL _enabled;
    BOOL _flushMediaForAttachedStory;
    BOOL _redesignEnabled;
    BOOL _redesignFlushMediaForAttachedStory;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(nonatomic) BOOL redesignFlushMediaForAttachedStory; // @synthesize redesignFlushMediaForAttachedStory=_redesignFlushMediaForAttachedStory;
@property(nonatomic) BOOL redesignEnabled; // @synthesize redesignEnabled=_redesignEnabled;
@property(nonatomic) BOOL flushMediaForAttachedStory; // @synthesize flushMediaForAttachedStory=_flushMediaForAttachedStory;
- (BOOL)isMediaBorderEnabled;
@property(readonly, nonatomic) BOOL enabled; // @synthesize enabled=_enabled;

@end

