//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBFacepileView, FBFacepileViewItem;

@protocol FBFacepileViewDelegate <NSObject>

@optional
- (void)facepileView:(FBFacepileView *)arg1 didSelectItem:(FBFacepileViewItem *)arg2 itemAtIndex:(int)arg3;
- (void)facepileView:(FBFacepileView *)arg1 didFetchItem:(FBFacepileViewItem *)arg2 itemAtIndex:(int)arg3;
@end

