//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBCommentCellReplyPreviewAdditionalRepliesViewLayout, FBCommentCellReplyPreviewFakeComposerViewLayout, FBMemComment, NSArray, NSAttributedString, NSError, UIImage;
@protocol FBQueriedActorFieldsProtocol;

@interface FBCommentLayout : NSObject
{
    float _contentViewWidth;
    float _heightWithoutReplyDetailView;
    struct UIEdgeInsets _contentEdgeInsets;
    int _replyCount;
    BOOL _showSecondaryActionsButton;
    FBMemComment *_comment;
    FBMemComment *_reply;
    NSError *_postingError;
    float _contentWidth;
    unsigned int _feedbackContainerType;
    int _layoutMode;
    NSArray *_matchWords;
    NSAttributedString *_headerNavigationAttributedString;
    NSAttributedString *_headerExplanationAttributedString;
    NSAttributedString *_actorAttributedString;
    UIImage *_actorBadgeImage;
    NSAttributedString *_messageAttributedString;
    NSArray *_replyPreviewLayouts;
    FBCommentCellReplyPreviewAdditionalRepliesViewLayout *_replyPreviewAdditionalRepliesViewLayout;
    FBCommentCellReplyPreviewFakeComposerViewLayout *_replyPreviewFakeComposerViewLayout;
    float _textWidth;
    struct CGRect _replyDetailViewFrame;
    struct CGRect _headerExplanationViewFrame;
    struct CGRect _headerExplanationViewLabelFrame;
    struct CGRect _headerNavigationLabelFrame;
    struct CGRect _headerExplanationBottomBorderViewFrame;
    struct CGRect _actorImageFrame;
    struct CGRect _actorLabelFrame;
    struct CGRect _actorBadgeFrame;
    struct CGRect _messageLabelFrame;
    struct CGRect _stickerAttachmentViewFrame;
    struct CGRect _linkAttachmentViewFrame;
    struct CGRect _photoAttachmentViewFrame;
    struct CGRect _detailViewFrame;
    struct CGRect _repostIconFrame;
    struct CGRect _editViewFrame;
    struct CGRect _focusedViewFrame;
    struct CGRect _commentReplyVerticalLineSeparatorFrame;
}

