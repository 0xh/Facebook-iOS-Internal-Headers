//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBModelObjectProtocol-Protocol.h"

@class FBMemImage, FBMemName, FBMemPhoto, NSArray, NSOrderedSet, NSString;

@protocol FBAvatarProtocol <FBModelObjectProtocol>
+ (NSString *)graphQLTypeName;
- (FBMemImage *)profilePictureForFeedGutter;
- (FBMemImage *)profilePicture320;
- (FBMemImage *)profilePicture180;
- (FBMemImage *)profilePicture74;
- (FBMemImage *)profilePicture60;
- (FBMemImage *)profilePicture50;
- (FBMemPhoto *)profilePhoto;
- (NSOrderedSet *)bylines;
- (NSArray *)nameSearchTokens;
- (FBMemName *)structuredName;
- (NSString *)name;
- (NSString *)graphQLID;
@end

