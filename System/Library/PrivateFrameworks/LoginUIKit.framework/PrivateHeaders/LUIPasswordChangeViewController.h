//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUIPopoverViewController.h>

@class LUISecureTextFieldView, LUISimplePopover, LUITextFieldView, NSButton, NSTextField;

@interface LUIPasswordChangeViewController : LUIPopoverViewController
{
    NSTextField *_titleTextField;
    NSTextField *_instructionsTextField;
    NSTextField *_firstPasswordLabel;
    LUISecureTextFieldView *_firstPasswordTextField;
    NSTextField *_secondPasswordLabel;
    LUISecureTextFieldView *_secondPasswordTextField;
    NSTextField *_verifyLabel;
    LUISecureTextFieldView *_verifyTextField;
    NSTextField *_passwordHintLabel;
    NSTextField *_recommendedLabel;
    LUITextFieldView *_hintTextField;
    NSButton *_cancelButton;
    NSButton *_changePasswordButton;
    int _mode;
    long long _subMode;
    LUISimplePopover *_errorPopover;
}

@property long long subMode; // @synthesize subMode=_subMode;
@property NSButton *changePasswordButton; // @synthesize changePasswordButton=_changePasswordButton;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property LUITextFieldView *hintTextField; // @synthesize hintTextField=_hintTextField;
@property NSTextField *recommendedLabel; // @synthesize recommendedLabel=_recommendedLabel;
@property NSTextField *passwordHintLabel; // @synthesize passwordHintLabel=_passwordHintLabel;
@property LUISecureTextFieldView *verifyTextField; // @synthesize verifyTextField=_verifyTextField;
@property NSTextField *verifyLabel; // @synthesize verifyLabel=_verifyLabel;
@property LUISecureTextFieldView *secondPasswordTextField; // @synthesize secondPasswordTextField=_secondPasswordTextField;
@property NSTextField *secondPasswordLabel; // @synthesize secondPasswordLabel=_secondPasswordLabel;
@property LUISecureTextFieldView *firstPasswordTextField; // @synthesize firstPasswordTextField=_firstPasswordTextField;
@property NSTextField *firstPasswordLabel; // @synthesize firstPasswordLabel=_firstPasswordLabel;
@property NSTextField *instructionsTextField; // @synthesize instructionsTextField=_instructionsTextField;
@property NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void)awakeFromNib;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isTransient;
- (void)setChangePasswordButtonTarget:(id)arg1 andSelector:(SEL)arg2;
- (void)setCancelButtonTarget:(id)arg1 andSelector:(SEL)arg2;
- (void)setMode:(int)arg1;
- (int)mode;
- (id)hint;
- (id)verifyPassword;
- (id)updatedPassword;
- (id)firstPassword;
- (void)showVerifyPasswordError;
- (void)showNewPasswordError:(id)arg1;
- (void)showFirstPasswordError;
- (void)controlTextDidChange:(id)arg1;
- (void)_updateChangePasswordButton;
- (void)_layoutContentView;

@end

