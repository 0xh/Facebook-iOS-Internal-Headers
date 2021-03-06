//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBPhotoComponent, FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsPhotoComponent : CKCompositeComponent
{
    FBSearchResultsContext *_context;
    FBSearchComponentModel *_edgeModel;
    FBPhotoComponent *_photoComponent;
}

+ (id)newWithPhotoEdgeModel:(id)arg1 size:(struct CKComponentSize)arg2 context:(id)arg3;
@property(readonly, nonatomic) FBPhotoComponent *photoComponent; // @synthesize photoComponent=_photoComponent;
@property(readonly, nonatomic) FBSearchComponentModel *edgeModel; // @synthesize edgeModel=_edgeModel;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didTap:(id)arg1;

@end

