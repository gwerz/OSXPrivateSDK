//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDateRange;

@interface CalCompositeDateRange : NSObject
{
    CalDateRange *_earlierRange;
    CalDateRange *_laterRange;
}

@property(retain) CalDateRange *laterRange; // @synthesize laterRange=_laterRange;
@property(retain) CalDateRange *earlierRange; // @synthesize earlierRange=_earlierRange;
- (void)dealloc;
- (BOOL)partialOverlap;

@end

