//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBFacepileExpandableViewMetrics.h"

@interface FBFacepileShiftableViewMetrics : FBFacepileExpandableViewMetrics
{
    float _headerVerticalPadding;
    struct FBTextMetrics _headerTextMetrics;
}

@property(readonly, nonatomic) struct FBTextMetrics headerTextMetrics; // @synthesize headerTextMetrics=_headerTextMetrics;
@property(readonly, nonatomic) float headerVerticalPadding; // @synthesize headerVerticalPadding=_headerVerticalPadding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithExpandableViewMetrics:(id)arg1 headerVerticalPadding:(float)arg2 headerTextMetrics:(struct FBTextMetrics)arg3;

@end

