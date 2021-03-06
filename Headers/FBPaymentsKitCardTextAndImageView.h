//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBPaymentsKitCardTextInputHandlerDelegate-Protocol.h"

@class FBPaymentsKitCardTextInputHandler, FBPaymentsKitCardTextInputState, NSString, UIImage, UIImageView, UILabel, UITextField;
@protocol FBPaymentsKitCardTextAndImageViewDelegate;

@interface FBPaymentsKitCardTextAndImageView : UIView <FBPaymentsKitCardTextInputHandlerDelegate>
{
    UIImageView *_imageView;
    UITextField *_textField;
    UILabel *_maskedLabel;
    FBPaymentsKitCardTextInputHandler *_textInputHandler;
    UIImage *_defaultImage;
    NSString *_placeholder;
    BOOL _editable;
    UIImage *_image;
    id <FBPaymentsKitCardTextAndImageViewDelegate> _delegate;
    NSString *_completedNumericalDigits;
    NSString *_numericalDigits;
    NSString *_identifier;
    FBPaymentsKitCardTextInputState *_currentTextInputState;
}

@property(readonly, copy, nonatomic) FBPaymentsKitCardTextInputState *currentTextInputState; // @synthesize currentTextInputState=_currentTextInputState;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *numericalDigits; // @synthesize numericalDigits=_numericalDigits;
@property(copy, nonatomic) NSString *completedNumericalDigits; // @synthesize completedNumericalDigits=_completedNumericalDigits;
@property(nonatomic) __weak id <FBPaymentsKitCardTextAndImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_updateImageViewAnimated:(BOOL)arg1;
- (int)getCurrentCardAssociation:(id)arg1;
- (void)textInputHandler:(id)arg1 didChangeContentInTextField:(id)arg2 isUserInput:(BOOL)arg3 isCompleted:(BOOL)arg4 image:(id)arg5 errorDescription:(id)arg6 state:(id)arg7 isSecondMistake:(BOOL)arg8;
- (BOOL)textInputHandler:(id)arg1 shouldAllowEditingInTextField:(id)arg2;
- (void)setAccessibilityLabel:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)applyConfiguration:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPlaceholder:(id)arg1 defaultImage:(id)arg2 textInputHandler:(id)arg3 identifier:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

