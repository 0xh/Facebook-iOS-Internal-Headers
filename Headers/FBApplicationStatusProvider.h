//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBApplicationStatusSnapshot, FBStateTimeIntervalsManager, NSFileManager, NSString, UIWindow;

@interface FBApplicationStatusProvider : NSObject
{
    FBStateTimeIntervalsManager *_timeManager;
    unsigned int _numberOfMemoryWarnings;
    BOOL _previousStatusSnapshotIsValid;
    FBApplicationStatusSnapshot *_previousStatusSnapshot;
    double _lastStatusSnapshotSec;
    NSFileManager *_fileManager;
    struct Mutex _UIMutex;
    NSString *_lastModuleClassName;
    NSString *_lastModule;
    NSString *_lastModuleEntityType;
    NSString *_moduleOnMemoryWarning;
    NSString *_moduleClassOnMemoryWarning;
    NSString *_lastAccessedURL;
    UIWindow *_rootWindow;
}

+ (id)defaultSnapshot;
@property __weak UIWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
@property(copy, nonatomic) NSString *lastAccessedURL; // @synthesize lastAccessedURL=_lastAccessedURL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_topViewController;
- (void)updateTopViewController:(unsigned int)arg1;
- (void)updateUIData;
- (id)statusFromPreviousRun;
- (void)addDeviceStatusToDictionary:(id)arg1;
- (id)snapshotFromData:(id)arg1;
- (id)dataFromSnapshot:(id)arg1;
- (id)loadStatusSnapshot;
- (void)loadPreviousStatusSnapshotIfNeeded;
- (void)saveStatusSnapshot:(id)arg1;
- (void)appReceivedMemoryWarning;
- (id)createStatusSnapshot;
- (id)initWithTimeManager:(id)arg1 fileManager:(id)arg2;
- (id)initWithTimeManager:(id)arg1;

@end

