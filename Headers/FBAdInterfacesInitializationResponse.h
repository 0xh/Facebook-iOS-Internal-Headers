//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBAdInterfacesAdminInfo, FBAdInterfacesPromotion, NSDictionary;

@interface FBAdInterfacesInitializationResponse : FBValueObject <NSCopying>
{
    FBAdInterfacesPromotion *_promotion;
    FBAdInterfacesAdminInfo *_adminInfo;
    NSDictionary *_extraData;
}

@property(readonly, copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(readonly, copy, nonatomic) FBAdInterfacesAdminInfo *adminInfo; // @synthesize adminInfo=_adminInfo;
@property(readonly, copy, nonatomic) FBAdInterfacesPromotion *promotion; // @synthesize promotion=_promotion;
- (void).cxx_destruct;
- (id)initWithPromotion:(id)arg1 adminInfo:(id)arg2 extraData:(id)arg3;

@end

