//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBActivitySharingBootstrapper, FBActivitySharingComposition, FBActivitySharingFlowExperimentContext, FBUserSession, NSArray, NSDictionary, NSString;
@protocol FBActivitySharingPickerDataSourceProtocol;

@interface FBActivitySharingFlowManager : NSObject
{
    id <FBActivitySharingPickerDataSourceProtocol> _placePickerDataSource;
    id <FBActivitySharingPickerDataSourceProtocol> _activityPickerDataSource;
    id <FBActivitySharingPickerDataSourceProtocol> _peoplePickerDataSource;
    FBActivitySharingComposition *_composition;
    FBActivitySharingFlowExperimentContext *_flowExperiment;
    FBUserSession *_session;
    NSDictionary *_classNameToPickerMap;
    id <FBActivitySharingPickerDataSourceProtocol> _entryDataSource;
    FBActivitySharingBootstrapper *_bootstrapper;
    id <FBActivitySharingPickerDataSourceProtocol> _activeDataSource;
    NSString *_title;
    NSArray<FBActivitySharingPickerDataSourceProtocol> *_orderedDataSources;
}

@property(readonly, copy, nonatomic) NSArray<FBActivitySharingPickerDataSourceProtocol> *orderedDataSources; // @synthesize orderedDataSources=_orderedDataSources;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) id <FBActivitySharingPickerDataSourceProtocol> activeDataSource; // @synthesize activeDataSource=_activeDataSource;
- (void).cxx_destruct;
- (BOOL)shouldEnableNextButton;
- (BOOL)shouldHideNextButton;
- (BOOL)shouldCreateNextButton;
- (id)titleForEntryPoint:(int)arg1;
- (id)_dataSourcesOrderedForEntryPoint:(int)arg1;
- (unsigned int)numberOfFilledInDataSources;
- (unsigned int)numberOfVisibleDataSources;
- (id)potentialFlowDestinationDataSource:(id)arg1;
- (BOOL)_shouldOpenEntryPointDataSource;
- (unsigned int)indexOfVisibleDataSource:(id)arg1;
- (unsigned int)indexOfDataSource:(id)arg1;
- (id)initWithEntryPoint:(int)arg1 session:(id)arg2 bootstrapper:(id)arg3 composition:(id)arg4 placePickerDataSource:(id)arg5 activityPickerDataSource:(id)arg6 peoplePickerDataSource:(id)arg7;

@end

