//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBDBLStoredUser, UIViewController;
@protocol FBDBLUserChooserViewControllerProtocol;

@protocol FBDBLUserChooserAuthenticating <NSObject>
- (void)noUsersRemainInViewController:(UIViewController<FBDBLUserChooserViewControllerProtocol> *)arg1;
- (void)refreshUsersForViewController:(UIViewController<FBDBLUserChooserViewControllerProtocol> *)arg1;
- (void)userRegistrationFromViewController:(UIViewController<FBDBLUserChooserViewControllerProtocol> *)arg1;
- (void)settingsFromViewController:(UIViewController<FBDBLUserChooserViewControllerProtocol> *)arg1;
- (void)continueAsOtherFromViewController:(UIViewController<FBDBLUserChooserViewControllerProtocol> *)arg1;
- (void)viewController:(UIViewController<FBDBLUserChooserViewControllerProtocol> *)arg1 choseUser:(FBDBLStoredUser *)arg2;
@end

