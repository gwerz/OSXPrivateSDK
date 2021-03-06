//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalendarAgentClient.h"

@interface CalClientProxy : NSObject <CalendarAgentClient>
{
    struct dispatch_group_s *_externalGroup;
    struct dispatch_queue_s *_serialQueue;
}

- (void)calPersistanceNotification:(id)arg1 userInfo:(id)arg2;
- (void)calDavSharedUIDChanged:(id)arg1;
- (void)updatePrincipalConnectedState:(id)arg1 state:(id)arg2;
- (void)testMethod;
- (void)_waitForReady;
- (void)dealloc;
- (id)initWithGroup:(struct dispatch_group_s *)arg1;

@end

