//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SOSpeechRecObject : NSObject
{
    id _privateSOSpeechRecObjectVars;
}

- (BOOL)setObject:(id)arg1 forProperty:(unsigned int)arg2 usingDataSize:(long long)arg3;
- (id)objectForProperty:(unsigned int)arg1 usingDataSize:(long long)arg2 withRequestedObjectClass:(Class)arg3;
- (void)logError:(int)arg1;
- (void *)srObjectRef;
- (void)finalize;
- (void)dealloc;
- (id)initWithSRObjectRef:(void *)arg1 andNSRecSystem:(id)arg2 linkToSRObject:(BOOL)arg3;
- (id)recognitionSystem;
- (BOOL)setObject:(id)arg1 forProperty:(unsigned int)arg2;
- (id)objectForProperty:(unsigned int)arg1;

@end

