//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBPlacesTileBaseAnnotation.h"

@class NSSet, NSString;

@interface FBPlacesTileClusterAnnotation : FBPlacesTileBaseAnnotation
{
    BOOL _badgeHidden;
    NSSet *_fbids;
    NSString *_frontPlaceFbId;
}

@property(nonatomic) BOOL badgeHidden; // @synthesize badgeHidden=_badgeHidden;
@property(copy, nonatomic) NSString *frontPlaceFbId; // @synthesize frontPlaceFbId=_frontPlaceFbId;
@property(copy, nonatomic) NSSet *fbids; // @synthesize fbids=_fbids;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

