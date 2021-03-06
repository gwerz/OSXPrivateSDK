//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTrackableOutlineView.h"

@class FI_TTableViewShrinkToFitController;

__attribute__((visibility("hidden")))
@interface FI_TSidebarView : NSTrackableOutlineView
{
    BOOL _shouldHandleCommandClickOnMouseUp;
    BOOL _keyOnMouseDown;
    BOOL _shouldCancelPendingInvoke;
    BOOL _handlingCmdMouseDown;
    BOOL _handlingItemClick;
    struct TRef<CGImage *, TRetainReleasePolicy<CGImageRef>> _liveResizeCache;
    struct CGRect _lastLiveResizeRect;
    BOOL _generatingLiveResizeCache;
    FI_TTableViewShrinkToFitController *_stfController;
}

@property(nonatomic) BOOL generatingLiveResizeCache; // @synthesize generatingLiveResizeCache=_generatingLiveResizeCache;
@property(nonatomic) BOOL handlingItemClick; // @synthesize handlingItemClick=_handlingItemClick;
@property(nonatomic) BOOL keyOnMouseDown; // @synthesize keyOnMouseDown=_keyOnMouseDown;
@property(nonatomic) BOOL shouldCancelPendingInvoke; // @synthesize shouldCancelPendingInvoke=_shouldCancelPendingInvoke;
@property(nonatomic) BOOL shouldHandleCommandClickOnMouseUp; // @synthesize shouldHandleCommandClickOnMouseUp=_shouldHandleCommandClickOnMouseUp;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (id)stfEditorController_FI;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)cancelPendingInvoke;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)_wantsLiveResizeToUseCachedImage;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldUseLiveResizeCache;
- (void)rowHit:(long long)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDraggedWorkaround;
- (void)deselectRow:(long long)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)controller;
- (void)finalize;
- (void)dealloc;

@end

