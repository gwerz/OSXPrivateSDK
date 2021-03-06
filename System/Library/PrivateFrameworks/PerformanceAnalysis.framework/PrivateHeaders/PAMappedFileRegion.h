//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PerformanceAnalysis/PAMemRegion.h>

#import "NSCoding.h"

@class NSString;

@interface PAMappedFileRegion : PAMemRegion <NSCoding>
{
    NSString *shortName;
    NSString *path;
    long long bytesOnDisk;
}

@property long long bytesOnDisk; // @synthesize bytesOnDisk;
@property(retain) NSString *path; // @synthesize path;
@property(retain) NSString *shortName; // @synthesize shortName;
- (id)regionTypeSpecificString;
- (id)residentAndInfoString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithVMRegionInfo:(CDStruct_544688f7 *)arg1 andProcess:(id)arg2;

@end

