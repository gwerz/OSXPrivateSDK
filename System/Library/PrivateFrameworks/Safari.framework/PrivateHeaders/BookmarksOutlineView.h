//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/OutlineViewPlus.h>

@class NSSearchField, SidebarSearchFieldView;

__attribute__((visibility("hidden")))
@interface BookmarksOutlineView : OutlineViewPlus
{
    BOOL _handlingMouseDown;
    SidebarSearchFieldView *_searchFieldView;
}

+ (id)_dropHighlightColorForEntireTableView;
@property(nonatomic, getter=isHandlingMouseDown) BOOL handlingMouseDown; // @synthesize handlingMouseDown=_handlingMouseDown;
- (double)_totalHeightOfTableView;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(nonatomic) id <BookmarksOutlineViewDelegate> delegate;
@property(readonly, nonatomic) SidebarSearchFieldView *searchFieldView;
@property(readonly, nonatomic) NSSearchField *searchField;
- (id)initWithCoder:(id)arg1;

@end

