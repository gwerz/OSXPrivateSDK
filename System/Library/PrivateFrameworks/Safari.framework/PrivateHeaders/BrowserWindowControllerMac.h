//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/WindowController.h>

#import "BrowserWindowDelegate.h"
#import "ImageHopAnimationDelegate.h"
#import "MorphingDragImageDropTarget.h"
#import "NSMenuDelegate.h"
#import "NSSplitViewDelegate.h"
#import "ReopensAtLaunch.h"
#import "UnifiedFieldDelegate.h"
#import "WBSFluidProgressControllerWindowDelegate.h"
#import "WBSFluidProgressRocketEffectDelegate.h"

@class AutomaticReadingListContentProvider, AuxiliaryToolbarView, BarBackground, BookmarksSidebarTitleTextView, BrowserTabViewItem, BrowserWKView, ClosedTabStateHolder, ColoredRect, FavoritesBarView, NSMapTable, NSMenu, NSMutableArray, NSMutableSet, NSString, NSTabView, NSTextField, NSTextView, NSTimer, NSURL, NSView, OneStepBookmarkingButtonController, ReadingListContentProvider, SidebarButton, SidebarViewController, TabBarEnclosureView, TabBarView, TabLineupViewController, ToolbarController, UnifiedFieldEditor, WBSFluidProgressController;

__attribute__((visibility("hidden")))
@interface BrowserWindowControllerMac : WindowController <MorphingDragImageDropTarget, NSMenuDelegate, UnifiedFieldDelegate, BrowserWindowDelegate, ReopensAtLaunch, NSSplitViewDelegate, ImageHopAnimationDelegate, WBSFluidProgressControllerWindowDelegate, WBSFluidProgressRocketEffectDelegate>
{
    AuxiliaryToolbarView *collapsibleBarsContainerView;
    FavoritesBarView *favoritesBarView;
    TabBarView *tabBarView;
    TabBarEnclosureView *tabBarEnclosureView;
    NSTabView *tabSwitcher;
    BarBackground *statusBar;
    NSTextField *statusTextField;
    NSView *_backdropView;
    SidebarButton *_sidebarButton;
    ToolbarController *_toolbarController;
    UnifiedFieldEditor *_unifiedFieldEditor;
    NSTextView *_fieldEditorWithoutAutomaticSubstitution;
    BookmarksSidebarTitleTextView *_bookmarksSidebarTitleTextView;
    SidebarViewController *_sidebarViewController;
    id _pinchMonitorID;
    TabLineupViewController *_tabLineupViewController;
    NSMutableArray *_tabViewItemsDisplayedInTabLineupView;
    BrowserTabViewItem *_tabViewItemPinnedToOverflowTabBeforeEnteringTabLineup;
    BrowserTabViewItem *_selectedTabViewItemBeforeEnteringTabLineup;
    int _tabLineupState;
    BOOL _finishUninstallingTabLineupViewAfterWindowFinishesResizingInFullScreen;
    int _queuedNavigationDirection;
    struct RefPtr<Safari::UnifiedFieldCompletionController> _unifiedFieldCompletionController;
    NSURL *_completionListURLBeingActivated;
    NSMenu *_dynamicBackMenu;
    NSMenu *_dynamicForwardMenu;
    OneStepBookmarkingButtonController *_oneStepBookmarkingButtonController;
    BOOL _temporaryLocationBar;
    BOOL _editedUnifiedField;
    BOOL _tabBarHiddenByJavaScript;
    BOOL _readyToUpdateKeyboardLoop;
    BOOL _windowWasLoaded;
    BOOL _windowIsClosing;
    BOOL _showingPrivateBrowsingConfirmationSheet;
    NSMutableArray *_topLevelViewOrder;
    NSMutableArray *_collapsibleBarViewOrder;
    NSMapTable *_viewHeightsForResizing;
    NSString *_statusText;
    BOOL _clearStatus;
    BOOL _ellipsizeStatus;
    NSString *_newStatus;
    BOOL _stopAndReloadButtonWillStop;
    BOOL _tabBarShownForTabDrag;
    BOOL _hideToolbarOnEndSheet;
    BOOL _creatingNewTab;
    int _windowType;
    NSTabView *_tabSwitcherForGoBack;
    NSTabView *_tabSwitcherForGoForward;
    ClosedTabStateHolder *_closedTabStateHolder;
    NSTimer *_focusUnifiedFieldAfterTabSwitchTimer;
    NSTimer *_springToFrontTimer;
    NSTimer *_setStatusMessageTimer;
    NSTimer *_setInterpretsAllInputAsURLTimer;
    struct RetainPtr<BrowserWindowPersistentState> _pendingClosedState;
    struct OwnPtr<Safari::ObjCNotifier> _notifier;
    struct OwnPtr<Safari::ExtensionToolbarClientObjCAdapter> _extensionToolbarClientAdapter;
    Vector_a3bfd9bc _extensionBars;
    ColoredRect *_topExtensionDivider;
    ColoredRect *_bottomExtensionDivider;
    int _fullScreenState;
    NSView *_firstResponderViewBeforeFullScreenTransition;
    struct CGRect _windowFrameBeforeFullScreen;
    double _fullScreenAuxiliaryViewMinHeight;
    double _fullScreenAuxiliaryViewMaxHeight;
    BOOL _forceFullScreenAuxiliaryViewMinHeightAsMax;
    BOOL _didLockMenuBarInFullScreen;
    BOOL _shouldShowStatusBarExitingFullScreenMode;
    BOOL _favoritesBarIsVisibleEnteringFullScreen;
    NSMutableSet *_currentAutoShowingBars;
    NSMutableSet *_currentAlwaysShowingBars;
    NSMutableSet *_currentAnimatingBars;
    double _sidebarWidth;
    BOOL _prefersSidebarVisible;
    struct RefPtr<Safari::BrowserWindowController> _browserWindow;
    struct OwnPtr<Safari::IconObserver> _iconObserver;
    NSMutableSet *_imageHopAnimationControllers;
    BrowserTabViewItem *_closingTabView;
    struct CGPoint _lastMouseClickPosition;
    ReadingListContentProvider *_readingListContentProvider;
    WBSFluidProgressController *_fluidProgressController;
    struct RetainPtr<NSArray> _speculativeLoadURLs;
    struct RetainPtr<NSString> _speculativeLoadURLTabLabel;
    BrowserWKView *_speculativeLoadWKView;
    BrowserTabViewItem *_destinationTabViewItemForCommittedSpeculativeLoad;
    struct RetainPtr<NSMutableArray> _speculativeLoadHistoryOperations;
    BOOL _cancelSpeculativeLoadShouldBeIgnored;
    BOOL _didSeeNavigationToSpeculativeLoadURL;
    BOOL _shouldUpdateFocusOnSpeculativeLoadCommit;
    struct BackForwardListItem _currentPageCurrentBackForwardListItem;
    Array_bc1984ad _currentPageBackList;
    struct BackForwardListItem _speculativeLoadPageCurrentBackForwardListItem;
    Array_bc1984ad _speculativeLoadPageBackList;
    NSView *_webContentSnapshotForSidebarAnimation;
    NSView *_backgroundSidebarAnimationView;
    struct SidebarAnimationContext _sidebarAnimationContext;
    NSView *_continuousBannerSidebarAnimationView;
    AutomaticReadingListContentProvider *_automaticReadingListContentProvider;
}

