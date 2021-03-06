//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBGroupsPrivacyButton, NSString;
@protocol FBGroupsPrivacyCellDelegate;

@interface FBGroupsPrivacyCell : UITableViewCell
{
    FBGroupsPrivacyButton *_privacyOpenButton;
    FBGroupsPrivacyButton *_privacyClosedButton;
    FBGroupsPrivacyButton *_privacySecretButton;
    id <FBGroupsPrivacyCellDelegate> _delegate;
    NSString *_privacySetting;
}

@property(copy, nonatomic) NSString *privacySetting; // @synthesize privacySetting=_privacySetting;
@property(nonatomic) __weak id <FBGroupsPrivacyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetButtons;
- (void)_buttonTouched:(id)arg1;
- (id)_createPrivacySelectionButton:(id)arg1 frame:(struct CGRect)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

