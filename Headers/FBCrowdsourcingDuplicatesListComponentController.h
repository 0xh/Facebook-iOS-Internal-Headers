//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBDetailComponentController.h"

@class FBCrowdsourcingDuplicatesController, FBCrowdsourcingDuplicatesModel;

@interface FBCrowdsourcingDuplicatesListComponentController : FBDetailComponentController
{
    FBCrowdsourcingDuplicatesController *_controller;
    FBCrowdsourcingDuplicatesModel *_model;
}

@property(readonly, nonatomic) FBCrowdsourcingDuplicatesModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) __weak FBCrowdsourcingDuplicatesController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)needsResize;
- (void)changeSelectionAtIndex:(unsigned int)arg1 selected:(BOOL)arg2;
- (id)componentCell;
- (id)initWithController:(id)arg1 model:(id)arg2;

@end

