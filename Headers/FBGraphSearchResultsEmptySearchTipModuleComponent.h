//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBGraphSearchResultsEmptySearchTipModuleComponent : CKCompositeComponent
{
    FBSearchComponentModel *_emptySearchTipsModel;
    FBSearchResultsContext *_context;
}

+ (id)newWithEmptySearchTipsModel:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(retain, nonatomic) FBSearchComponentModel *emptySearchTipsModel; // @synthesize emptySearchTipsModel=_emptySearchTipsModel;
- (void).cxx_destruct;

@end

