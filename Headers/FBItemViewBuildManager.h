//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBItemContentViewConfigBuilder, FBItemViewConfigBuilder;

@interface FBItemViewBuildManager : NSObject
{
    FBItemViewConfigBuilder *_builder;
    FBItemContentViewConfigBuilder *_contentBuilder;
}

+ (id)managerForView:(id)arg1;
+ (id)managerIgnoringClassLevelOverrides;
+ (id)manager;
+ (id)_newWithConfig:(id)arg1 contentConfig:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) FBItemContentViewConfigBuilder *contentBuilder; // @synthesize contentBuilder=_contentBuilder;
@property(retain, nonatomic) FBItemViewConfigBuilder *builder; // @synthesize builder=_builder;
- (void).cxx_destruct;
- (struct CGSize)threadSafeSizeThatFits:(struct CGSize)arg1;
- (id)buildView;
- (id)buildConfig;
- (void)applyToView:(id)arg1;
- (void)loadFromView:(id)arg1;
- (id)_initWithConfig:(id)arg1 contentConfig:(id)arg2;
- (id)_init;

@end

