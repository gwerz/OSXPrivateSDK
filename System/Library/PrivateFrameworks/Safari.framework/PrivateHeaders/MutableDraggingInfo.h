//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDraggingInfo.h"

@class NSImage, NSPasteboard, NSWindow;

__attribute__((visibility("hidden")))
@interface MutableDraggingInfo : NSObject <NSDraggingInfo>
{
    NSWindow *draggingDestinationWindow;
    unsigned long long draggingSourceOperationMask;
    struct CGPoint draggingLocation;
    NSImage *draggedImage;
    NSPasteboard *draggingPasteboard;
    id draggingSource;
}

- (void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
@property long long numberOfValidItemsForDrop;
@property BOOL animatesToDestination;
@property long long draggingFormation;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
- (long long)draggingSequenceNumber;
- (void)setDraggingSource:(id)arg1;
- (id)draggingSource;
- (void)setDraggingPasteboard:(id)arg1;
- (id)draggingPasteboard;
- (void)setDraggedImage:(id)arg1;
- (id)draggedImage;
- (struct CGPoint)draggedImageLocation;
- (void)setDraggingLocation:(struct CGPoint)arg1;
- (struct CGPoint)draggingLocation;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1;
- (unsigned long long)draggingSourceOperationMask;
- (void)setDraggingDestinationWindow:(id)arg1;
- (id)draggingDestinationWindow;
- (void)dealloc;

@end

