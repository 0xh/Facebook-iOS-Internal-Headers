//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SBAssetInfo;

@interface SBAssetInfoAndSize : NSObject
{
    BOOL _forceUpload;
    SBAssetInfo *_assetInfo;
    unsigned int _imageSize;
}

+ (id)assetInfo:(id)arg1 andSize:(unsigned int)arg2;
@property(nonatomic) BOOL forceUpload; // @synthesize forceUpload=_forceUpload;
@property(nonatomic) unsigned int imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) SBAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithAssetInfo:(id)arg1 andSize:(unsigned int)arg2;

@end

