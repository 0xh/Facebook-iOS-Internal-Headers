//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPopoverControllerDelegate-Protocol.h"

@class FBActionSheetButtonItem, FBMemTimelineAppCollectionItem, FBPopoverActionSheet, FBUserSession, NSString;
@protocol FBSavedDashboardFeedbackDelegate;

@interface FBSavedDashboardFeedbackManager : NSObject <FBPopoverControllerDelegate>
{
    FBUserSession *_session;
    FBPopoverActionSheet *_popoverActionSheet;
    id <FBSavedDashboardFeedbackDelegate> _delegate;
    FBActionSheetButtonItem *_shareInPostItem;
    FBActionSheetButtonItem *_sendInMessageItem;
    FBActionSheetButtonItem *_viewPostItem;
    FBActionSheetButtonItem *_deleteForeverItem;
    FBActionSheetButtonItem *_archiveItem;
    FBMemTimelineAppCollectionItem *_currentItem;
}

+ (id)_cachedGlyphImage;
+ (id)feedbackButtonWithTarget:(id)arg1 selector:(SEL)arg2 rightMargin:(float)arg3;
+ (id)feedbackButtonWithTarget:(id)arg1 selector:(SEL)arg2;
- (void).cxx_destruct;
- (void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)_feedbackTappedWithType:(int)arg1;
- (id)_feedbackButtonWithTitle:(id)arg1 image:(id)arg2 feedbackType:(int)arg3;
- (id)_feedbackButtonsForItem:(id)arg1 andFilter:(id)arg2;
- (void)dismissFeedbackFlyout;
- (BOOL)feedbackFlyoutIsOpen;
- (void)openFeedbackFlyoutInView:(id)arg1 fromView:(id)arg2 forItem:(id)arg3 forFilter:(id)arg4;
- (id)initWithSession:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