+ (struct BrowserContentViewController *)browserContentViewControllerForNavigationPurposesFor:(struct BrowserContentViewController *)arg1;
+ (id)browserWindowControllerForWindow:(id)arg1;
+ (void)setShouldIgnoreReopen:(BOOL)arg1;
+ (void)reopen;
+ (int)windowPolicyFromNavigationAction:(id)arg1;
+ (int)windowPolicyFromCurrentEventRespectingKeyEquivalents:(BOOL)arg1;
+ (int)windowPolicyFromCurrentEvent;
+ (int)windowPolicyFromCurrentEventRequireCommandKey:(BOOL)arg1;
+ (int)windowPolicyFromEventModifierFlags:(unsigned int)arg1 requireCommandKey:(BOOL)arg2;
+ (int)windowPolicyFromEventModifierFlags:(unsigned int)arg1 isMiddleMouseButton:(BOOL)arg2;
+ (int)windowPolicyFromEventModifierFlags:(unsigned int)arg1 isMiddleMouseButton:(BOOL)arg2 requireCommandKey:(BOOL)arg3;
+ (id)_bookmarksButtonLockedImage;
@property(retain, nonatomic) AutomaticReadingListContentProvider *automaticReadingListContentProvider; // @synthesize automaticReadingListContentProvider=_automaticReadingListContentProvider;
@property(readonly, nonatomic) BrowserTabViewItem *tabViewItemPinnedToOverflowTabBeforeEnteringTabLineup; // @synthesize tabViewItemPinnedToOverflowTabBeforeEnteringTabLineup=_tabViewItemPinnedToOverflowTabBeforeEnteringTabLineup;
@property(nonatomic) BOOL shouldUpdateFocusOnSpeculativeLoadCommit; // @synthesize shouldUpdateFocusOnSpeculativeLoadCommit=_shouldUpdateFocusOnSpeculativeLoadCommit;
@property(readonly, nonatomic, getter=isCreatingNewTab) BOOL creatingNewTab; // @synthesize creatingNewTab=_creatingNewTab;
@property(retain, nonatomic) NSView *continuousBannerSidebarAnimationView; // @synthesize continuousBannerSidebarAnimationView=_continuousBannerSidebarAnimationView;
@property(retain, nonatomic) NSView *backgroundSidebarAnimationView; // @synthesize backgroundSidebarAnimationView=_backgroundSidebarAnimationView;
@property(retain, nonatomic) NSView *webContentSnapshotForSidebarAnimation; // @synthesize webContentSnapshotForSidebarAnimation=_webContentSnapshotForSidebarAnimation;
@property(retain, nonatomic) ReadingListContentProvider *readingListContentProvider; // @synthesize readingListContentProvider=_readingListContentProvider;
@property(nonatomic) BOOL prefersSidebarVisible; // @synthesize prefersSidebarVisible=_prefersSidebarVisible;
@property(readonly, nonatomic) double sidebarWidth; // @synthesize sidebarWidth=_sidebarWidth;
@property(nonatomic) SidebarButton *sidebarButton; // @synthesize sidebarButton=_sidebarButton;
@property(retain, nonatomic) SidebarViewController *sidebarViewController; // @synthesize sidebarViewController=_sidebarViewController;
@property int windowType; // @synthesize windowType=_windowType;
@property(retain, nonatomic) NSView *firstResponderViewBeforeFullScreenTransition; // @synthesize firstResponderViewBeforeFullScreenTransition=_firstResponderViewBeforeFullScreenTransition;
@property(nonatomic) NSView *backdropView; // @synthesize backdropView=_backdropView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_refreshSharedLinks;
- (void)_processApplicationDidHandleMenuActionNotification:(id)arg1;
- (BOOL)_canShowCloudTabsPopover;
- (BOOL)_canShowSharingServicePicker;
- (struct CGPoint)_downloadHopEndPoint;
- (struct CGPoint)_downloadHopStartPoint;
- (void)_startDownloadHopAnimationFromPoint:(struct CGPoint)arg1;
- (void)_downloadDidBegin:(id)arg1;
- (struct CGPoint)_hopAnimationEndPointForDestination:(int)arg1;
- (struct CGPoint)_siteIconHopAnimationStartPoint;
- (struct CGPoint)_readingListHopEndPoint;
- (void)_revealOrCoverSidebar:(int)arg1 animate:(int)arg2;
- (void)_startSidebarRevealAnimation:(int)arg1;
- (BOOL)isSidebarShowing;
- (void)_insertExtensionBars:(const Vector_a3bfd9bc *)arg1 withAnimation:(BOOL)arg2;
- (void)_extensionWasEnabled:(const struct Notification *)arg1;
- (void)_extensionWasDisabled:(const struct Notification *)arg1;
- (BOOL)_anyExtensionBarsVisibleExcludingBar:(const struct ExtensionBar *)arg1 ignoringFullScreen:(BOOL)arg2;
- (BOOL)_anyExtensionBarsVisibleExcludingBar:(const struct ExtensionBar *)arg1;
- (BOOL)_anyExtensionBarsVisibleIgnoringFullScreen:(BOOL)arg1;
- (BOOL)_anyExtensionBarsVisible;
- (void)_setupExtensionBars;
- (void)_setUpExtensionBar:(struct ExtensionBar *)arg1 withFrame:(struct CGRect)arg2;
- (void)_updateExtensionBarDividers;
- (void)_setExtensionBar:(struct ExtensionBar *)arg1 visible:(BOOL)arg2 withAnimation:(BOOL)arg3;
- (void)_setExtensionBarsVisible:(BOOL)arg1;
- (void)_performSpringToFront;
- (void)_cancelSpringToFront;
- (id)_windowContentView;
- (id)_screenForWindow;
- (void)_scheduleSpringToFront;
- (double)_windowWidthForTabSwitcherWidth:(double)arg1;
- (BOOL)_windowIsFullHeight;
- (void)_updateKeyboardLoop;
- (void)_tryMultipleURLs:(PassOwnPtr_9b1dfc96)arg1 windowPolicy:(int)arg2;
- (void)_updateReaderButton:(int)arg1;
- (BOOL)_stopReloadButtonShouldBeVisible;
- (id)_forwardListMenuForButton:(id)arg1;
- (id)_backListMenuForButton:(id)arg1;
- (void)_performUnifiedFieldActionWithWindowPolicy:(int)arg1;
- (void)_performWebSearchWithWindowPolicy:(int)arg1;
- (void)_searchWebForString:(id)arg1 withWindowPolicy:(int)arg2;
- (void)_goToUnifiedFieldURLWithWindowPolicy:(int)arg1;
- (void)_focusUnifiedFieldAfterTabSwitch;
- (BOOL)_canAutoFill;
- (BOOL)_canGoHome;
- (BOOL)_canCreateWebClip;
- (BOOL)_canGoForward;
- (BOOL)_canGoBack;
- (void)_handleNavigationAction:(id)arg1 request:(id)arg2;
- (void)_stopSetStatusMessageTimer;
- (void)_setStatusMessage:(id)arg1 ellipsize:(BOOL)arg2;
- (void)_setStatusMessageNow;
- (void)_clearStatus;
- (id)_defaultStatus;
- (void)_toggleStatusBarWithAnimation:(BOOL)arg1;
- (void)_setUpStatusBar;
- (BOOL)_shouldShowStatusBar;
- (BOOL)_isShowingBar:(id)arg1 ignoringFullScreenAlwaysVisibleBars:(BOOL)arg2;
- (id)_setAutoresizingMasksForOrderedViews:(id)arg1 toResizeOnly:(id)arg2;
- (void)_toggleBar:(id)arg1 withAnimation:(BOOL)arg2 isShowing:(BOOL)arg3 forceMaintainFullHeight:(BOOL)arg4;
- (void)_toggleBar:(id)arg1 withAnimation:(BOOL)arg2 isShowing:(BOOL)arg3;
- (void)_toggleFullScreenBar:(id)arg1 withAnimation:(BOOL)arg2 isShowing:(BOOL)arg3;
- (void)_setMenuBarAutoHidingIsEnabled:(id)arg1;
- (BOOL)_isMenuBarVisibleInThisFullScreenSpace;
- (BOOL)_isTogglingFullScreenBar;
- (void)_resizeBarsWithAuxiliaryToolbarViewOldSize:(struct CGSize)arg1;
- (void)_internalResizeAuxiliaryToolbarViewWithOldSize:(struct CGSize)arg1;
- (void)_unlockMenuBarIfNeeded;
- (void)_lockMenuBarIfNeeded;
- (void)_updateFullScreenAuxiliaryToolbarViewSizes;
- (void)_prepareBarsToExitFullScreen;
- (void)_prepareBarsToEnterFullScreen;
- (void)_toggleToolbarIgnoringCurrentEvent:(id)arg1;
- (void)_completionListHintDidChange:(const struct Notification *)arg1;
- (void)_completionListDidHide:(const struct Notification *)arg1;
- (void)_completionListSelectionDidChange:(const struct Notification *)arg1;
- (void)_completionListDidShow:(const struct Notification *)arg1;
- (id)_urlStringForUnifiedFieldIcon;
- (struct UnifiedFieldCompletionController *)_unifiedFieldCompletionController;
- (void)_stopSetInterpretsAllInputAsURLTimer;
- (void)_setInterpretsAllInputAsURL;
- (void)_stopFocusUnifiedFieldAfterTabSwitchTimer;
- (BOOL)_unifiedFieldIsReflectingUnifiedFieldURL;
- (BOOL)_unifiedFieldIsReflectingCurrentURL;
- (BOOL)_unifiedFieldIsReflectingURL:(id)arg1;
- (BOOL)_unifiedFieldIsShowing;
- (BOOL)_unifiedFieldIsEmpty;
- (BOOL)_setUnifiedFieldNonURLText:(id)arg1;
- (void)_updateUIAfterProgrammaticUnifiedFieldTextChange;
- (void)_updatePageTitleInUnifiedField;
- (BOOL)_unifiedFieldTextLooksLikeWebSearch;
- (id)_unifiedFieldText;
- (id)_unifiedFieldURL;
- (void)_toggleLocationBarWithoutSavingConfiguration;
- (void)_showLocationBarTemporarilyIfHidden;
- (void)_hideLocationBarIfTemporary;
- (BOOL)_makeUnifiedFieldFirstResponder;
- (void)_setUpLocationBar;
- (void)_performUnifiedFieldAction:(id)arg1;
- (BOOL)_currentPageIsSecureEnoughToShowLock;
- (void)_abortUnifiedFieldCompletion;
- (void)_oneTimeSetUpForToggleBookmarksButton;
- (BOOL)_isShowingHistoryInCurrentContentView;
- (BOOL)_isShowingBookmarksInCurrentContentView;
- (BOOL)_isShowingBookmarksAndHistoryCollectionView;
- (BOOL)_canAddBookmark;
- (id)_currentBookmarksViewController;
- (void)_setFavoritesBarNewTabButtonVisibility:(BOOL)arg1;
- (void)_toggleFavoritesBarWithAnimation:(BOOL)arg1;
- (void)_setUpFavoritesBar;
- (BOOL)_shouldShowFavoritesBar;
- (BOOL)_trackSearchButtonForEvent:(id)arg1;
- (void)_recentSearchesCleared:(id)arg1;
- (void)_searchProviderDidChange;
- (void)_updateSearchFieldProviderText;
- (id)_defaultSearchProviderDisplayName;
- (void)_updateUnifiedFieldInputTypeCuesIfNeeded;
- (void)_updateSecurityPillVisibility;
- (BOOL)_shouldShowSecurityPillInUnifiedField;
- (void)_updateWindowWithNewSelectedTabInfoUpdatingFluidProgressController:(BOOL)arg1;
- (void)_updateWindowWithCurrentTabInfoUpdatingFluidProgressController:(BOOL)arg1 shouldUpdateKeyboardLoop:(BOOL)arg2;
- (struct BrowserContentViewController *)_currentBrowserContentViewControllerIncludingTabLineup:(BOOL)arg1;
- (void)_confirmClosingOtherTabsIfAnyAreEdited:(id)arg1;
- (void)_confirmClosingOtherTabsIfAnyAreEditedDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)_confirmClosingEditedTab:(id)arg1;
- (void)_confirmCloseTabForEditedFormDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (id)firstTabWithUnsavedCredentials;
- (id)_firstTabWithUnsavedCredentialsExcludingTab:(id)arg1;
- (BOOL)_displayCloseConfirmation;
- (void)_confirmCloseWindowDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_updateDocumentIsEdited;
- (void)_updateCloseKeyEquivalents;
- (void)_removeTabViewItem:(id)arg1;
- (void)releaseTabSwitcherForGoingForward;
- (void)_releaseTabSwitcherForGoingBack;
- (void)_releaseTabSwitchersForBackForward;
- (void)_releaseTabSwitcher:(id)arg1 andSendWillCloseTabMessages:(BOOL)arg2;
- (id)_replaceTabSwitcher:(id)arg1;
- (void)_removeAllTabCloseUndoActions;
- (void)_undoCloseTabAtIndex:(unsigned long long)arg1 andSelect:(BOOL)arg2;
- (void)_closeWindowIfNoTabs;
- (void)_closeOtherTabsWithoutConfirming:(id)arg1;
- (void)_closeTabWithoutConfirming:(id)arg1 allowUndo:(BOOL)arg2;
- (void)_closeTabWithoutConfirming:(id)arg1;
- (void)_selectTabAtIndex:(int)arg1;
- (void)_selectTab:(id)arg1;
- (void)_didSelectNewTab:(id)arg1 withLastSelectedTab:(id)arg2;
- (void)_willUnselectTab:(id)arg1;
- (void)_reloadTab:(id)arg1;
- (void)_moveTabToNewWindow:(id)arg1;
- (id)_setUpTabForView:(id)arg1 atIndex:(unsigned long long)arg2 andSelect:(BOOL)arg3 withBrowserTab:(struct BrowserTab *)arg4 andIdentifier:(unsigned long long)arg5;
- (void)_insertTab:(id)arg1 atIndex:(unsigned long long)arg2 andSelect:(BOOL)arg3;
- (void)_insertTabFromOtherWindow:(id)arg1 atIndex:(unsigned long long)arg2 andSelect:(BOOL)arg3;
- (struct BrowserContentViewController *)_createTabWithPosition:(int)arg1 andSelect:(BOOL)arg2;
- (id)_createTabWithView:(id)arg1 atIndex:(unsigned int)arg2 andSelect:(BOOL)arg3 withBrowserTab:(struct BrowserTab *)arg4;
- (void)_didInsertTab;
- (void)_willInsertTab;
- (BOOL)_shouldUpdateTabBarAndKeyboardLoopWhenInsertingTab;
- (id)_createTabWithView:(id)arg1 atIndex:(unsigned int)arg2 andSelect:(BOOL)arg3;
- (void)_showTabBarAndUpdateCloseKeyEquivalentsIfNeeded;
- (id)_setUpBackgroundTabAfterLastTabForView:(id)arg1 withIdentifier:(unsigned long long)arg2;
- (void)_automaticallyHideTabBarForTabDrag;
- (void)_automaticallyShowTabBarForTabDrag;
- (void)_setTabBarVisible:(BOOL)arg1;
- (BOOL)_alwaysShowTabBar;
- (BOOL)_canCloseTab:(id)arg1;
- (BOOL)_moreThanOneTabShowing;
- (void)_toggleTabBarWithAnimation:(BOOL)arg1;
- (BOOL)_shouldShowTabBar;
- (void)_setUpTabBar;
- (id)_findTabForView:(id)arg1;
- (struct TabPlacementHint)_currentTabPlacementHint;
- (void)_confirmDisablePrivateBrowsingSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_stopObservingPrivateBrowsingSheetWasCanceledNotifications;
- (void)_startObservingPrivateBrowsingSheetWasCanceledNotifications;
- (void)_postPrivateBrowsingSheetWasCanceledNotification;
- (void)_dismissPrivateBrowsingSheet;
- (BOOL)_isTabViewAnimationInProgress;
- (void)_centerPreviousTabInTabView;
- (void)_centerNextTabInTabView;
- (void)_queueTabViewNavigationDirection:(int)arg1;
- (void)_processQueuedTabViewNavigation;
- (void)_stopPostponingFullScreenSubviewResizing;
- (void)_finishUninstallingTabLineupView;
- (void)_toggleTabBarAfterTabLineupViewDidFinishUninstallingIfNecessary;
- (void)_updateTabBarVisibilityForTabLineup;
- (void)_tearDownPinchEventMonitor;
- (void)_setupPinchEventMonitor;
- (void)_applyNewBrowserViewBehavior:(long long)arg1 usingReferenceBrowserContentViewController:(struct BrowserContentViewController *)arg2;
- (BOOL)_canPrintFromToolbar;
- (void)_tellUserThatAppIsHosed;
- (double)_originalHeightForView:(id)arg1;
- (void)_removeCollapsibleBarView:(id)arg1 needsDisplay:(BOOL)arg2;
- (void)_insertCollapsibleBarView:(id)arg1 atIndex:(unsigned long long)arg2 withOriginalHeight:(double)arg3;
- (void)_collectViewInfoForResizing;
- (void)_iconDidChange:(id)arg1;
- (void)_webPreferencesChanged:(id)arg1;
- (void)_allIconsRemoved;
- (void)_parentalControlsDidChange;
- (void)_makeFirstResponder:(id)arg1;
- (id)_windowURL;
- (id)_barBackgroundFromBar:(id)arg1;
- (id)_attachedSheet;
- (void)_didReplaceBrowserWKViewInTab:(id)arg1 shouldUpdateFluidProgressController:(BOOL)arg2;
- (void)_updateTopSitesLayout;
- (struct BrowserContentViewController *)currentBrowserContentViewControllerForNavigationPurposes;
- (BOOL)continuousPageViewIsHandlingPageTransition;
- (BOOL)isInContinuousMode;
- (void)handlePerformSelectNextOrPreviousTabKeyEquivalentWithEvent:(id)arg1 navigationDirection:(int)arg2;
- (void)sidebarWidthDidChange;
- (double)tabContentTopMarginInTabLineupView;
- (void)tabLineupViewDidSelectTab:(id)arg1;
- (void)hideTabLineupView;
- (void)trackTabLineupPinch;
- (void)showTabLineupViewAnimationDidFinish;
- (void)showTabLineupViewWithEvent:(id)arg1 navigationDirection:(int)arg2;
- (void)showTabLineupViewWithEvent:(id)arg1;
- (id)pinchEventMonitorHandler:(id)arg1;
- (void)toggleTabLineup:(id)arg1;
- (void)detachTabViewItemFromTabSwitcher:(id)arg1;
- (BOOL)isTabLineupViewInstalled;
- (BOOL)isTabLineupViewBeingInstalled;
- (BOOL)isTabLineupEnabled;
- (id)tabLineupViewController;
- (void)updateOneStepBookmarkingButton;
- (void)updateReaderButton;
- (void)updateStatusMessage;
- (BOOL)shouldReaderIgnoreWindowChangeNotificationsForWKView:(id)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)takePendingClosedWindowState;
- (void)updatePendingClosedWindowState;
- (void)sessionStateDidChange;
- (struct BrowserContentViewController *)currentBrowserContentViewControllerIncludingSpeculativeLoad;
- (struct BrowserContentViewController *)speculativeLoadBrowserContentViewControllerForTab:(const struct BrowserTab *)arg1;
- (struct BrowserContentViewController *)currentBrowserContentViewControllerIncludingTabLineup;
- (struct BrowserContentViewController *)currentBrowserContentViewController;
- (struct BrowserWindowController *)browserWindowController;
- (void)bar:(struct ExtensionBar *)arg1 hideWithAnimation:(BOOL)arg2;
- (void)bar:(struct ExtensionBar *)arg1 showWithAnimation:(BOOL)arg2;
- (struct BrowserWindowController *)browserWindowForToolbarItem:(const struct ExtensionToolbarItem *)arg1;
- (struct BrowserWindowController *)browserWindowForBar:(const struct ExtensionBar *)arg1;
- (id)init;
- (void)toolbarItem:(const struct ExtensionToolbarItem *)arg1 handleNavigationAction:(id)arg2 request:(id)arg3;
- (void)bar:(const struct ExtensionBar *)arg1 handleNavigationAction:(id)arg2 request:(id)arg3;
- (BOOL)shouldBlockTabsFromResizing;
- (BOOL)closeKeyEquivalentClosesTab;
- (void)dealloc;
- (void)updateSecurityUI;
- (void)_updateEVButtonForHost:(id)arg1 certificateChain:(id)arg2;
- (void)_updateSecurityPillWithEVCertificateTitle:(id)arg1;
- (void)updateSidebarButton;
- (void)webViewReaderDidDeactivate:(struct BrowserContentViewController *)arg1;
- (void)webViewReaderWillDeactivate:(struct BrowserContentViewController *)arg1;
- (void)webViewReaderDidActivate:(struct BrowserContentViewController *)arg1;
- (void)webViewMainContentViewDidChange:(struct BrowserContentViewController *)arg1;
- (void)webViewDidUpdateReaderAvailability:(struct BrowserContentViewController *)arg1;
- (void)webViewBlockedFromKeyViewLoopHasChanged:(struct BrowserContentViewController *)arg1;
- (void)tabBarViewUpdateTabTitlesNow:(id)arg1;
- (void)tabBarViewUpdateTabTitlesSoon:(id)arg1;
- (void)tabsWereRearranged;
- (void)didSelectTabViewItem;
- (void)willSelectTabViewItem;
- (void)morphingDragImage:(id)arg1 exitedWindow:(id)arg2;
- (void)morphingDragImage:(id)arg1 enteredWindow:(id)arg2;
- (BOOL)morphingDragImage:(id)arg1 performDragOperation:(id)arg2;
- (void)morphingDragImage:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)morphingDragImage:(id)arg1 draggingEntered:(id)arg2;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)unifiedField:(id)arg1 trackSearchButtonForEvent:(id)arg2;
- (void)unifiedField:(id)arg1 mouseUpInSecurityPill:(id)arg2;
- (void)unifiedField:(id)arg1 mouseUpInStopReloadButton:(id)arg2;
- (void)unifiedField:(id)arg1 mouseUpInPrivateBrowsingButton:(id)arg2;
- (BOOL)unifiedFieldShouldSelectAllAfterMouseDown:(id)arg1;
- (void)unifiedFieldPerformPrivateBrowsingButtonAction:(id)arg1;
- (void)unifiedFieldPerformSecurityPillAction:(id)arg1;
- (void)unifiedFieldPerformStopReloadButtonAction:(id)arg1;
- (void)unifiedFieldMarkedTextDidChange:(id)arg1;
- (void)unifiedFieldAutocompleteSelectionDidChange:(id)arg1;
- (void)unifiedFieldBecameFirstResponder:(id)arg1;
- (id)bookmarkToDragFromSiteIconInUnifiedField:(id)arg1;
- (void)unifiedFieldURLDropped:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)_appendSlashAndCollapseSelectionInUnifiedField;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)browserWindow:(id)arg1 shouldGoToURL:(id)arg2;
- (id)browserWindowTitleBarURL:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)_tellAppControllerWindowWillClose;
- (BOOL)windowShouldClose:(id)arg1;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (double)_sheetPositionTop;
- (BOOL)window:(id)arg1 willHandleMouseDownEvent:(id)arg2;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)window:(id)arg1 willHandleKeyEvent:(id)arg2;
- (BOOL)window:(id)arg1 performKeyEquivalent:(id)arg2;
- (void)swipeWithEvent:(id)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowWillOrderOnScreen:(id)arg1;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (struct ExtensionToolbarClientObjCAdapter *)extensionToolbarClient;
- (id)toolbarController;
- (void)makeUnifiedFieldOrWindowFirstResponder;
- (BOOL)unifiedFieldIsFirstResponder;
- (id)unifiedField;
- (BOOL)canShowUnifiedField;
- (void)willShowCustomizeToolbarSheet;
- (void)firstResponderMightHaveChanged;
- (void)windowTitleNeedsUpdate;
- (double)tabBarHeightForSingleTabWindow;
- (double)tabBarHeight;
- (void)updateTabLabelForView:(id)arg1;
- (unsigned long long)numberOfTabs;
- (unsigned long long)numberOfNonDisposableTabs;
- (void)moveTabFromOtherWindow:(id)arg1 toIndex:(unsigned int)arg2 andSelect:(BOOL)arg3;
- (void)moveTab:(id)arg1 toIndex:(unsigned int)arg2;
- (void)replaceEmptyTabWithTabs:(id)arg1;
- (void)replaceTabsWithStates:(const Vector_7bc2839e *)arg1 allowGoBack:(BOOL)arg2 allowJavaScript:(BOOL)arg3 selectTabIndex:(unsigned long long)arg4;
- (void)tryToCloseWindowWhenReady;
- (void)tryToCloseOtherTabs:(id)arg1;
- (void)tryToCloseOtherTabsWhenReady:(id)arg1;
- (void)closeTabWithoutConfirming:(id)arg1;
- (void)closeTabOrWindowWithoutConfirming:(id)arg1;
- (void)tryToCloseTabWhenReady:(id)arg1;
- (void)tryToCloseTab:(id)arg1;
- (void)confirmClosingTabWithUnsavedCredentials:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)selectTab:(id)arg1;
- (BOOL)tryGoToURL:(id)arg1 withTabLabel:(id)arg2;
- (void)addGlobalHistoryOperationForSpeculativeLoad:(id)arg1;
- (BOOL)shouldAllowSpeculativeLoadNavigationForURL:(id)arg1;
- (BOOL)isSpeculativeLoadWKView:(id)arg1;
- (void)_commitToSpeculativeLoadAfterMainDocumentDidFirstVisuallyNonEmptyLayoutUpdatingFluidProgressController:(BOOL)arg1;
- (BOOL)commitToSpeculativeLoad;
- (void)willLoadURLRequestForContentViewController:(struct BrowserContentViewController *)arg1;
- (void)mainDocumentDidFirstVisuallyNonEmptyLayoutForSpeculativeLoad;
- (void)cancelCommittedSpeculativeLoadAndReissueLoadSoon;
- (void)cancelSpeculativeLoadSoon;
- (void)populateOldBackForwardListItemToNewBackForwardListItemMap:(HashMap_9e6db03d *)arg1;
- (void)cancelSpeculativeLoad;
- (void)_discardSpeculativeLoadBackForwardListInformation;
- (BOOL)_updateSpeculativeLoadURLs:(id)arg1 isSpeculative:(BOOL)arg2 withTabLabel:(id)arg3;
- (BOOL)_updateSpeculativeLoadURL:(id)arg1 isSpeculative:(BOOL)arg2 withTabLabel:(id)arg3;
- (void)updateSpeculativeLoadURL:(id)arg1;
- (void)_beginSpeculativeLoad:(BOOL)arg1;
- (void)_loadSpeculativeURLs:(id)arg1 inContentViewController:(struct BrowserContentViewController *)arg2 tabLabelForSingleURL:(id)arg3;
- (void)_closeSpeculativeLoadWKView;
- (void)_copyCurrentSessionStateToSpeculativeLoadWKView;
- (void)forceCommittedSpeculativeLoadInBackgroundToBeShown;
- (BOOL)hasCommittedSpeculativeLoadInBackground;
- (BOOL)hasSpeculativeLoad;
- (struct BrowserContentViewController *)createInactiveTabWithPosition:(int)arg1;
- (struct BrowserContentViewController *)createTabAtIndex:(unsigned long long)arg1 andSelect:(BOOL)arg2;
- (struct BrowserContentViewController *)createTabWithPosition:(int)arg1;
- (unsigned long long)selectedTabIndex;
- (id)selectedTab;
- (struct SearchableWebContentViewController *)currentBrowserOrOverlayContentViewController;
- (id)tabViewItemForWKView:(id)arg1;
- (void)removeFromOrderedTabViewItemsAtIndex:(unsigned int)arg1;
- (void)replaceInOrderedTabViewItems:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInOrderedTabViewItems:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInOrderedTabViewItems:(id)arg1;
- (id)orderedTabContentViews;
- (id)orderedTabViewItems;
- (id)orderedTabs;
- (id)tabBarView;
- (void)downloadFailedToHopToDockFromPoint:(struct CGPoint)arg1;
- (void)setLastMouseClickPosition:(struct CGPoint)arg1;
- (void)toggleDownloadsPopover:(id)arg1;
- (BOOL)isShowingDownloadsPopover;
- (struct CGRect)webViewFrameForWebViewSize:(struct CGSize)arg1;
- (struct UnifiedFieldCompletionController *)UnifiedFieldCompletionController;
- (id)unifiedFieldPlaceholderString;
- (void)showCertificateSheet:(id)arg1;
- (void)_certificateTrustSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)_pageStatusForOneStepAddBookmarkButton;
- (void)mouseLocationChangedForOneStepBookmarkingButton;
- (id)dynamicForwardMenu;
- (id)dynamicBackMenu;
- (id)toolbarViewWindow;
- (void)restoreUnifiedFieldText:(id)arg1;
- (id)unifiedFieldTextForRestoring;
- (BOOL)unifiedFieldIsReflectingSearchTerms;
- (void)searchForString:(id)arg1 withWindowPolicy:(int)arg2;
- (void)searchForString:(id)arg1;
- (void)slideOutFavoritesBarNewTabButtonIfNecessary;
- (void)slideInFavoritesBarNewTabButtonIfNecessary;
- (id)favoritesBarView;
- (BOOL)allowBookmarksChanges;
- (BOOL)isAvailableForForcedLocationUsingWindowPolicy:(int)arg1;
- (struct CGRect)adjustedFrameForCascade:(struct CGRect)arg1 fromWindow:(id)arg2;
- (struct CGRect)adjustedFrameForSaving:(struct CGRect)arg1;
- (void)safariBrowserWindowUpdateStopReloadButtonNow:(struct BrowserWindowController *)arg1;
- (BOOL)safariBrowserWindowUpdateUnifiedFieldTextNow:(struct BrowserWindowController *)arg1;
- (void)safariBrowserWindowUpdateUnifiedFieldProgressBarNow:(struct BrowserWindowController *)arg1;
- (void)safariBrowserWindowUpdateUnifiedFieldIconNow:(struct BrowserWindowController *)arg1;
- (void)safariBrowserWindowUnifiedFieldURLDidChange:(struct BrowserWindowController *)arg1;
- (void)setToolbarsVisible:(BOOL)arg1;
- (BOOL)anyToolbarsVisible;
- (void)setStatusBarVisible:(BOOL)arg1;
- (BOOL)isStatusBarVisible;
- (void)setTabBarVisible:(BOOL)arg1;
- (BOOL)isTabBarVisible;
- (void)setFavoritesBarVisibleEnteringFullScreen:(BOOL)arg1;
- (BOOL)isFavoritesBarVisibleEnteringFullScreen;
- (void)setFullScreenFavoritesBarVisible:(BOOL)arg1;
- (void)setFavoritesBarVisible:(BOOL)arg1;
- (BOOL)isFavoritesBarVisible;
- (void)setLocationBarVisible:(BOOL)arg1;
- (BOOL)isLocationBarVisible;
- (BOOL)frameAutosaveIsAllowed;
- (struct CGRect)defaultFrame;
- (void)synchronizeWindowTitleWithDocumentName;
- (void)setFrameProgrammatically:(struct CGRect)arg1;
- (BOOL)shouldCloseDocument;
- (void)setDocument:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (BOOL)_newWindowShouldBeUnbuffered;
- (id)windowNibName;
- (void)cancel:(id)arg1;
- (void)noResponderFor:(SEL)arg1;
- (BOOL)canCreateNewTab;
- (BOOL)canCloseSelectedTab;
- (BOOL)canReloadTab:(id)arg1;
- (void)showTopSitesWall:(id)arg1;
- (void)createWebClip:(id)arg1;
- (void)imageHopAnimationDidFinish:(id)arg1;
- (id)imageHopParentWindow;
- (void)_startHopAnimationFromPoint:(struct CGPoint)arg1 toDestination:(int)arg2 withImage:(id)arg3;
- (void)_startHopAnimationFromPoint:(struct CGPoint)arg1 withImage:(id)arg2;
- (void)startSiteIconHopAnimationToDestination:(int)arg1;
- (void)startHopAnimationFromPoint:(struct CGPoint)arg1;
- (void)startReadingListHopAnimationFromMouseLocation;
- (void)_startHopAnimationWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 image:(id)arg3;
- (void)_startReadingListHopAnimationUsingStartPoint:(struct CGPoint)arg1 withImage:(id)arg2;
- (void)startReadingListHopAnimationUsingStartPoint:(struct CGPoint)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_cleanUpAfterSidebarHasHidden;
- (id)_sidebarAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)_animateShowingOrHidingSidebar:(id)arg1;
- (void)didCollectPageLayoutInformationForSidebarAnimationBeforeResize;
- (void)_prepareForSidebarAnimation:(int)arg1 destinationSnapshotFrame:(struct CGRect)arg2;
- (void)_setResizableContentContainerSizeForSidebarAnimation:(id)arg1;
- (void)didForceContentRepaintAndCollectPageLayoutInformationForSidebarAnimationAfterResize:(id)arg1;
- (void)sidebarAnimationHasFinished;
- (void)uninstallSidebarWithAnimation:(BOOL)arg1;
- (void)installSidebarWithAnimation:(BOOL)arg1;
- (BOOL)_sidebarAnimationShouldConsultDataFromWebContentLayoutAnalysis;
- (BOOL)_isReaderInstalled;
- (void)_restoreTabLineupViewWidthAfterUninstallingSidebar;
- (void)_shrinkTabLineupViewBySidebarWidth;
- (void)_updateWindowBackgroundHeight;
- (BOOL)isSidebarAnimationInProgress;
- (BOOL)prefersTopSitesSidebarVisible;
- (BOOL)sharedLinksSidebarIsShowing;
- (BOOL)bookmarksSidebarIsShowing;
- (BOOL)readingListSidebarIsShowing;
- (void)toggleSharedLinksSidebar:(id)arg1;
- (void)toggleReadingListSidebar:(id)arg1;
- (void)showReadingListSidebar;
- (void)showHistoryViewAndSearchForString:(id)arg1;
- (void)showHistoryInBookmarksView:(id)arg1;
- (void)toggleHistoryInBookmarksView:(id)arg1;
- (void)toggleBookmarksEditView:(id)arg1;
- (void)toggleBookmarksSidebar:(id)arg1;
- (void)toggleBookmarks:(id)arg1;
- (void)showBookmarksSidebar:(id)arg1;
- (void)_showSidebar:(id)arg1;
- (void)toggleSidebar:(id)arg1;
- (void)toggleCloudTabsPopover:(id)arg1;
- (void)showSharingServicePicker:(id)arg1;
- (void)toggleReader:(id)arg1;
- (void)toggleTabBar:(id)arg1;
- (void)toggleStatusBar:(id)arg1;
- (void)toggleExtensionBar:(id)arg1;
- (void)hideFavoritesBarAfterReadingListAnimation:(id)arg1;
- (void)showFavoritesBarForReadingListAnimation:(id)arg1;
- (void)toggleFavoritesBar:(id)arg1;
- (void)toggleLocationBar:(id)arg1;
- (void)reloadAllTabs:(id)arg1;
- (void)reloadTabFromMenu:(id)arg1;
- (void)moveTabToNewWindowFromMenu:(id)arg1;
- (void)closeOtherTabsFromMenu:(id)arg1;
- (void)closeTabFromMenu:(id)arg1;
- (void)updateSharedLinks:(id)arg1;
- (void)reloadObeyingUnifiedField:(id)arg1;
- (void)reloadIgnoringUnifiedField:(id)arg1;
- (void)_reloadHonoringUnifiedField:(BOOL)arg1;
- (BOOL)canReloadObeyingUnifiedField;
- (BOOL)_unifiedFieldTextIsWorthyOfHonoringOnReload;
- (void)stopLoading:(id)arg1;
- (void)stopOrReload:(id)arg1;
- (void)selectPreviousTab:(id)arg1;
- (void)selectNextTab:(id)arg1;
- (void)selectUnifiedField:(id)arg1;
- (void)printFromToolbar:(id)arg1;
- (void)searchProviderConfirmationDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)performWebSearch:(id)arg1;
- (id)_localSearchStringFromWebSearchString:(id)arg1;
- (void)newTab:(id)arg1;
- (void)moveCurrentTabToNewWindow:(id)arg1;
- (void)zoomToStandardSize:(id)arg1;
- (void)zoomInOrOutFromSegmentedControl:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)goToUnifiedFieldURL:(id)arg1;
- (void)goToActivatedCompletionListURL:(id)arg1;
- (void)goHome:(id)arg1;
- (void)goForwardInWindow:(id)arg1;
- (void)goForwardAndFlashToolbarButton:(id)arg1;
- (void)goBackOrForwardFromSegmentedControl:(id)arg1;
- (void)goBackInWindow:(id)arg1;
- (void)goBackAndFlashToolbarButton:(id)arg1;
- (void)closeInactiveTabs:(id)arg1;
- (void)closeCurrentTab:(id)arg1;
- (void)changeTextEncoding:(id)arg1;
- (void)autoFill:(id)arg1;
- (void)addBookmarkFolder:(id)arg1;
- (void)addBookmark:(id)arg1;
- (void)didReplaceBrowserWKViewInTab:(id)arg1;
@property(readonly, nonatomic) NSView *mainContentView;
@property(readonly, nonatomic) struct CGRect mainContentRectRelativeToWindowContentView;
- (struct CGSize)currentWebViewSize;
- (struct CGSize)tabSwitcherSize;
- (id)browserDocument;
- (void)userInteractedWithPageDuringSwipeGesture;
- (BOOL)isRocketEffectTestEnabled;
- (id)currentFluidProgressStateSource;
- (void)fluidProgressRocketAnimationDidComplete;
- (void)didCommitLoadForContentViewController:(struct BrowserContentViewController *)arg1 loadingSingleResource:(BOOL)arg2;
- (void)cancelFluidProgressForContentViewController:(struct BrowserContentViewController *)arg1;
- (void)startRocketEffectForContentViewController:(struct BrowserContentViewController *)arg1;
- (void)finishFluidProgressForContentViewController:(struct BrowserContentViewController *)arg1;
- (void)updateFluidProgressForContentViewController:(struct BrowserContentViewController *)arg1;
- (void)startFluidProgressForContentViewController:(struct BrowserContentViewController *)arg1;
- (BOOL)isToolbarInFullScreenToolbarWindow;
- (void)resizeAuxiliaryToolbarViewWithOldSize:(struct CGSize)arg1;
- (struct CGSize)window:(id)arg1 willUseFullScreenContentSize:(struct CGSize)arg2;
- (void)revealContentUnderFullScreenToolbar;
- (void)recordFirstResponderViewBeforeExitingFullScreen;
- (void)recordFirstResponderViewBeforeEnteringFullScreen;
- (BOOL)isTogglingFullScreenMode;
- (BOOL)isEnteringOrInFullScreenMode;
- (BOOL)isInFullScreenMode;
- (void)_setShouldDeferWKViewInWindowChanges:(BOOL)arg1;
- (void)_setShouldDisableFrameSizeUpdates:(BOOL)arg1;
- (BOOL)_isWindowFullScreenToolbarWindow:(id)arg1;
- (BOOL)_collapsibleBarsAreInFullScreenToolbarWindow;
- (void)_prepareTopLevelViewsToToggleFullScreen;
- (void)_windowDidResizeToExitFullScreen;
- (void)_windowDidResizeToEnterFullScreen;
- (void)_forceTabLineupViewToLayoutAndDisplay;
- (BOOL)_hasAttachedSheet;
- (void)_positionAndResizeFullWidthBar:(id)arg1 atOriginY:(double)arg2;
- (void)_finishExitingFullScreen;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;

@end

