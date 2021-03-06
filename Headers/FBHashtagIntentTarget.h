//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class FBMemHashtag, NSString;

@interface FBHashtagIntentTarget : FBIntentTarget
{
    NSString *_tag;
    NSString *_FBID;
}

+ (id)hashtagTargetWithTag:(id)arg1 FBID:(id)arg2;
+ (id)hashtagTargetWithHashtag:(id)arg1;
@property(readonly, copy, nonatomic) NSString *FBID; // @synthesize FBID=_FBID;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;
@property(readonly, nonatomic) FBMemHashtag *hashtag;

@end

