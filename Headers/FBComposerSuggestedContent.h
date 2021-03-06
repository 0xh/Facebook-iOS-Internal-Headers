//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBNearbyPlace, FBTaggableActivityComposition;

@interface FBComposerSuggestedContent : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    FBTaggableActivityComposition *_taggableActivitySuggestionData_taggableActivityComposition;
    FBNearbyPlace *_locationSuggestionData_nearbyPlace;
}

+ (id)taggableActivitySuggestionDataWithTaggableActivityComposition:(id)arg1;
+ (id)locationSuggestionDataWithNearbyPlace:(id)arg1;
- (void).cxx_destruct;
- (void)matchTaggableActivitySuggestionData:(CDUnknownBlockType)arg1 locationSuggestionData:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

