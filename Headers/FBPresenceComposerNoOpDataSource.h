//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPresenceComposerDataSource-Protocol.h"

@class NSString;

@interface FBPresenceComposerNoOpDataSource : NSObject <FBPresenceComposerDataSource>
{
    NSString *_typeaheadSessionID;
}

@property(copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
- (void).cxx_destruct;
- (void)stopUpdating;
- (id)searchResultAtIndex:(unsigned int)arg1;
- (unsigned int)countOfSearchResults;
- (void)setSearchQuery:(id)arg1;
- (id)searchQuery;
- (void)fetchSearchResults;

@end

