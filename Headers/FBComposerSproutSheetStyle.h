//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBComposerSproutStyle;

@interface FBComposerSproutSheetStyle : FBValueObject <NSCopying>
{
    float _initialVisibleHeight;
    float _sheetBottomExtraHeightForDragging;
    float _sheetTopBottomPadding;
    FBComposerSproutStyle *_sproutStyle;
}

@property(readonly, copy, nonatomic) FBComposerSproutStyle *sproutStyle; // @synthesize sproutStyle=_sproutStyle;
@property(readonly, nonatomic) float sheetTopBottomPadding; // @synthesize sheetTopBottomPadding=_sheetTopBottomPadding;
@property(readonly, nonatomic) float sheetBottomExtraHeightForDragging; // @synthesize sheetBottomExtraHeightForDragging=_sheetBottomExtraHeightForDragging;
@property(readonly, nonatomic) float initialVisibleHeight; // @synthesize initialVisibleHeight=_initialVisibleHeight;
- (void).cxx_destruct;
- (id)initWithInitialVisibleHeight:(float)arg1 sheetBottomExtraHeightForDragging:(float)arg2 sheetTopBottomPadding:(float)arg3 sproutStyle:(id)arg4;

@end

