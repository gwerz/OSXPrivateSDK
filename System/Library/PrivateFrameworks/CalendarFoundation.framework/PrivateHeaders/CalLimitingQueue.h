//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalLimitingQueue : NSObject
{
    struct dispatch_queue_s *_queue;
    struct dispatch_source_s *_source;
}

- (void)executeBlock;
- (void)dealloc;
- (id)initWithQueue:(struct dispatch_queue_s *)arg1 andBlock:(CDUnknownBlockType)arg2;

@end

