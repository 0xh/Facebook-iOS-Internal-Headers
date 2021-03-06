//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CKCompositeComponent.h"

@class FBUserSession, NSOrderedSet, NSString;
@protocol FBNavigationCoordinator;

@interface FBEventHeaderComponent : CKCompositeComponent
{
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    NSString *_eventGraphQLID;
    NSOrderedSet *_hostEntities;
}

+ (id)newWithModel:(id)arg1 toolbox:(id)arg2;
- (void).cxx_destruct;
- (void)didTapSubtitle:(id)arg1;

@end

