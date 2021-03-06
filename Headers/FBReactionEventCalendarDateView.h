//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, UILabel;

@interface FBReactionEventCalendarDateView : UIView
{
    UILabel *_monthLabel;
    UILabel *_dayLabel;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)_reload;
- (id)_centeredLabelWithColor:(id)arg1 fontSize:(float)arg2 fontWeight:(unsigned int)arg3;
- (void)_createSubviewsIfNeeded;
- (float)_verticalSeparationAdjustment;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

