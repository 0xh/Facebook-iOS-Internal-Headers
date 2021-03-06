//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBStarRatingViewDelegate-Protocol.h"

@class FBNetworkImageView, FBRichTextView, FBStarRatingView, FBUserSession, NSString, UIImage;
@protocol FBPageSimpleRatingViewDelegate;

@interface FBPageSimpleRatingView : UIView <FBStarRatingViewDelegate>
{
    FBUserSession *_session;
    FBNetworkImageView *_profileImageView;
    FBStarRatingView *_ratingView;
    FBRichTextView *_contextLabel;
    NSString *_personProfilePictureUrlString;
    NSString *_currentReviewText;
    UIImage *_privacyIconImage;
    id <FBPageSimpleRatingViewDelegate> _delegate;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) __weak id <FBPageSimpleRatingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIImage *privacyIconImage; // @synthesize privacyIconImage=_privacyIconImage;
@property(copy, nonatomic) NSString *currentReviewText; // @synthesize currentReviewText=_currentReviewText;
@property(copy, nonatomic) NSString *personProfilePictureUrlString; // @synthesize personProfilePictureUrlString=_personProfilePictureUrlString;
- (void).cxx_destruct;
@property(nonatomic) int currentRating;
@property(copy, nonatomic) NSString *contextString;
- (void)starRatingView:(id)arg1 didChangeRating:(unsigned int)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

