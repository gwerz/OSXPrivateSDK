//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (FI_Additions)
+ (id)dateWithUTCDateTime_FI:(const struct UTCDateTime *)arg1;
+ (id)tomorrow_FI;
+ (id)today_FI;
+ (id)yesterday_FI;
+ (struct TCachedRelativeDates *)cachedRelativeDates_FI;
+ (void)recomputeCachedRelativeDates_FI;
+ (struct TMutex *)cachedRelativeDateLock_FI;
+ (void)computeTodayYesterdayAndTomorrow_FI:(struct TCachedRelativeDates *)arg1;
+ (id)midnightJan1st1904_FI;
- (struct UTCDateTime)utcDateTime_FI;
- (BOOL)isYesterday_FI;
- (BOOL)isToday_FI;
@end

