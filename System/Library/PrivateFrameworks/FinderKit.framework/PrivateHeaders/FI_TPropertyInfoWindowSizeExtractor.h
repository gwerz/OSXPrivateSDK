//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TPropertyPhysicalSizeExtractor.h>

__attribute__((visibility("hidden")))
@interface FI_TPropertyInfoWindowSizeExtractor : FI_TPropertyPhysicalSizeExtractor
{
    BOOL _shouldGetItemCount;
}

- (id)computeValue;
- (BOOL)isWaitingForPendingNode:(const struct TFENode *)arg1;
- (int)extractValueFromNode:(const struct TFENode *)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)flush;
- (BOOL)needsUpdateForProperty:(unsigned int)arg1;
- (id)defaultValue;
- (id)init;

@end

