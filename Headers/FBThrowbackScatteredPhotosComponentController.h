//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKComponentController.h"

@class FBThrowbackScatteredPhotoPanHelper;

@interface FBThrowbackScatteredPhotosComponentController : CKComponentController
{
    BOOL _hasAppeared;
    FBThrowbackScatteredPhotoPanHelper *_panHelper;
    struct CGSize _centerSizeUsedForLayout;
    vector_fa824bf3 _childCenters;
}

@property(nonatomic) struct CGSize centerSizeUsedForLayout; // @synthesize centerSizeUsedForLayout=_centerSizeUsedForLayout;
@property(nonatomic) vector_fa824bf3 childCenters; // @synthesize childCenters=_childCenters;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetPhotoPositions;
- (void)componentWillAppear;
- (void)componentTreeWillAppear;
- (void)didMount;

@end

