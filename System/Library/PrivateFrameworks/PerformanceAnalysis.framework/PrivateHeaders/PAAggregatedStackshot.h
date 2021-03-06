//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PAAggregatedStackshot : NSObject
{
    NSMutableArray *_taskData;
    NSMutableArray *_pidsToTrack;
    unsigned int _numStackshots;
    BOOL _symbolicated;
    NSMutableArray *_rawStackshots;
    BOOL _shouldSaveStackshots;
}

+ (id)pidsForName:(id)arg1;
@property BOOL shouldSaveStackshots; // @synthesize shouldSaveStackshots=_shouldSaveStackshots;
- (id)newAggregatedStackshotFromSamplesBetweenStartInSec:(double)arg1 andEndInSec:(double)arg2;
- (id)stackshotString;
- (void)_addNewStackshot:(id)arg1;
- (void)dealloc;
- (void)grabSample;
- (void)addToTrackedPids:(int)arg1;
- (id)init;
- (void)symbolicate;
- (void)trackProcessesWithName:(id)arg1;
- (id)tasks;
- (unsigned int)numStackshots;

@end

