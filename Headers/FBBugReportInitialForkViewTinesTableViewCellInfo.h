//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UITableViewCell;

@interface FBBugReportInitialForkViewTinesTableViewCellInfo : NSObject
{
    UITableViewCell *_cell;
    int _cellHeight;
    NSString *_selectorName;
}

@property(copy, nonatomic) NSString *selectorName; // @synthesize selectorName=_selectorName;
@property int cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (id)initWithCell:(id)arg1 cellHeight:(int)arg2 selectorName:(id)arg3;
- (id)init;

@end

