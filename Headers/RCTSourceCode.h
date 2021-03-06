//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, NSURL, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTSourceCode : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
    NSString *_scriptText;
    NSURL *_scriptURL;
}

+ (id)__rct_export__230;
+ (void)load;
+ (id)moduleName;
@property(copy, nonatomic) NSURL *scriptURL; // @synthesize scriptURL=_scriptURL;
@property(copy, nonatomic) NSString *scriptText; // @synthesize scriptText=_scriptText;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (id)constantsToExport;
- (void)getScriptText:(CDUnknownBlockType)arg1 failureCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

