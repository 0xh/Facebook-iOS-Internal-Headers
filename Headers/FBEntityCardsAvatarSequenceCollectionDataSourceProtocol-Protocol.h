//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemPageInfo, NSArray, NSString;

@protocol FBEntityCardsAvatarSequenceCollectionDataSourceProtocol <NSObject>
- (BOOL)areAllEntitiesSupported:(NSArray *)arg1;
- (void)setAvatarSequenceRelation:(unsigned int)arg1 targetFBID:(NSString *)arg2 initialEntities:(NSArray *)arg3 initialDisplayIndex:(unsigned int)arg4 tailPageInfo:(FBMemPageInfo *)arg5 source:(NSString *)arg6;
@end

