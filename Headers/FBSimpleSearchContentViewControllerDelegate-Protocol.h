//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol FBSearchSuggestionProtocol, FBSimpleSearchContentViewController;

@protocol FBSimpleSearchContentViewControllerDelegate <UIScrollViewDelegate>
- (void)simpleSearchContentViewController:(id <FBSimpleSearchContentViewController>)arg1 logNoClickSessionWithReason:(NSString *)arg2 source:(NSString *)arg3;
- (void)simpleSearchContentViewController:(id <FBSimpleSearchContentViewController>)arg1 logClickForSuggestion:(id <FBSearchSuggestionProtocol>)arg2 position:(unsigned int)arg3;
- (void)simpleSearchContentViewController:(id <FBSimpleSearchContentViewController>)arg1 logImpressionForSuggestion:(id <FBSearchSuggestionProtocol>)arg2 position:(unsigned int)arg3;
- (void)simpleSearchContentViewController:(id <FBSimpleSearchContentViewController>)arg1 openResultsViewController:(UIViewController *)arg2;
- (void)simpleSearchContentViewController:(id <FBSimpleSearchContentViewController>)arg1 openSuggestion:(id <FBSearchSuggestionProtocol>)arg2;

@optional
- (void)simpleSearchContentViewControllerDidUpdatedContent:(id <FBSimpleSearchContentViewController>)arg1;
- (void)simpleSearchContentViewControllerNeedsToOpenActivityLog:(id <FBSimpleSearchContentViewController>)arg1;
@end

