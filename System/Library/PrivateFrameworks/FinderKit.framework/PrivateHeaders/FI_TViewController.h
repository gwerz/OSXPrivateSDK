//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

__attribute__((visibility("hidden")))
@interface FI_TViewController : NSViewController
{
    BOOL _callingLoadView;
    BOOL _loadingFromNib;
    BOOL _isViewLoaded;
}

@property(readonly) BOOL isViewLoaded; // @synthesize isViewLoaded=_isViewLoaded;
- (BOOL)applyExtraKeyboardShortcuts:(id)arg1;
- (id)viewNoLoad;
- (void)viewLoaded;
- (void)setView:(id)arg1;
- (void)loadView;
- (id)nibBundle;
- (void)awakeFromNib;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1;

@end

