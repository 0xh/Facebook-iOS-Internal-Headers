//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBCommentStreamContainerLayoutDefinition, FBUFICommentLayoutDefinition, FBUFICommentToolbox;

@interface FBCommentReplyComponentContext : NSObject
{
    FBUFICommentToolbox *_toolbox;
    FBCommentStreamContainerLayoutDefinition *_topLevelContainerLayoutDefinition;
    FBUFICommentLayoutDefinition *_topLevelCommentLayoutDefinition;
    SEL _replyToTopLevelCommentAction;
}

@property(readonly, nonatomic) SEL replyToTopLevelCommentAction; // @synthesize replyToTopLevelCommentAction=_replyToTopLevelCommentAction;
@property(readonly, nonatomic) FBUFICommentLayoutDefinition *topLevelCommentLayoutDefinition; // @synthesize topLevelCommentLayoutDefinition=_topLevelCommentLayoutDefinition;
@property(readonly, nonatomic) FBCommentStreamContainerLayoutDefinition *topLevelContainerLayoutDefinition; // @synthesize topLevelContainerLayoutDefinition=_topLevelContainerLayoutDefinition;
@property(readonly, nonatomic) FBUFICommentToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;
- (id)initWithToolbox:(id)arg1 topLevelContainerLayoutDefinition:(id)arg2 topLevelCommentLayoutDefinition:(id)arg3 replyToTopLevelCommentAction:(SEL)arg4;

@end

