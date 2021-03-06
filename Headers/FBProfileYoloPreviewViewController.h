//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComposerAudiencePickerControllerDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBTokenizerContainingDelegate-Protocol.h"

@class FBComposerAudiencePickerViewController, FBComposerSelectablePrivacy, FBProfilePhotoUpdateInfo, FBProfileToolbox, FBProfileYoloPreviewView, FBTimelineTemporaryCoverPhoto, FBUserSession, NSString;
@protocol FBProfileYoloPreviewViewControllerDelegate;

@interface FBProfileYoloPreviewViewController : UIViewController <FBTokenizerContainingDelegate, FBComposerAudiencePickerControllerDelegate, FBPresentableViewController>
{
    FBProfileYoloPreviewView *_previewView;
    FBTimelineTemporaryCoverPhoto *_image;
    FBProfilePhotoUpdateInfo *_photosInfo;
    FBProfileToolbox *_toolbox;
    BOOL _swipeEnabled;
    FBComposerAudiencePickerViewController *_pickerController;
    FBComposerSelectablePrivacy *_currentSelectablePrivacy;
    BOOL _isDirectEdit;
    BOOL _hasHeaderOverlay;
    id <FBProfileYoloPreviewViewControllerDelegate> _delegate;
    FBUserSession *_session;
}

@property(nonatomic) BOOL hasHeaderOverlay; // @synthesize hasHeaderOverlay=_hasHeaderOverlay;
@property(readonly, nonatomic) BOOL isDirectEdit; // @synthesize isDirectEdit=_isDirectEdit;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <FBProfileYoloPreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audiencePickerControllerDidTapCancelNavigationButton:(id)arg1;
- (void)audiencePickerControllerDidTapDoneNavigationButton:(id)arg1 finishedWithAvailablePrivacySettings:(id)arg2 selectedAudience:(id)arg3;
- (void)accessoryViewWasTappedForTokenizer:(id)arg1;
- (void)tokenizer:(id)arg1 willChangeHeight:(float)arg2;
- (void)nonInteractiveAudienceViewWasTapped;
- (void)_privacySettingUpdateWithSelectablePrivacy:(id)arg1;
- (void)_willPresentViewControllerAnimated:(BOOL)arg1;
- (void)_updateAudienceViewForSelectablePrivacy:(id)arg1;
- (void)_updateAudienceTokenizerViewForSeletablePrivacy:(id)arg1;
- (void)updateTemporaryPhotoWithHighRes:(id)arg1;
- (CDUnknownBlockType)_fetchPrivacySettingsCompletionBlock;
- (void)_fetchPrivacySettings;
- (BOOL)fb_showNavigationJewels;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (void)_saveHeaderPhotoButtonTapped:(id)arg1;
- (void)_cancelHeaderPhotoButtonTapped:(id)arg1;
- (void)cancelDirectCoverPhotoEdit;
- (void)configureFactoidsModel;
- (void)configureHeaderLocalModel;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithComponentContext:(id)arg1 isDirectEdit:(BOOL)arg2 session:(id)arg3 photosInfo:(id)arg4 image:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

