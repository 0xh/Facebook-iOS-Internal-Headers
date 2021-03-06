//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTInvalidating-Protocol.h"

@class NSString;

@interface RCTJavaScriptContext : NSObject <RCTInvalidating>
{
    RCTJavaScriptContext *_self;
    struct OpaqueJSContext *_ctx;
}

@property(readonly, nonatomic) struct OpaqueJSContext *ctx; // @synthesize ctx=_ctx;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)initWithJSContext:(struct OpaqueJSContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

