//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface FLAnimatedWebPFrameInfo : NSObject <NSCopying>
{
    BOOL _disposeToBackground;
    BOOL _blendWithPreviousFrame;
    BOOL _hasAlpha;
    struct CGRect _frameRect;
}

@property(readonly, nonatomic) BOOL hasAlpha; // @synthesize hasAlpha=_hasAlpha;
@property(readonly, nonatomic) BOOL blendWithPreviousFrame; // @synthesize blendWithPreviousFrame=_blendWithPreviousFrame;
@property(readonly, nonatomic) BOOL disposeToBackground; // @synthesize disposeToBackground=_disposeToBackground;
@property(readonly, nonatomic) struct CGRect frameRect; // @synthesize frameRect=_frameRect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrameRect:(struct CGRect)arg1 disposeToBackground:(BOOL)arg2 blendWithPreviousFrame:(BOOL)arg3 hasAlpha:(BOOL)arg4;

@end

