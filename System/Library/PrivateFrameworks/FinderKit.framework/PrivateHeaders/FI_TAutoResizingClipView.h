//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSClipView.h"

__attribute__((visibility("hidden")))
@interface FI_TAutoResizingClipView : NSClipView
{
    struct CGSize _globalDocumentViewSize;
    BOOL _autoResizeWidth;
    BOOL _autoResizeHeight;
}

@property BOOL autoResizeHeight; // @synthesize autoResizeHeight=_autoResizeHeight;
@property BOOL autoResizeWidth; // @synthesize autoResizeWidth=_autoResizeWidth;
- (id).cxx_construct;
- (void)viewFrameChanged:(id)arg1;
- (void)setDocumentView:(id)arg1;
- (BOOL)isFlipped;

@end

