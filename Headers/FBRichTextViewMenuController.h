//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBRichTextView, NSArray, NSTimer, UIMenuController;

@interface FBRichTextViewMenuController : NSObject
{
    UIMenuController *_menuController;
    NSTimer *_longPressTimer;
    NSArray *_menuItems;
    FBRichTextView *_richTextView;
    double _menuDelay;
}

+ (id)newMenuControllerForRichTextView:(id)arg1 menuItems:(id)arg2;
@property(nonatomic) double menuDelay; // @synthesize menuDelay=_menuDelay;
- (void).cxx_destruct;
- (BOOL)_canDisplayWithTextCheckingResult:(id)arg1;
- (void)_willHideMenuController:(id)arg1;
- (void)_didLongPress:(id)arg1;
- (BOOL)timerIsActive;
- (BOOL)menuControllerIsVisible;
- (void)dismissMenuController;
- (void)activateMenuControllerAtPoint:(struct CGPoint)arg1;
- (void)dealloc;

@end

