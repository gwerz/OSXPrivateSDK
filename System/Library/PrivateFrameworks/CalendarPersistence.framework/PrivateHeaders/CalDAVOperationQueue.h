//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalDAVPrincipal, NSCountedSet, NSMutableArray;

@interface CalDAVOperationQueue : NSObject
{
    BOOL _stopped;
    BOOL _needsAccountPropertyRefresh;
    CalDAVPrincipal *_principal;
    NSMutableArray *_operations;
    NSMutableArray *_failedOperations;
    NSCountedSet *_entityCountedSet;
}

- (id)description;
- (BOOL)hasPendingOperationFor:(id)arg1;
- (void)transferDependencyGraphOfOperation:(id)arg1 toOperation:(id)arg2;
- (void)removeDependentOperationsFromQueue:(id)arg1;
- (void)removeFromQueue:(id)arg1;
- (id)principalIDAsString;
- (id)principal;
- (BOOL)isBusy;
- (BOOL)isPendingRetry;
- (BOOL)isStalled;
- (BOOL)isStopped;
- (void)start;
- (void)stop;
- (void)setNeedsAccountPropertyRefresh:(BOOL)arg1;
- (BOOL)needsAccountPropertyRefresh;
- (void)beginNextOperation;
- (void)flattenOperationDependencies;
- (id)allOperations;
- (id)peek;
- (id)nextOperationNotCurrentlyRunning;
- (void)removeOperationAndRefresh:(id)arg1;
- (void)removeAndRevertOperation:(id)arg1;
- (void)tryOperationAgain:(id)arg1;
- (void)detectSyncMalfunctions;
- (void)completeOperation:(id)arg1;
- (void)removeOperation:(id)arg1 removeEntities:(BOOL)arg2;
- (void)removeOperation:(id)arg1;
- (void)reorderFailedOperation:(id)arg1;
- (void)dequeueOperation:(id)arg1;
- (void)enqueueOperation:(id)arg1;
- (void)insertOperation:(id)arg1;
- (id)_operationAtIndex:(unsigned long long)arg1;
- (void)_removeOperationToCountedSet:(id)arg1;
- (void)_addOperationToCountedSet:(id)arg1;
- (void)dealloc;
- (id)initWithPrincipal:(id)arg1;

@end

