//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemGraphSearchQuery, NSString;

@interface FBSearchComponentSpellingCorrectionModel : NSObject
{
    FBMemGraphSearchQuery *_correctedQuery;
    NSString *_confidence;
    FBMemGraphSearchQuery *_currentQuery;
}

@property(readonly, nonatomic) FBMemGraphSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(readonly, copy, nonatomic) NSString *confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) FBMemGraphSearchQuery *correctedQuery; // @synthesize correctedQuery=_correctedQuery;
- (void).cxx_destruct;
- (id)initWithCorrectedQuery:(id)arg1 confidence:(id)arg2 currentQuery:(id)arg3;

@end

