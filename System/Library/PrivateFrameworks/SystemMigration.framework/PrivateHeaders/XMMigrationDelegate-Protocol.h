//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSError, NSNumber, NSString;

@protocol XMMigrationDelegate
- (void)migrationFinishedWithError:(NSError *)arg1 warnings:(NSArray *)arg2;
- (void)migrationDidBecomeCancellable;
- (void)migrationWillBecomeNonCancellable;
- (void)migrationUpdatedMinutesRemaining:(NSNumber *)arg1;
- (void)migrationUpdatedPercentComplete:(NSNumber *)arg1;
- (void)migrationUpdatedStatusText:(NSString *)arg1;
- (void)migrationStarted;
@end

