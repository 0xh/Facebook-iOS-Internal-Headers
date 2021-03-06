//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerViewControllerResult, NSArray, NSString;

@protocol FBComposerViewControllerDelegate <NSObject>
- (void)tryToPublish:(id)arg1;
- (BOOL)isComposerViewPopoverDismissing;
- (void)composerTappedButtonForFacecastWithInitialText:(NSString *)arg1 initialCommittedMentions:(NSArray *)arg2;
- (void)composerTappedAttachRemoteMedia;
- (BOOL)shouldComposerAllowAttachRemoteMedia;
- (void)composerCompletedWithResult:(FBComposerViewControllerResult *)arg1;
@end

