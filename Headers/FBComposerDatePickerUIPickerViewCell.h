//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString, UIPickerView;
@protocol FBMLEDatePickerDelegate;

@interface FBComposerDatePickerUIPickerViewCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource, UIGestureRecognizerDelegate>
{
    UIPickerView *_datePicker;
    NSArray *_pickerList;
    id <FBMLEDatePickerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMLEDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *pickerList; // @synthesize pickerList=_pickerList;
@property(retain, nonatomic) UIPickerView *datePicker; // @synthesize datePicker=_datePicker;
- (void).cxx_destruct;
- (void)datePickerTapGestureRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

