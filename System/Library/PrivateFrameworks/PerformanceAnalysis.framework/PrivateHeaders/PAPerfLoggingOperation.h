//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PAAggregatedStackshot;

@interface PAPerfLoggingOperation : NSObject
{
    NSString *_operationName;
    NSString *_operationCategory;
    NSString *_processName;
    int _pid;
    NSMutableArray *_intervalList;
    NSMutableDictionary *_dictionaryOfIntervalTypesEventArrays;
    NSMutableArray *_intervalTypesSeenOrder;
    double _startTimeInSec;
    double _endTimeInSec;
    unsigned long long _startUpdateCount;
    unsigned long long _endUpdateCount;
    unsigned long long _serialNumber;
    unsigned int _conn_id;
    struct CGSPerformanceHistogram _startUpdateHistogram;
    struct CGSPerformanceHistogram _endUpdateHistogram;
    NSDictionary *_intervalDataDictionary;
    NSMutableDictionary *_contextProcessingConfigurationsForAllIntervalTypes;
    PAAggregatedStackshot *_stackshotTimeline;
}

+ (id)keyForProcessName:(id)arg1 operationCategory:(id)arg2 andOperationName:(id)arg3;
+ (unsigned long long)_nextSerialNumber;
+ (struct msgtracer_domain *)_messageTracerLoggingDomain;
@property(readonly) PAAggregatedStackshot *stackshotTimeline; // @synthesize stackshotTimeline=_stackshotTimeline;
@property(readonly) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly) double endTimeInSec; // @synthesize endTimeInSec=_endTimeInSec;
@property(readonly) double startTimeInSec; // @synthesize startTimeInSec=_startTimeInSec;
@property unsigned long long endUpdateCount; // @synthesize endUpdateCount=_endUpdateCount;
@property unsigned long long startUpdateCount; // @synthesize startUpdateCount=_startUpdateCount;
@property(copy, nonatomic) NSString *operationCategory; // @synthesize operationCategory=_operationCategory;
@property(readonly) int pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
- (void)sampleNow;
- (void)addProcessNameToSample:(id)arg1;
- (void)disableSampling;
- (void)enableSampling;
- (BOOL)setContextProcessingConfiguration:(id)arg1 forIntervalType:(id)arg2;
- (id)stringForIntervalEventTimeline;
- (void)markIntervalTransition:(id)arg1 transitionType:(int)arg2 atCGSTimestampInSec:(double)arg3 withContext:(id)arg4;
- (id)operationKey;
- (void)logIntervalData:(BOOL)arg1;
- (BOOL)addOperationDataToAggregatedSystemMetrics;
- (id)getIntervalDataDictionary;
- (void)_addResultsForIntervalsToResultsDict:(id)arg1;
- (id)_processIntervalEventStream:(id)arg1 withContextProcessingConfiguration:(id)arg2;
@property(readonly) struct CGSPerformanceHistogram *endUpdateHistogram;
@property(readonly) struct CGSPerformanceHistogram *startUpdateHistogram;
- (void)dealloc;
- (id)initWithProcessName:(id)arg1 andOperationCategory:(id)arg2 andOperationName:(id)arg3 andPid:(int)arg4;
- (unsigned long long)_grabHistogramNow:(struct CGSPerformanceHistogram *)arg1 withTimeStampOut:(double *)arg2;
- (BOOL)markOperationEnd;
- (BOOL)_markOperationStart;
- (double)operationDurationInMs;
- (struct __aslmsg *)_newMessageTracerMessageInitializedWithOperationInfo;

@end

