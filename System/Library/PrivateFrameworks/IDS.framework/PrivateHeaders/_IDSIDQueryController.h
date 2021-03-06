//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSDaemonListenerProtocol.h"

@class NSMapTable, NSMutableDictionary, NSString;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol>
{
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_transactionIDToBlockMap;
    NSString *_rerouteService;
    struct _xpc_connection_s *_connection;
    struct dispatch_queue_s *_connectionQueue;
    struct dispatch_queue_s *_queue;
    NSString *_serviceToken;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_listenerIDToServicesMap;
    id _delegateContext;
}

- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4;
- (BOOL)_flushQueryCacheForService:(id)arg1;
- (BOOL)_warmupQueryCacheForService:(id)arg1;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (BOOL)_hasCacheForService:(id)arg1;
- (BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(struct dispatch_queue_s *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(BOOL)arg4 queue:(struct dispatch_queue_s *)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 delegateMap:(id)arg2;
- (id)_reroutedPrototypeService:(id)arg1;
- (void)_purgeIDStatusCache;
- (void)_purgeIDStatusCacheAfter:(double)arg1;
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;
- (id)_cacheForService:(id)arg1;
- (id)_squishFromURIFromIDStatusCache:(id)arg1 service:(id)arg2;
- (BOOL)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;
- (void)dealloc;
- (id)initWithDelegateContext:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (id)init;
- (BOOL)removeListenerID:(id)arg1 forService:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (void)daemonDisconnected;
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(BOOL)arg4 error:(id)arg5;
- (void)_connect;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)___oldDealloc;
- (void *)__sendMessage:(void *)arg1 queue:(struct dispatch_queue_s *)arg2 reply:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 waitForReply:(BOOL)arg5;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_requestCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_disconnectFromQueryService;

@end

