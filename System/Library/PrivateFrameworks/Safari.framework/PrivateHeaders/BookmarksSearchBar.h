//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ColoredRect, NSButton, NSSearchField, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface BookmarksSearchBar : NSView
{
    NSView *nibContainer;
    NSTextField *statusField;
    NSSearchField *searchField;
    NSTextField *scopeButtonsCaption;
    NSButton *searchAllScopeButton;
    NSButton *searchCollectionScopeButton;
    ColoredRect *rightBorder;
    NSString *_singleCollectionScopeTitle;
    int _searchScope;
    unsigned int _matchCount;
    BOOL _showsResizer;
    BOOL _leftToRightLayout;
    id _delegate;
}

+ (double)barHeight;
@property id <BookmarksSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)takeSearchScopeFromButton:(id)arg1;
- (id)singleCollectionScopeTitle;
- (BOOL)showsResizer;
- (void)setSingleCollectionScopeTitle:(id)arg1;
- (void)setShowsResizer:(BOOL)arg1;
- (void)setSearchScope:(int)arg1;
- (void)setMatchCount:(unsigned int)arg1;
- (void)setSearchPlaceholderString:(id)arg1;
- (void)setSearchString:(id)arg1;
- (id)searchString;
- (int)searchScope;
- (void)searchStringChanged:(id)arg1;
- (unsigned int)matchCount;
- (void)removeFromSuperview;
- (void)setNextKeyView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 singleCollectionScopeTitle:(id)arg2;
- (void)focusSearchField;
- (void)clearSearchString;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)resetCursorRects;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (void)_updateStatusFieldVisibility;
- (void)_updateStatusField;
- (void)_updateScopeButtonsVisibility;
- (void)_updateScopeButtonsState;
- (void)_updateSingleCollectionScopeButtonTitle;
- (void)_updateLayout;
- (int)_searchScopeFromDefaults;
- (void)_searchCriteriaChanged;
- (void)_resizeSearchCollectionScopeButtonToFit;
- (struct CGRect)_resizerImageRect;
- (struct CGRect)_resizerHitRect;
- (BOOL)_isBlackToMatchCoverflow;

@end

