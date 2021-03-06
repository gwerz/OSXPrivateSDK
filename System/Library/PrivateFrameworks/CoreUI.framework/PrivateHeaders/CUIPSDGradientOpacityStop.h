//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIPSDGradientStop.h>

#import "NSCoding.h"

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding>
{
    double opacity;
}

+ (id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2;
+ (void)initialize;
- (id)description;
- (BOOL)isOpacityStop;
- (double)opacityLocation;
- (double)opacity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(double)arg1 opacity:(double)arg2;

@end

