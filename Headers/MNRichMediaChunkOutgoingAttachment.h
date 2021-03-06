//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBOutgoingAttachment-Protocol.h"

@class NSData, NSString;

@interface MNRichMediaChunkOutgoingAttachment : NSObject <FBOutgoingAttachment>
{
    NSData *_attachmentData;
    NSString *_attachmentFilename;
    NSString *_mimeType;
}

@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSString *attachmentFilename; // @synthesize attachmentFilename=_attachmentFilename;
@property(readonly, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
- (void).cxx_destruct;
- (id)initWithAttachmentData:(id)arg1 andChunkIndex:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

