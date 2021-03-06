//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMailbox, NSMutableDictionary;

@interface MFUnreadCountQueryObserver : NSObject
{
    struct __MDQuery *_query;
    MFMailbox *_mailbox;
    NSMutableDictionary *_seenIDs;
    NSMutableDictionary *_messageIDsFromAttachments;
    BOOL _queryIsCancelled;
    BOOL _useTotalCount;
    BOOL _checkWhereFromsPaths;
    long long _nextIndexToProcess;
}

@property(nonatomic) BOOL checkWhereFromsPaths; // @synthesize checkWhereFromsPaths=_checkWhereFromsPaths;
@property BOOL useTotalCount; // @synthesize useTotalCount=_useTotalCount;
@property long long nextIndexToProcess; // @synthesize nextIndexToProcess=_nextIndexToProcess;
@property BOOL queryIsCancelled; // @synthesize queryIsCancelled=_queryIsCancelled;
@property(readonly, nonatomic) NSMutableDictionary *messageIDsFromAttachments;
@property(readonly, nonatomic) NSMutableDictionary *seenIDs;
- (void)clearMailbox;
- (id)mailbox;
- (struct __MDQuery *)query;
- (void)dealloc;
- (id)initWithMailbox:(id)arg1 query:(struct __MDQuery *)arg2 useTotalCount:(BOOL)arg3;

@end

