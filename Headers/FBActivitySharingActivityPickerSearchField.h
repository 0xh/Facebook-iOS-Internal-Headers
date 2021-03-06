//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FBActivityTaggingSearchFieldProtocol-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextField;
@protocol FBActivitySharingActivityPickerSearchFieldDelegate;

@interface FBActivitySharingActivityPickerSearchField : UITableViewCell <UISearchBarDelegate, UITextFieldDelegate, FBActivityTaggingSearchFieldProtocol>
{
    UITextField *_searchField;
    UILabel *_activityLabel;
    UIButton *_backButton;
    BOOL _shouldLeftAlignIcon;
    UIImageView *_searchIcon;
    BOOL _searchActivated;
    BOOL _backButtonHidden;
    id <FBActivitySharingActivityPickerSearchFieldDelegate> _delegate;
}

@property(nonatomic) BOOL backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(nonatomic) BOOL searchActivated; // @synthesize searchActivated=_searchActivated;
@property(nonatomic) __weak id <FBActivitySharingActivityPickerSearchFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)searchFieldDidChange:(id)arg1;
- (void)_didTapSearchField:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_backButtonTapped:(id)arg1;
- (void)clearInputText;
@property(readonly, nonatomic) UIImageView *searchIcon;
- (void)setPlaceholder:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)text;
- (void)dealloc;
- (void)_toggleCancelButton;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 shoudUseBiggerIcon:(BOOL)arg2 shouldLeftAlignIcon:(BOOL)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

