//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, IIQuerySession;

@protocol IIQuerySessionDelegate <NSObject>
- (void)finishedQuery:(IIQuerySession *)arg1;
- (void)startedQuery:(IIQuerySession *)arg1;

@optional
- (ABAddressBook *)addressBookForQuery:(IIQuerySession *)arg1;
@end

