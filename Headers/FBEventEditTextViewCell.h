//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBEventEditTableViewCell.h"

@class FBTextView;

@interface FBEventEditTextViewCell : FBEventEditTableViewCell
{
    FBTextView *_textView;
}

@property(readonly, nonatomic) FBTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect)_textViewFrameForContentBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

