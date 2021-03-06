//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBMMessage, FBMThreadKey, NSString;

@interface FBMThreadMessageUpdate : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBMMessage *_add_message;
    NSString *_delete_messageId;
    FBMThreadKey *_delete_threadKey;
}

+ (id)deleteWithMessageId:(id)arg1 threadKey:(id)arg2;
+ (id)addWithMessage:(id)arg1;
- (void).cxx_destruct;
- (void)matchAdd:(CDUnknownBlockType)arg1 delete:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

