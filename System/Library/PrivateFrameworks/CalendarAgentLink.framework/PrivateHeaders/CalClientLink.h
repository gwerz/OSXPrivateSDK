//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class NSMutableSet, NSXPCListener;

@interface CalClientLink : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    id <CalendarAgent> _exportedObject;
}

+ (void)sendToOtherClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (void)sendToOtherClients:(SEL)arg1 withObject:(id)arg2;
+ (void)sendToOtherClients:(SEL)arg1;
+ (void)sendToClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (void)sendToClients:(SEL)arg1 withObject:(id)arg2;
+ (void)sendToClients:(SEL)arg1;
+ (id)startWithProxy:(id)arg1;
+ (id)sharedInstance;
- (void)_sendToClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 skipCurrentConnection:(BOOL)arg4;
- (void)_sendToClients:(SEL)arg1 withObject:(id)arg2 skipCurrentConnection:(BOOL)arg3;
- (void)_sendToClients:(SEL)arg1 skipCurrentConnection:(BOOL)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_removeClientConnection:(id)arg1;
- (void)dealloc;
- (void)tearDown;
- (id)initWithExportedObject:(id)arg1;

@end

