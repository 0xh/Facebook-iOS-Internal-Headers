//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBAdInterfacesAdPreview, FBAdInterfacesAdminInfo, FBAdInterfacesAudienceOption, FBAdInterfacesBudget, FBAdInterfacesCallToActionOption, FBAdInterfacesPromotion, FBAdInterfacesPromotionState, FBBoostedComponentCreateInputDataCreative, FBMemAdAccount, FBMemAdConversionPixel, NSArray, NSDictionary, NSError, NSString, UIImage;

@interface FBAdInterfacesPromotionDataModel : FBValueObject <NSCopying>
{
    NSString *_pageID;
    NSString *_promotableObjectID;
    NSString *_actorID;
    FBAdInterfacesPromotionState *_state;
    FBAdInterfacesPromotion *_promotion;
    FBAdInterfacesAdminInfo *_adminInfo;
    NSDictionary *_extraData;
    NSError *_error;
    FBAdInterfacesAudienceOption *_selectedAudienceOption;
    NSDictionary *_selectedTargetingSpec;
    FBAdInterfacesBudget *_customBudget;
    FBAdInterfacesBudget *_selectedBudget;
    unsigned int _selectedDuration;
    FBMemAdAccount *_selectedAccount;
    FBMemAdConversionPixel *_selectedConversionPixel;
    NSArray *_callToActionOptions;
    FBAdInterfacesCallToActionOption *_selectedCallToActionOption;
    FBBoostedComponentCreateInputDataCreative *_creative;
    UIImage *_creativeImage;
    FBAdInterfacesAdPreview *_adPreview;
    NSArray *_savedAudiences;
}

@property(readonly, copy, nonatomic) NSArray *savedAudiences; // @synthesize savedAudiences=_savedAudiences;
@property(readonly, copy, nonatomic) FBAdInterfacesAdPreview *adPreview; // @synthesize adPreview=_adPreview;
@property(readonly, copy, nonatomic) UIImage *creativeImage; // @synthesize creativeImage=_creativeImage;
@property(readonly, copy, nonatomic) FBBoostedComponentCreateInputDataCreative *creative; // @synthesize creative=_creative;
@property(readonly, copy, nonatomic) FBAdInterfacesCallToActionOption *selectedCallToActionOption; // @synthesize selectedCallToActionOption=_selectedCallToActionOption;
@property(readonly, copy, nonatomic) NSArray *callToActionOptions; // @synthesize callToActionOptions=_callToActionOptions;
@property(readonly, copy, nonatomic) FBMemAdConversionPixel *selectedConversionPixel; // @synthesize selectedConversionPixel=_selectedConversionPixel;
@property(readonly, copy, nonatomic) FBMemAdAccount *selectedAccount; // @synthesize selectedAccount=_selectedAccount;
@property(readonly, nonatomic) unsigned int selectedDuration; // @synthesize selectedDuration=_selectedDuration;
@property(readonly, copy, nonatomic) FBAdInterfacesBudget *selectedBudget; // @synthesize selectedBudget=_selectedBudget;
@property(readonly, copy, nonatomic) FBAdInterfacesBudget *customBudget; // @synthesize customBudget=_customBudget;
@property(readonly, copy, nonatomic) NSDictionary *selectedTargetingSpec; // @synthesize selectedTargetingSpec=_selectedTargetingSpec;
@property(readonly, copy, nonatomic) FBAdInterfacesAudienceOption *selectedAudienceOption; // @synthesize selectedAudienceOption=_selectedAudienceOption;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(readonly, copy, nonatomic) FBAdInterfacesAdminInfo *adminInfo; // @synthesize adminInfo=_adminInfo;
@property(readonly, copy, nonatomic) FBAdInterfacesPromotion *promotion; // @synthesize promotion=_promotion;
@property(readonly, copy, nonatomic) FBAdInterfacesPromotionState *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *actorID; // @synthesize actorID=_actorID;
@property(readonly, copy, nonatomic) NSString *promotableObjectID; // @synthesize promotableObjectID=_promotableObjectID;
@property(readonly, copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (void).cxx_destruct;
- (id)initWithPageID:(id)arg1 promotableObjectID:(id)arg2 actorID:(id)arg3 state:(id)arg4 promotion:(id)arg5 adminInfo:(id)arg6 extraData:(id)arg7 error:(id)arg8 selectedAudienceOption:(id)arg9 selectedTargetingSpec:(id)arg10 customBudget:(id)arg11 selectedBudget:(id)arg12 selectedDuration:(unsigned int)arg13 selectedAccount:(id)arg14 selectedConversionPixel:(id)arg15 callToActionOptions:(id)arg16 selectedCallToActionOption:(id)arg17 creative:(id)arg18 creativeImage:(id)arg19 adPreview:(id)arg20 savedAudiences:(id)arg21;

@end

