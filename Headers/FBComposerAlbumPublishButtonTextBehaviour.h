//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface FBComposerAlbumPublishButtonTextBehaviour : FBValueObject <NSCopying, NSCoding>
{
    NSString *_buttonTitleWhenPublishingToAlbum;
    NSString *_buttonTitleWhenNotPublishingToAlbum;
}

@property(readonly, copy, nonatomic) NSString *buttonTitleWhenNotPublishingToAlbum; // @synthesize buttonTitleWhenNotPublishingToAlbum=_buttonTitleWhenNotPublishingToAlbum;
@property(readonly, copy, nonatomic) NSString *buttonTitleWhenPublishingToAlbum; // @synthesize buttonTitleWhenPublishingToAlbum=_buttonTitleWhenPublishingToAlbum;
- (void).cxx_destruct;
- (id)initWithButtonTitleWhenPublishingToAlbum:(id)arg1 buttonTitleWhenNotPublishingToAlbum:(id)arg2;

@end

