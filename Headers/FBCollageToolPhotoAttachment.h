//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImage;

@interface FBCollageToolPhotoAttachment : NSObject
{
    UIImage *_editedImage;
    BOOL _isFlipped;
    BOOL _isMirrored;
    BOOL _isScaled;
    UIImage *_standardImage;
    float _imageScale;
    struct CGPoint _imageOffset;
}

@property(nonatomic) float imageScale; // @synthesize imageScale=_imageScale;
@property(nonatomic) struct CGPoint imageOffset; // @synthesize imageOffset=_imageOffset;
@property(nonatomic) BOOL isScaled; // @synthesize isScaled=_isScaled;
@property(nonatomic) BOOL isMirrored; // @synthesize isMirrored=_isMirrored;
@property(nonatomic) BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
@property(retain, nonatomic) UIImage *standardImage; // @synthesize standardImage=_standardImage;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *editedImage;
- (void)resetWithImage:(id)arg1;
- (id)initWithPhotoAttachment:(id)arg1;
- (id)initWithStandardImage:(id)arg1;

@end

