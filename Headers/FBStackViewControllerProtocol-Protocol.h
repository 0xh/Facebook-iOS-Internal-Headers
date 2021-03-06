//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnalyticsInfoSource-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, UIViewController;
@protocol FBModallyPresentableItem;

@protocol FBStackViewControllerProtocol <NSObject, FBAnalyticsInfoSource>
@property(readonly, nonatomic) UIViewController *bottomModalViewController;
@property(readonly, nonatomic) UIViewController *topModalViewController;
@property(readonly, nonatomic) id <FBModallyPresentableItem> bottomModalItem;
@property(readonly, nonatomic) id <FBModallyPresentableItem> topModalItem;
@property(readonly, copy, nonatomic) NSArray *modalPresentationItems;
- (void)removeModalItem:(id <FBModallyPresentableItem>)arg1;
- (void)addModalItem:(id <FBModallyPresentableItem>)arg1;

@optional
- (void)modalItem:(id <FBModallyPresentableItem>)arg1 didUpdateOcclusionState:(BOOL)arg2;
@end

