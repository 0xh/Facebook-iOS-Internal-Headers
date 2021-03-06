//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBProfileSectionController-Protocol.h"

@class NSString;
@protocol FBSectionedDataSourceWriting;

@interface FBProfileSectionProtileBottomLabelController : NSObject <FBProfileSectionController>
{
    id <FBSectionedDataSourceWriting> _writeInterface;
    BOOL _hasBeenInserted;
    NSString *_uniqueIdentifier;
    unsigned int _sectionStartIndex;
}

@property(nonatomic) unsigned int sectionStartIndex; // @synthesize sectionStartIndex=_sectionStartIndex;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (void)showBottomLabel;
@property(readonly, nonatomic) unsigned int numberOfSections;
- (id)initWithUniqueIdentifier:(id)arg1 writeInterface:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

