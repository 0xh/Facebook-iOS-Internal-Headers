//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol FBComponentDataSourceScrollEventHandler <NSObject>

@optional
- (BOOL)scrollViewShouldScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffsetPtr:(inout struct CGPoint *)arg3;
@end

