//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class FI_TListViewController, NSImageView;

__attribute__((visibility("hidden")))
@interface FI_TListNameCellView : NSTableCellView
{
    FI_TListViewController *_controller;
    BOOL _becomingFirstResponder;
    NSImageView *_tagsView;
    _Bool _hasSpaceForTagImage;
    _Bool _isResizing;
}

@property _Bool hasSpaceForTagImage; // @synthesize hasSpaceForTagImage=_hasSpaceForTagImage;
@property(retain, nonatomic) NSImageView *tagsView; // @synthesize tagsView=_tagsView;
@property(nonatomic) FI_TListViewController *controller; // @synthesize controller=_controller;
- (void)updateSpaceForTagImage:(_Bool)arg1;
- (void)updateTagsImageForNode:(const struct TFENode *)arg1 selected:(_Bool)arg2;
- (struct CGSize)idealSize;
- (void)layout;
- (struct CGRect)calcTagViewFrame;
- (struct CGRect)calcIconViewFrame;
- (void)viewDidEndLiveColumnResize;
- (void)viewWillStartLiveColumnResize;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)_viewDidEndLiveResize;
- (void)_viewWillStartLiveResize;
- (id)fontSmoothingBackgroundColor;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (BOOL)canSmoothFontsInLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

