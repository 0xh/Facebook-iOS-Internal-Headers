//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FBProgressViewUpdatePolicy <NSObject>
- (BOOL)animated;
- (float)incrementForCurrentProgress:(float)arg1;
- (double)updateInterval;

@optional
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock;
@end

