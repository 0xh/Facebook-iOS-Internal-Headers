//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBExpandableMapNode, FBRichStoryMapTourCameraConfiguration, MKMapView;

@protocol FBExpandableMapNodeDelegate <NSObject>

@optional
- (void)expandableMapNodeDidDisplaySnapshot:(FBExpandableMapNode *)arg1;
- (void)expandableMapNode:(FBExpandableMapNode *)arg1 didFinishMovingToTourCamera:(FBRichStoryMapTourCameraConfiguration *)arg2;
- (BOOL)expandableMapNodeAllowedUserInteraction:(FBExpandableMapNode *)arg1;
- (void)expandableMapNode:(FBExpandableMapNode *)arg1 didFinishRenderingMapView:(MKMapView *)arg2;
@end

