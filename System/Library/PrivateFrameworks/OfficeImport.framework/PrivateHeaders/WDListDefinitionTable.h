//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WDDocument, WDListDefinition;

__attribute__((visibility("hidden")))
@interface WDListDefinitionTable : NSObject
{
    NSMutableArray *mListDefinitions;
    struct __CFDictionary *mListDefinitionMap;
    unsigned int mNextIdIndex;
    WDDocument *mDocument;
    WDListDefinition *mLastKnownGoodListDefinition;
}

- (id)definitionWithId:(long long)arg1;
- (id)addDefinition:(long long)arg1;
- (id)addDefinition;
- (id)definitionAt:(unsigned long long)arg1;
- (unsigned long long)definitionCount;
- (id)document;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (void)setLastKnowGoodListDefinition:(id)arg1;
- (int)nextId;

@end

