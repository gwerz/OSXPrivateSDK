//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapAccess, GEOMapTileFinder, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOMapEdgeConnectionFinder : GEOMapRequest
{
    GEOMapAccess *_map;
    GEOMapTileFinder *_tileFinder;
    NSMutableArray *_builders;
    CDStruct_f8e839fc _edgeFrom;
    CDStruct_2c43369c _coordinateFrom;
}

- (id).cxx_construct;
- (void)findConnections:(CDUnknownBlockType)arg1;
- (void)_findOutgoingEdges:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithMap:(id)arg1 edgeFrom:(const CDStruct_f8e839fc *)arg2 coordinateFrom:(CDStruct_c3b9c2ee)arg3;

@end

