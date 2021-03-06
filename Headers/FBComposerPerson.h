//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface FBComposerPerson : FBValueObject <NSCopying, NSCoding>
{
    NSString *_graphQLID;
    NSString *_graphQLTypeName;
    NSString *_name;
    NSString *_friendshipStatus;
    NSURL *_profilePictureURL;
}

@property(readonly, copy, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(readonly, copy, nonatomic) NSString *friendshipStatus; // @synthesize friendshipStatus=_friendshipStatus;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *graphQLTypeName; // @synthesize graphQLTypeName=_graphQLTypeName;
@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
- (void).cxx_destruct;
- (id)initWithGraphQLID:(id)arg1 graphQLTypeName:(id)arg2 name:(id)arg3 friendshipStatus:(id)arg4 profilePictureURL:(id)arg5;

@end

