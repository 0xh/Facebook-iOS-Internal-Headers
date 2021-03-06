//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class FBGraphQLQuery, FBMemPageInfo, NSArray, NSDictionary, NSString;

@protocol FBMemPersonPaginatedFriendListHelper
@property(readonly, nonatomic) const struct FBGraphQLFieldSet *paginatedQueriedFieldSet;
@property(readonly, copy, nonatomic) NSString *entityKeyPath;
@property(readonly, copy, nonatomic) NSString *pageInfoKeyPath;
@property(readonly, nonatomic) int paginatedBufferSize;
@property(readonly, nonatomic) int paginatedRequestLimit;
@property(readonly, copy, nonatomic) NSString *friendListType;
@property(readonly, copy, nonatomic) NSString *friendListSurface;
@property(readonly, copy, nonatomic) NSString *friendListTitle;
- (FBGraphQLQuery *)paginatedQueryForEntityCardsInFriendListForTargetID:(NSString *)arg1 pageInfo:(FBMemPageInfo *)arg2 pageSize:(unsigned int)arg3;
- (NSArray *)convertToMemPeopleArrayForLiteCompleteResponse:(NSDictionary *)arg1;
- (FBMemPageInfo *)getPageInfoForPaginatedResponse:(NSDictionary *)arg1;
- (NSArray *)convertToMemPeopleArrayForPaginatedResponse:(NSDictionary *)arg1;
- (FBGraphQLQuery *)liteCompleteQueryForFriendListTargetID:(NSString *)arg1;
- (FBGraphQLQuery *)paginatedQueryForFriendListTargetID:(NSString *)arg1 andPageInfo:(FBMemPageInfo *)arg2;
@end

