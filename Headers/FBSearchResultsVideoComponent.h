//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsVideoComponent : CKCompositeComponent
{
    FBSearchComponentModel *_videoEdgeModel;
    FBSearchResultsContext *_context;
    SEL _openPermalinkAction;
}

+ (id)newWithVideoEdgeModel:(id)arg1 context:(id)arg2 thumbnailComponent:(id)arg3 openPermalinkAction:(SEL)arg4;
@property(readonly, nonatomic) SEL openPermalinkAction; // @synthesize openPermalinkAction=_openPermalinkAction;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) FBSearchComponentModel *videoEdgeModel; // @synthesize videoEdgeModel=_videoEdgeModel;
- (void).cxx_destruct;

@end

