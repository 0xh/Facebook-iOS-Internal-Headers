//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBFeedComponentToolbox, FBSearchResultsContext, NSString;

@interface FBSearchResultsStorySnippetsComponent : CKCompositeComponent
{
    FBFeedComponentToolbox *_toolbox;
    FBSearchResultsContext *_context;
    NSString *_snippet;
}

+ (id)newWithStoryEdge:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(retain, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(retain, nonatomic) FBFeedComponentToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void).cxx_destruct;

@end

