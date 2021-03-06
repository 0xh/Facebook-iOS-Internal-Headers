//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class FBPaperCommentsCollectionViewMetrics, FBShimmeringTextLayer, NSString, UIView;

@interface FBPaperCommentsCollectionHeaderView : UICollectionReusableView
{
    FBPaperCommentsCollectionViewMetrics *_metrics;
    UIView *_lineView;
    FBShimmeringTextLayer *_titleLayer;
    BOOL _lineInset;
    float _verticalOffset;
}

@property(nonatomic) BOOL lineInset; // @synthesize lineInset=_lineInset;
@property(nonatomic) float verticalOffset; // @synthesize verticalOffset=_verticalOffset;
@property(retain, nonatomic) FBPaperCommentsCollectionViewMetrics *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) float lineAlpha;
@property(nonatomic) BOOL shimmering;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

