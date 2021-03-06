//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/Window.h>

@class BookmarksUndoController, NSString, TitleBarButton;

__attribute__((visibility("hidden")))
@interface BrowserWindow : Window
{
    NSString *_title;
    TitleBarButton *_titleBarButton;
    BOOL _logAfterNextRedisplay;
    BOOL _ignoresOrderFront;
    BOOL _isCapturingMiniWindowImage;
    BookmarksUndoController *_bookmarksUndoController;
    BOOL _preventCreationOfBookmarksUndoController;
}

+ (id)frontmostWindow;
@property(retain, nonatomic) BookmarksUndoController *bookmarksUndoController; // @synthesize bookmarksUndoController=_bookmarksUndoController;
- (void)removeFromOrderedTabViewItemsAtIndex:(unsigned int)arg1;
- (void)replaceInOrderedTabViewItems:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInOrderedTabViewItems:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInOrderedTabViewItems:(id)arg1;
- (id)orderedTabViewItems;
- (void)setCurrentTabViewItem:(id)arg1;
- (id)currentTabViewItem;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)exitFullScreenMode:(id)arg1;
- (void)enterFullScreenMode:(id)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
@property(nonatomic, getter=isUnbufferedAndLayerBacked) BOOL unbufferedAndLayerBacked;
- (void)sendEvent:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)setIgnoresOrderFront:(BOOL)arg1;
- (BOOL)ignoresOrderFront;
- (void)setWindowController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)undoManager;
- (void)setIsCapturingMiniWindowImage:(BOOL)arg1;
- (BOOL)isMainWindow;
- (BOOL)isKeyWindow;
- (BOOL)showsTitle;
- (void)setShowsTitle:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)close;
- (void)tryToCloseNowThatWindowControllerIsReady;
- (void)__close;
- (void)updateTitle;
- (void)runToolbarCustomizationPalette:(id)arg1;
- (void)displayIfNeeded;
- (void)display;
- (void)logFirstPageLoaded;
- (void)logFirstWindowDrawnAfterNextRedisplay;
- (void)logFirstPageLoadedAfterNextRedisplay;
- (BOOL)willHandleKeyEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (struct CGRect)adjustedFrameForCascade:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)_adjustedFrameForSaving:(struct CGRect)arg1;
- (void)_commonAwake;
- (void)updateCGSWindowTitle;
- (void)keyDown:(id)arg1;
- (void)awakeFromNib;
- (BOOL)_hasActiveControls;
- (void)_installTitleBarButton;
- (void)zoom:(id)arg1;
- (BOOL)_isInFullScreenMode;

@end

