//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class FBBugReportInfo, NSMutableDictionary, NSString;

@interface FBBugReportMyBugsItemViewController : UITableViewController
{
    NSString *_bugID;
    FBBugReportInfo *_bug;
    BOOL _wasSent;
    NSMutableDictionary *_overview;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithBugID:(id)arg1 wasSent:(BOOL)arg2;
- (BOOL)fb_showNavigationJewels;
- (id)init;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

@end

