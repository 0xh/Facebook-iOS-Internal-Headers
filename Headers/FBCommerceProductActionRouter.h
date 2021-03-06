//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBCommerceProductActionPopoverController, FBPopoverController, UIViewController;
@protocol FBCommerceProductSaveButtonNuxViewControllerDelegate, FBCommerceProductVariantPickerViewControllerDelegate;

@interface FBCommerceProductActionRouter : NSObject
{
    UIViewController *_viewController;
    FBPopoverController *_savePopoverController;
    FBCommerceProductActionPopoverController *_popover;
    BOOL _popoverPickerExperiment;
    id <FBCommerceProductVariantPickerViewControllerDelegate> _pickerDelegate;
    id <FBCommerceProductSaveButtonNuxViewControllerDelegate> _popoverDelegate;
}

@property(nonatomic) __weak id <FBCommerceProductSaveButtonNuxViewControllerDelegate> popoverDelegate; // @synthesize popoverDelegate=_popoverDelegate;
@property(nonatomic) __weak id <FBCommerceProductVariantPickerViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void).cxx_destruct;
- (void)gotoSaveDashboard;
- (void)presentPopoverFor:(id)arg1 inView:(id)arg2 fromView:(id)arg3;
- (void)presentViewControllerFor:(id)arg1 variantIndex:(int)arg2 viewControllerType:(unsigned int)arg3 inView:(id)arg4 fromView:(id)arg5;
- (id)initWithViewController:(id)arg1 pickerDelegate:(id)arg2;

@end

