//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface FBFeedAwesomizerTopBarView : UIView
{
    unsigned int _styles;
    UILabel *_titleLabel;
    UIView *_bottomBorder;
    NSString *_title;
    UIButton *_closeButton;
}

@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithThemeColor:(id)arg1 style:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

