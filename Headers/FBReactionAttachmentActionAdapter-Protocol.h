//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBActionBarItem, FBReactionAdapterContext, NSString, UIButton;
@protocol FBQueriedReactionStoryAttachmentActionFieldsProtocol, FBReactionAttachmentActionAdapterDelegate;

@protocol FBReactionAttachmentActionAdapter <NSObject>
@property(nonatomic) __weak id <FBReactionAttachmentActionAdapterDelegate> delegate;
- (void)attachmentActionTapped;
- (FBActionBarItem *)actionBarItem;
- (id)initWithReactionContext:(FBReactionAdapterContext *)arg1 resultStyle:(NSString *)arg2 attachmentAction:(id <FBQueriedReactionStoryAttachmentActionFieldsProtocol>)arg3;

@optional
- (UIButton *)actionButton;
@end

