//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAppService-Protocol.h"

@class FBSimpleSearchSuggestion, NSArray, NSString;

@protocol FBSimpleSearchNullStateServiceProtocol <FBAppService>
@property(readonly, nonatomic) BOOL isNullStateReady;
@property(readonly) NSArray *nullStateTitlesAndSuggestions;
- (void)loadNullState;

@optional
@property(readonly, nonatomic) unsigned int numberOfRecentSearches;
- (void)clearRecentSearches;
- (BOOL)isSectionTitleRecentSearches:(NSString *)arg1;
- (void)insertToRecentSearches:(FBSimpleSearchSuggestion *)arg1;
@end

