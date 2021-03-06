//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSSplitViewDelegate.h"
#import "NSTextViewDelegate.h"
#import "ReopensAtLaunch.h"

@class NSButton, NSTextView, SnippetEditorWKView;

__attribute__((visibility("hidden")))
@interface SnippetEditor : NSWindowController <NSTextViewDelegate, NSSplitViewDelegate, ReopensAtLaunch>
{
    NSTextView *_textView;
    SnippetEditorWKView *_wkView;
    NSButton *_updateAfterTypingCheckBox;
}

+ (void)reopen;
+ (id)sharedSnippetEditor;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)textDidChange:(id)arg1;
- (void)updateNow:(id)arg1;
- (void)updatePreview;
- (void)windowDidLoad;
- (id)windowNibName;

@end

