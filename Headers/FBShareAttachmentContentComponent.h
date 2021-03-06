//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBIntentAnalyticsInfo, FBMemFeedStory;

@interface FBShareAttachmentContentComponent : CKCompositeComponent
{
    FBMemFeedStory *_story;
    FBFeedComponentToolbox *_toolbox;
    FBIntentAnalyticsInfo *_analyticsInfo;
}

+ (id)newWithAttachment:(id)arg1 options:(unsigned int)arg2 parentStory:(id)arg3 eventBus:(id)arg4 toolbox:(id)arg5;
@property(readonly, copy, nonatomic) FBIntentAnalyticsInfo *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(readonly, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) FBMemFeedStory *story; // @synthesize story=_story;
- (void).cxx_destruct;

@end

