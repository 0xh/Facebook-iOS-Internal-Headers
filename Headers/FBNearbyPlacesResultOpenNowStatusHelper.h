//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBNearbyPlacesResultOpenNowStatusHelper : NSObject
{
}

+ (BOOL)hasWeekCrossOverForStartDate:(id)arg1 endDate:(id)arg2;
+ (double)adjustedClosedTimeForStartDate:(id)arg1 endDate:(id)arg2;
+ (id)restrictDateToFirstWeekOf1970:(id)arg1;
+ (id)_timeZoneSpecificDateFromGraphQLDate:(id)arg1 withTimeZone:(id)arg2;
+ (id)calendarInLocalTimeZone;
+ (unsigned int)weekDayOrdinalForDate:(id)arg1 calendar:(id)arg2;
+ (id)_dateInGMTFromGraphQLDate:(id)arg1 timeZone:(id)arg2;
+ (id)timeRangesInGMTFromGraphQLTimeRanges:(id)arg1 timeZoneName:(id)arg2;
+ (BOOL)date:(id)arg1 isBetweenStartWeekDayDate:(id)arg2 endWeekDayDate:(id)arg3;
+ (BOOL)isOpenNowForTimeRanges:(id)arg1;

@end

