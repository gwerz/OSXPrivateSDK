//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EKProtocolOccurrence.h"

@class NSDate, NSNumber;

@protocol EKProtocolReminderOccurrence <EKProtocolOccurrence>
@property(readonly, nonatomic) BOOL canEditRecurrence;
@property(readonly, nonatomic) BOOL statusCompleteNotByDate;
@property(readonly, nonatomic) NSNumber *orderNumber;
@property(readonly, nonatomic) NSDate *completionDate;
@property(readonly, nonatomic) NSDate *dueDateUnadjustedFromUTC;
@end

