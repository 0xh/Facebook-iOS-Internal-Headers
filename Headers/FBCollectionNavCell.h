//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBCollectionAbstractCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface FBCollectionNavCell : FBCollectionAbstractCell
{
    UILabel *_titleLabel;
    UIImageView *_expandArrow;
    UIView *_icon;
}

+ (float)desiredHeight;
@property(retain, nonatomic) UIView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
- (id)initWithReuseIdentifier:(id)arg1;

@end

