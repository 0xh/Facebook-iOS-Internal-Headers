//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBStreamLoadResult.h"

@class FBMemPlaceTipWelcomeHeader, NSArray, NSAttributedString, NSString;

@interface FBReactionUnitsLoadResult : FBStreamLoadResult
{
    NSArray *_reactionUnits;
    FBMemPlaceTipWelcomeHeader *_welcomeHeader;
    float _networkTime;
    NSString *_sessionId;
    NSAttributedString *_unitsTitle;
}

@property(copy, nonatomic) NSAttributedString *unitsTitle; // @synthesize unitsTitle=_unitsTitle;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) float networkTime; // @synthesize networkTime=_networkTime;
@property(copy, nonatomic) FBMemPlaceTipWelcomeHeader *welcomeHeader; // @synthesize welcomeHeader=_welcomeHeader;
@property(copy, nonatomic) NSArray *reactionUnits; // @synthesize reactionUnits=_reactionUnits;
- (void).cxx_destruct;

@end

