//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBShimmeringView, NSArray, UIImageView, UIView;

@interface FBNearbyPlacesNearbyCardInProgressHugeCell : UITableViewCell
{
    UIView *_actionBarTopBorder;
    UIView *_bottomBorder;
    UIView *_cellSpacer;
    UIImageView *_textLine1;
    UIImageView *_textLine2;
    FBShimmeringView *_shimmerView;
    NSArray *_actionBarSeperators;
    NSArray *_photos;
}

@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSArray *actionBarSeperators; // @synthesize actionBarSeperators=_actionBarSeperators;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

