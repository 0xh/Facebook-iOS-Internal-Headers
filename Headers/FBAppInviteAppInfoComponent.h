//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBAppInviteAppInfoInstallButtonComponent;

@interface FBAppInviteAppInfoComponent : CKCompositeComponent
{
    FBAppInviteAppInfoInstallButtonComponent *_installButtonComponent;
}

+ (id)newWithApplication:(id)arg1 isApplicationInstalled:(BOOL)arg2 imageDownloader:(id)arg3 action:(SEL)arg4 contentSizeCategory:(id)arg5;
@property(readonly, nonatomic) FBAppInviteAppInfoInstallButtonComponent *installButtonComponent; // @synthesize installButtonComponent=_installButtonComponent;
- (void).cxx_destruct;

@end

