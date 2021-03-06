//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBReactionBaseUnitComponentAdapter.h"

#import "FBClonePhotoViewProviderDelegate-Protocol.h"

@class FBMemPhoto, FBReactionAdapterContext, NSString, UIView;
@protocol FBClonePhotoView, FBReactionActionAdapter, FBReactionUnitComponentAdapterDelegate;

@interface FBReactionSinglePhotoUnitComponentAdapter : FBReactionBaseUnitComponentAdapter <FBClonePhotoViewProviderDelegate>
{
    UIView *_componentView;
    UIView<FBClonePhotoView> *_photoView;
    NSString *_style;
    FBReactionAdapterContext *_context;
    FBMemPhoto *_photo;
    id <FBReactionActionAdapter> _actionAdapter;
    NSString *_caption;
    BOOL _isLast;
    id <FBReactionUnitComponentAdapterDelegate> delegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (id)clonePhotoViewProvider:(id)arg1 cloneViewForPhoto:(id)arg2;
- (BOOL)performMagicTap;
- (void)didTapPhoto;
- (id)componentView;
- (id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 isFirst:(BOOL)arg5 isLast:(BOOL)arg6 indexPath:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

