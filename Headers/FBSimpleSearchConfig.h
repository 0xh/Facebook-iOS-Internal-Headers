//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBSimpleSearchConfig : FBExperimentContext
{
    BOOL _isSingleStateEnabled;
    BOOL _ppsUseBigSeeMoreButton;
    BOOL _showTopSuggestionInSearchBox;
    BOOL _showUnreadCountInNullState;
    BOOL _showUnreadCountSnippets;
    NSString *_bootstrapPrefixMatchingMode;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL showUnreadCountSnippets; // @synthesize showUnreadCountSnippets=_showUnreadCountSnippets;
@property(readonly, nonatomic) BOOL showUnreadCountInNullState; // @synthesize showUnreadCountInNullState=_showUnreadCountInNullState;
@property(readonly, nonatomic) BOOL showTopSuggestionInSearchBox; // @synthesize showTopSuggestionInSearchBox=_showTopSuggestionInSearchBox;
@property(readonly, copy, nonatomic) NSString *bootstrapPrefixMatchingMode; // @synthesize bootstrapPrefixMatchingMode=_bootstrapPrefixMatchingMode;
@property(readonly, nonatomic) BOOL ppsUseBigSeeMoreButton; // @synthesize ppsUseBigSeeMoreButton=_ppsUseBigSeeMoreButton;
@property(readonly, nonatomic) BOOL isSingleStateEnabled; // @synthesize isSingleStateEnabled=_isSingleStateEnabled;
- (void).cxx_destruct;

@end