+ (id)_viewMoreRepliesStringForUnpresentedReplyCount:(unsigned int)arg1;
+ (id)_viewPreviousRepliesStringForUnpresentedReplyCount:(unsigned int)arg1;
+ (id)_replyPreviewFakeComposerPlaceholderTextFont;
+ (id)layoutForComment:(id)arg1 reply:(id)arg2 postingError:(id)arg3 contentWidth:(float)arg4 feedbackContainerType:(unsigned int)arg5 tableHasSeparator:(BOOL)arg6 layoutMode:(int)arg7 matchWords:(id)arg8 focusCell:(BOOL)arg9 headerExplanationView:(BOOL)arg10 maxInlineReplyPreviewCount:(unsigned int)arg11 shouldAllowLinkShare:(BOOL)arg12 isViewPostNavigationEnabled:(BOOL)arg13 shouldShowSeparator:(BOOL)arg14;
@property(nonatomic) float textWidth; // @synthesize textWidth=_textWidth;
@property(readonly, nonatomic) FBCommentCellReplyPreviewFakeComposerViewLayout *replyPreviewFakeComposerViewLayout; // @synthesize replyPreviewFakeComposerViewLayout=_replyPreviewFakeComposerViewLayout;
@property(readonly, nonatomic) FBCommentCellReplyPreviewAdditionalRepliesViewLayout *replyPreviewAdditionalRepliesViewLayout; // @synthesize replyPreviewAdditionalRepliesViewLayout=_replyPreviewAdditionalRepliesViewLayout;
@property(readonly, copy, nonatomic) NSArray *replyPreviewLayouts; // @synthesize replyPreviewLayouts=_replyPreviewLayouts;
@property(readonly, nonatomic) struct CGRect commentReplyVerticalLineSeparatorFrame; // @synthesize commentReplyVerticalLineSeparatorFrame=_commentReplyVerticalLineSeparatorFrame;
@property(readonly, nonatomic) struct CGRect focusedViewFrame; // @synthesize focusedViewFrame=_focusedViewFrame;
@property(readonly, nonatomic) struct CGRect editViewFrame; // @synthesize editViewFrame=_editViewFrame;
@property(readonly, nonatomic) struct CGRect repostIconFrame; // @synthesize repostIconFrame=_repostIconFrame;
@property(readonly, nonatomic) struct CGRect detailViewFrame; // @synthesize detailViewFrame=_detailViewFrame;
@property(readonly, nonatomic) struct CGRect photoAttachmentViewFrame; // @synthesize photoAttachmentViewFrame=_photoAttachmentViewFrame;
@property(readonly, nonatomic) struct CGRect linkAttachmentViewFrame; // @synthesize linkAttachmentViewFrame=_linkAttachmentViewFrame;
@property(readonly, nonatomic) struct CGRect stickerAttachmentViewFrame; // @synthesize stickerAttachmentViewFrame=_stickerAttachmentViewFrame;
@property(readonly, nonatomic) struct CGRect messageLabelFrame; // @synthesize messageLabelFrame=_messageLabelFrame;
@property(readonly, copy, nonatomic) NSAttributedString *messageAttributedString; // @synthesize messageAttributedString=_messageAttributedString;
@property(readonly, nonatomic) UIImage *actorBadgeImage; // @synthesize actorBadgeImage=_actorBadgeImage;
@property(readonly, nonatomic) struct CGRect actorBadgeFrame; // @synthesize actorBadgeFrame=_actorBadgeFrame;
@property(readonly, nonatomic) struct CGRect actorLabelFrame; // @synthesize actorLabelFrame=_actorLabelFrame;
@property(readonly, copy, nonatomic) NSAttributedString *actorAttributedString; // @synthesize actorAttributedString=_actorAttributedString;
@property(readonly, nonatomic) struct CGRect actorImageFrame; // @synthesize actorImageFrame=_actorImageFrame;
@property(readonly, copy, nonatomic) NSAttributedString *headerExplanationAttributedString; // @synthesize headerExplanationAttributedString=_headerExplanationAttributedString;
@property(readonly, nonatomic) struct CGRect headerExplanationBottomBorderViewFrame; // @synthesize headerExplanationBottomBorderViewFrame=_headerExplanationBottomBorderViewFrame;
@property(readonly, copy, nonatomic) NSAttributedString *headerNavigationAttributedString; // @synthesize headerNavigationAttributedString=_headerNavigationAttributedString;
@property(readonly, nonatomic) struct CGRect headerNavigationLabelFrame; // @synthesize headerNavigationLabelFrame=_headerNavigationLabelFrame;
@property(readonly, nonatomic) struct CGRect headerExplanationViewLabelFrame; // @synthesize headerExplanationViewLabelFrame=_headerExplanationViewLabelFrame;
@property(readonly, nonatomic) struct CGRect headerExplanationViewFrame; // @synthesize headerExplanationViewFrame=_headerExplanationViewFrame;
@property(readonly, nonatomic) NSArray *matchWords; // @synthesize matchWords=_matchWords;
@property(readonly, nonatomic) int layoutMode; // @synthesize layoutMode=_layoutMode;
@property(readonly, nonatomic) BOOL showSecondaryActionsButton; // @synthesize showSecondaryActionsButton=_showSecondaryActionsButton;
@property(readonly, nonatomic) unsigned int feedbackContainerType; // @synthesize feedbackContainerType=_feedbackContainerType;
@property(readonly, nonatomic) float contentWidth; // @synthesize contentWidth=_contentWidth;
@property(readonly, nonatomic) NSError *postingError; // @synthesize postingError=_postingError;
@property(readonly, nonatomic) FBMemComment *reply; // @synthesize reply=_reply;
@property(readonly, nonatomic) FBMemComment *comment; // @synthesize comment=_comment;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)newReplyPreviewFakeComposerPlaceholderAttributedString:(id)arg1;
- (id)newAllBoldAttributedString:(id)arg1;
- (id)viewPostAttributedString;
- (id)newHeaderExplanationAttributedString:(id)arg1;
- (id)newMessageAttributedStringForComment:(id)arg1;
- (id)newActorAttributedStringForComment:(id)arg1;
- (float)_textLineHeight;
- (float)_replyDetailSeparation;
- (float)_replyWithActorXOffset;
- (float)_contentDetailSeparation;
- (struct UIEdgeInsets)_linkAttachmentInset;
- (float)_linkAttachmentHeight;
- (float)_messageSeparationForAttachment:(id)arg1;
- (float)_actorImageYOffset;
- (float)_actorImageTextContainerSeparation;
- (struct CGSize)_actorImageSize;
@property(readonly, nonatomic) float height;
@property(readonly, nonatomic) struct CGRect replyDetailViewFrame; // @synthesize replyDetailViewFrame=_replyDetailViewFrame;
@property(readonly, nonatomic) id <FBQueriedActorFieldsProtocol> replyAuthor;
- (id)initWithComment:(id)arg1 reply:(id)arg2 postingError:(id)arg3 contentWidth:(float)arg4 feedbackContainerType:(unsigned int)arg5 tableHasSeparator:(BOOL)arg6 layoutMode:(int)arg7 matchWords:(id)arg8 focusCell:(BOOL)arg9 headerExplanationView:(BOOL)arg10 maxInlineReplyPreviewCount:(unsigned int)arg11 shouldAllowLinkShare:(BOOL)arg12 isViewPostNavigationEnabled:(BOOL)arg13 shouldShowSeparator:(BOOL)arg14;

@end

