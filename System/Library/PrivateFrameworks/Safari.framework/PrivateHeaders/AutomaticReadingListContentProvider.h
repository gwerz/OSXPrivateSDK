//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ReadingListTableViewContentProvider.h"
#import "SidebarContentFilterDelegate.h"

@class FilteredCollectionHelper, NSMutableArray, SidebarContentFilter;

__attribute__((visibility("hidden")))
@interface AutomaticReadingListContentProvider : NSObject <SidebarContentFilterDelegate, ReadingListTableViewContentProvider>
{
    NSMutableArray *_cachedItems;
    FilteredCollectionHelper *_filteredCollectionHelper;
    SidebarContentFilter *_contentFilter;
}

+ (void)updateContent;
- (id)_filteredCollectionHelper;
- (void)_itemsChanged:(id)arg1;
- (void)sidebarContentFilterDidCompleteFilterOperation:(id)arg1;
@property(nonatomic) BOOL showsOnlyUnreadItems;
- (void)filterWithSearchString:(id)arg1;
- (BOOL)animateDataSourceChanges;
- (BOOL)itemsAreRemovable;
- (Class)tableCellViewClass;
- (id)itemsChangedNotificationName;
- (id)itemsChangedNotificationObject;
- (id)displayedItemPrecedingItem:(id)arg1;
- (id)displayedItemFollowingItem:(id)arg1;
- (id)displayedItems;
- (id)allReadingListItems;
- (void)dealloc;
@property(readonly, nonatomic) SidebarContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
- (id)init;

@end

