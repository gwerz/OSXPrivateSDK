//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CALRedBlackTree : NSObject
{
    struct RBNode *_root;
    long long _count;
}

- (long long)count;
- (id)description;
- (id)allNodes;
- (id)nodesStartingAt:(id)arg1 endingBefore:(id)arg2;
- (void)removeObjectsStartingAt:(id)arg1 endingBefore:(id)arg2;
- (void)_recursiveTraverseKeysFromNode:(struct RBNode *)arg1 intoArray:(id)arg2 startingAtOrAfterKey:(id)arg3 stoppingBeforeKey:(id)arg4;
- (void)_recursiveTraverseFromNode:(struct RBNode *)arg1 intoArray:(id)arg2 startingAtOrAfterKey:(id)arg3 stoppingBeforeKey:(id)arg4;
- (void)_recursiveTraverseFromNode:(struct RBNode *)arg1 intoArray:(id)arg2;
- (id)nodeAtOrAboveKey:(id)arg1;
- (id)nodeAtOrBelowKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (struct RBNode *)_recursiveRemoveNodeWithKey:(id)arg1 fromNode:(struct RBNode *)arg2 isDone:(char *)arg3;
- (struct RBNode *)_balanceAfterRemove:(struct RBNode *)arg1 isRight:(BOOL)arg2 isDone:(char *)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (struct RBNode *)_recursiveSmallestNodeWithKeyGreaterThanOrEqualTo:(id)arg1 fromNode:(struct RBNode *)arg2;
- (struct RBNode *)_recursiveLargestNodeWithKeyLessThanOrEqualTo:(id)arg1 fromNode:(struct RBNode *)arg2;
- (struct RBNode *)_recursiveFindNodeWithKey:(id)arg1 fromNode:(struct RBNode *)arg2;
- (BOOL)_recursiveInsertNode:(struct RBNode *)arg1 fromNode:(struct RBNode *)arg2;
- (void)_rebalanceFromNode:(struct RBNode *)arg1;
- (struct RBNode *)_leftRotate:(struct RBNode *)arg1;
- (struct RBNode *)_rightRotate:(struct RBNode *)arg1;
- (void)dealloc;
- (void)_recursiveDeallocate:(struct RBNode *)arg1;

@end

