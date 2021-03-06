//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBRichStoryRendererController.h"

#import "FBFocusSource-Protocol.h"

@class FBNativeArticleInteractionRegistry, NSMutableDictionary, NSMutableSet, NSString;
@protocol FBNativeArticleRendererControllerDelegate;

@interface FBNativeArticleRendererController : FBRichStoryRendererController <FBFocusSource>
{
    FBNativeArticleInteractionRegistry *_interactionRegistry;
    NSMutableSet *_focusedBlockControllers;
    unsigned int _focusState;
    NSMutableDictionary *_modalStatesByBlockID;
    NSMutableSet *_playbackFocusedBlockControllers;
    NSMutableDictionary *_storyBlockCapabilities;
    struct Mutex _rendererLock;
}

@property(nonatomic) unsigned int focusState; // @synthesize focusState=_focusState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)blockControllerForTransitioningStoryBlock:(id)arg1;
- (BOOL)storyBlockSupportsTransitions:(id)arg1;
- (id)gestureRecognizingBlockControllerForStoryBlock:(id)arg1;
- (BOOL)storyBlockRecognizesGestures:(id)arg1;
- (unsigned int)fullscreenPresentationStyleForStoryBlock:(id)arg1;
- (id)fullscreenBlockControllerForStoryBlock:(id)arg1;
- (BOOL)shouldStoryBlockUseFullscreenFocusHooks:(id)arg1;
- (BOOL)isFullscreenStoryBlock:(id)arg1;
- (void)_invokeFocusHooksForBlockController:(id)arg1 state:(unsigned int)arg2;
- (void)_invokeFocusHooksForStoryBlock:(id)arg1 state:(unsigned int)arg2;
- (void)storyBlockDidLosePlaybackFocus:(id)arg1;
- (void)storyBlockDidGainPlaybackFocus:(id)arg1;
- (void)storyBlockDidLoseFocus:(id)arg1;
- (void)storyBlockDidGainFocus:(id)arg1;
- (void)storyBlockWillGainFocus:(id)arg1;
- (id)focusableBlockControllerForStoryBlock:(id)arg1;
- (BOOL)isFocusableStoryBlock:(id)arg1;
- (BOOL)shouldUpdateFocusForAppearanceChange;
- (void)_resumeInteractivity;
- (void)_suspendInteractivity;
- (BOOL)_isModalPresentedForStoryBlock:(id)arg1;
- (void)modalForStoryBlockGainedFocus:(id)arg1;
- (void)modalForStoryBlockLostFocus:(id)arg1;
- (void)didDismissModalOnBehalfOfStoryBlock:(id)arg1;
- (void)willDismissModalOnBehalfOfStoryBlock:(id)arg1;
- (void)willPresentModalOnBehalfOfStoryBlock:(id)arg1;
- (unsigned int)_capabilitiesForStoryBlock:(id)arg1;
- (void)didCullBlockController:(id)arg1 forStoryBlock:(id)arg2;
- (void)didGenerateBlockController:(id)arg1 forStoryBlock:(id)arg2;
- (void)dealloc;
- (id)initWithRendererClass:(Class)arg1 layoutDescription:(id)arg2 displayContext:(id)arg3 metrics:(id)arg4 viewModel:(id)arg5 presentationState:(id)arg6 boundingSize:(struct CGSize)arg7 blockControllerRegistry:(id)arg8 interactionRegistry:(id)arg9 renderQueue:(id)arg10;
- (id)initWithRendererClass:(Class)arg1 layoutDescription:(id)arg2 displayContext:(id)arg3 metrics:(id)arg4 viewModel:(id)arg5 presentationState:(id)arg6 boundingSize:(struct CGSize)arg7 blockControllerRegistry:(id)arg8 renderQueue:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <FBNativeArticleRendererControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

