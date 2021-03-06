//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBFNSettingsAppearanceConfiguration, NSString, UIColor, UIImage;

@interface FBFNNuxAppearanceConfigurationBuilder : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    UIColor *_phoneColor;
    UIColor *_buttonColor;
    UIColor *_buttonBackgroundColor;
    UIColor *_buttonAccentColor;
    UIColor *_buttonAccentBackgroundColor;
    UIColor *_textColor;
    UIColor *_linkColor;
    UIColor *_privacyTextColor;
    UIColor *_privacyOptionTextColor;
    UIColor *_privacyBackgroundColor;
    UIColor *_privacyBorderColor;
    UIColor *_privacySelectedBackgroundColor;
    UIColor *_privacyAccessoryColor;
    UIColor *_phoneUIBackgroundColor;
    UIColor *_phoneUITextPlaceholderColor;
    UIColor *_phoneUIHeaderBackgroundColor;
    UIColor *_phoneUICellBackgroundColor;
    UIColor *_phoneUICellNameTextColor;
    UIColor *_phoneUICellStatusTextColor;
    UIColor *_phoneUICellLocationTextColor;
    UIColor *_phoneUICellSeparatorColor;
    UIColor *_phoneUINavigationTitleColor;
    UIColor *_phoneUINavigationBackgroundColor;
    UIImage *_phoneUISilhouetteMan;
    UIImage *_phoneUISilhouetteFemale;
    unsigned int _phoneViewStyle;
    FBFNSettingsAppearanceConfiguration *_settingsAppearanceConfiguration;
    NSString *_currentCity;
    NSString *_nuxSurface;
}

+ (id)nuxAppearanceConfigurationFromExistingNuxAppearanceConfiguration:(id)arg1;
+ (id)nuxAppearanceConfiguration;
- (void).cxx_destruct;
- (id)withNuxSurface:(id)arg1;
- (id)withCurrentCity:(id)arg1;
- (id)withSettingsAppearanceConfiguration:(id)arg1;
- (id)withPhoneViewStyle:(unsigned int)arg1;
- (id)withPhoneUISilhouetteFemale:(id)arg1;
- (id)withPhoneUISilhouetteMan:(id)arg1;
- (id)withPhoneUINavigationBackgroundColor:(id)arg1;
- (id)withPhoneUINavigationTitleColor:(id)arg1;
- (id)withPhoneUICellSeparatorColor:(id)arg1;
- (id)withPhoneUICellLocationTextColor:(id)arg1;
- (id)withPhoneUICellStatusTextColor:(id)arg1;
- (id)withPhoneUICellNameTextColor:(id)arg1;
- (id)withPhoneUICellBackgroundColor:(id)arg1;
- (id)withPhoneUIHeaderBackgroundColor:(id)arg1;
- (id)withPhoneUITextPlaceholderColor:(id)arg1;
- (id)withPhoneUIBackgroundColor:(id)arg1;
- (id)withPrivacyAccessoryColor:(id)arg1;
- (id)withPrivacySelectedBackgroundColor:(id)arg1;
- (id)withPrivacyBorderColor:(id)arg1;
- (id)withPrivacyBackgroundColor:(id)arg1;
- (id)withPrivacyOptionTextColor:(id)arg1;
- (id)withPrivacyTextColor:(id)arg1;
- (id)withLinkColor:(id)arg1;
- (id)withTextColor:(id)arg1;
- (id)withButtonAccentBackgroundColor:(id)arg1;
- (id)withButtonAccentColor:(id)arg1;
- (id)withButtonBackgroundColor:(id)arg1;
- (id)withButtonColor:(id)arg1;
- (id)withPhoneColor:(id)arg1;
- (id)withSubtitleColor:(id)arg1;
- (id)withTitleColor:(id)arg1;
- (id)withBackgroundColor:(id)arg1;
- (id)build;

@end

