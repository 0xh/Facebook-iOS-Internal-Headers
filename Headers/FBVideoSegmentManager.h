//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "FBVideoBroadcastSessionDelegate-Protocol.h"

@class AVCaptureAudioDataOutput, AVCaptureSession, AVCaptureVideoDataOutput, FBVideoBroadcastSession, FBVideoSegment, FBVideoSegmentEncodeConfig, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, FBVideoBroadcastSessionDelegate, FBVideoSegmentDelegate, OS_dispatch_queue;

@interface FBVideoSegmentManager : NSObject <FBVideoBroadcastSessionDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    CDStruct_1b6d18a9 _recordingStartPTS;
    CDStruct_1b6d18a9 _recordingLastPTS;
    CDStruct_1b6d18a9 _baseTimestamp;
    double _recordedAudioDuration;
    unsigned long _recordedAudioSamples;
    unsigned long _recordedVideoFrames;
    NSMutableDictionary *_videoIngestionLoggingInfo;
    AVCaptureSession *_captureSession;
    AVCaptureVideoDataOutput *_writeVideoOut;
    AVCaptureAudioDataOutput *_writeAudioOut;
    CDUnknownBlockType _stoppedRecordingBlock;
    NSObject<OS_dispatch_queue> *_sampleBufferQueue;
    FBVideoSegmentEncodeConfig *_facecastEncodeConfig;
    FBVideoBroadcastSession *_streamBroadcastSession;
    NSMutableSet *_activeVideoSegments;
    NSMutableSet *_allVideoSegments;
    FBVideoSegment *_nextVideoSegment;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _isPaused
    id <AVCaptureVideoDataOutputSampleBufferDelegate> _videoSampleBufferDelegate;
    id <AVCaptureAudioDataOutputSampleBufferDelegate> _audioSampleBufferDelegate;
    id <FBVideoSegmentDelegate> _videoSegmentDelegate;
    id <FBVideoBroadcastSessionDelegate> _broadcastDelegate;
}

@property(readonly) FBVideoSegmentEncodeConfig *facecastEncodeConfig; // @synthesize facecastEncodeConfig=_facecastEncodeConfig;
@property(nonatomic) __weak id <FBVideoBroadcastSessionDelegate> broadcastDelegate; // @synthesize broadcastDelegate=_broadcastDelegate;
@property(nonatomic) __weak id <FBVideoSegmentDelegate> videoSegmentDelegate; // @synthesize videoSegmentDelegate=_videoSegmentDelegate;
@property(nonatomic) __weak id <AVCaptureAudioDataOutputSampleBufferDelegate> audioSampleBufferDelegate; // @synthesize audioSampleBufferDelegate=_audioSampleBufferDelegate;
@property(nonatomic) __weak id <AVCaptureVideoDataOutputSampleBufferDelegate> videoSampleBufferDelegate; // @synthesize videoSampleBufferDelegate=_videoSampleBufferDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onInterruption;
- (void)broadcastSession:(id)arg1 didDropPackets:(shared_ptr_896bc00e)arg2 dropReason:(id)arg3;
- (void)broadcastSessionSendDidTimeout:(id)arg1;
- (void)broadcastSessionDidLoseConnection:(id)arg1;
- (void)broadcastSessionDidFail:(id)arg1 withError:(id)arg2;
- (void)broadcastSessionDidFinish:(id)arg1;
- (void)broadcastSessionDidStart:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *videoIngestionLoggingInfo;
- (double)networkLatencyInSeconds;
- (void)resumeVideoRecording;
- (void)pauseVideoRecording;
- (void)completeSegment:(id)arg1;
- (void)startFinishingSegment:(id)arg1;
- (void)stopVideoRecording:(CDUnknownBlockType)arg1;
- (void)_finishAllSegments;
- (void)startVideoRecording;
- (BOOL)isConnectionAlive;
- (BOOL)isRecording;
- (void)makeNextSegment:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (double)_segmentDuration;
- (void)_didDropFrameWithType:(id)arg1 pts:(CDStruct_1b6d18a9)arg2 droppedReason:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)newVideoSegment:(int)arg1;
- (void)setCaptureSession:(id)arg1 withVideoOrientation:(int)arg2;
- (id)initWithCaptureSession:(id)arg1 facecastEncodeConfig:(id)arg2 videoOrientation:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

