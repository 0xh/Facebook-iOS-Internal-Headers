//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBMImageUrlCollection, FBMUserName, NSString;

@interface FBContactSearchContactResult : FBValueObject <NSCopying>
{
    BOOL _isFriend;
    BOOL _isCoworker;
    BOOL _hasMessenger;
    BOOL _isMemorialized;
    NSString *_userId;
    FBMUserName *_name;
    FBMImageUrlCollection *_imageUrls;
    double _communicationRank;
}

@property(readonly, nonatomic) BOOL isMemorialized; // @synthesize isMemorialized=_isMemorialized;
@property(readonly, nonatomic) double communicationRank; // @synthesize communicationRank=_communicationRank;
@property(readonly, copy, nonatomic) FBMImageUrlCollection *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(readonly, nonatomic) BOOL hasMessenger; // @synthesize hasMessenger=_hasMessenger;
@property(readonly, nonatomic) BOOL isCoworker; // @synthesize isCoworker=_isCoworker;
@property(readonly, nonatomic) BOOL isFriend; // @synthesize isFriend=_isFriend;
@property(readonly, copy, nonatomic) FBMUserName *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 name:(id)arg2 isFriend:(BOOL)arg3 isCoworker:(BOOL)arg4 hasMessenger:(BOOL)arg5 imageUrls:(id)arg6 communicationRank:(double)arg7 isMemorialized:(BOOL)arg8;

@end

