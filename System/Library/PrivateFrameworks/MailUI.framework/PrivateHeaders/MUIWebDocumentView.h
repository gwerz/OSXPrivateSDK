//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MUIWKViewController, MUIWebDocument;

@interface MUIWebDocumentView : NSView
{
    unsigned long long _loadedState;
    struct CGSize _contentSize;
    BOOL _preparingToLayoutSynchronously;
    NSView *_snapshotView;
    MUIWKViewController *_wkViewController;
    CDUnknownBlockType _prepareToLayoutSynchronouslyCompletionHandler;
}

+ (id)keyPathsForValuesAffectingEditable;
+ (id)keyPathsForValuesAffectingPageZoom;
+ (id)keyPathsForValuesAffectingViewGroup;
+ (id)keyPathsForValuesAffectingWebDocument;
+ (BOOL)requiresConstraintBasedLayout;
@property(copy, nonatomic) CDUnknownBlockType prepareToLayoutSynchronouslyCompletionHandler; // @synthesize prepareToLayoutSynchronouslyCompletionHandler=_prepareToLayoutSynchronouslyCompletionHandler;
@property(nonatomic) BOOL preparingToLayoutSynchronously; // @synthesize preparingToLayoutSynchronously=_preparingToLayoutSynchronously;
@property(retain, nonatomic) MUIWKViewController *wkViewController; // @synthesize wkViewController=_wkViewController;
@property(readonly, nonatomic) NSView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void)exportAttachmentsToiPhoto;
- (BOOL)canExportAttachmentsToiPhoto;
- (void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(BOOL)arg3;
- (void)saveAttachmentsWithPanel:(id)arg1;
- (void)quickLookAttachments:(id)arg1;
- (id)_attachmentControllersForAttachments:(id)arg1;
- (id)description;
- (BOOL)shouldHandleClickForURL:(id)arg1;
- (void)getSelectedText:(CDUnknownBlockType)arg1;
- (void)selectFindMatch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)findMatchesForString:(id)arg1 findOptions:(unsigned long long)arg2 maxResults:(unsigned long long)arg3 resultCollector:(CDUnknownBlockType)arg4;
- (void)generateSelectionWebDocument:(CDUnknownBlockType)arg1;
- (void)generateStyleInlinedWebDocument:(CDUnknownBlockType)arg1;
- (void)removeAttachment:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendAttributedString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendAttachment:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAttachments:(id)arg1 asHidden:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL editable;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)mui_cancelSynchronousLayout;
- (void)mui_performLayoutSynchronously;
- (void)_readyToLayoutSynchronously;
- (void)mui_prepareToLayoutSynchronously:(CDUnknownBlockType)arg1;
- (void)mui_cancelAnimation;
- (void)mui_performAnimation;
- (void)mui_prepareToAnimate:(CDUnknownBlockType)arg1;
- (void)mui_didCacheDisplayInRect;
- (void)mui_prepareToCacheDisplayInRect:(struct CGRect)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)printOperationWithPrintInfo:(id)arg1;
- (void)prepareTilesInRect:(struct CGRect)arg1;
- (void)evaluateJavascript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setShouldPaintToBounds:(BOOL)arg1;
- (BOOL)shouldPaintToBounds;
@property(nonatomic) double preferredMinLayoutWidth;
@property(nonatomic) double pageZoom;
- (void)setViewGroup:(id)arg1;
- (id)viewGroup;
@property(retain, nonatomic) MUIWebDocument *webDocument;
@property(nonatomic) unsigned long long loadedState;
@property(nonatomic) struct CGSize contentSize;
- (id)contentView;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)_muiWebDocumentViewCommonInitWithViewGroup:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewGroup:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1 viewGroup:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

