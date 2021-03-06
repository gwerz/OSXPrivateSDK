//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "D2DInquiryDelegate.h"
#import "D2DPairingDelegate.h"

@class NSBox, NSButton, NSProgressIndicator, NSTextField, NSViewController;

@interface D2DWindow : NSWindowController <D2DInquiryDelegate, D2DPairingDelegate>
{
    NSBox *box;
    NSProgressIndicator *progress;
    NSTextField *status;
    NSButton *forward;
    NSButton *backward;
    NSButton *alternate;
    NSViewController *deviceView;
}

+ (id)deviceAuthorizeWindow:(id)arg1;
+ (id)deviceInspectorWindow:(id)arg1;
+ (id)pairingWindowForDevice:(id)arg1;
+ (id)deviceWindowWithView:(id)arg1 title:(id)arg2;
@property(retain) NSViewController *deviceView; // @synthesize deviceView;
@property NSButton *alternate; // @synthesize alternate;
@property NSButton *backward; // @synthesize backward;
@property NSButton *forward; // @synthesize forward;
@property NSTextField *status; // @synthesize status;
@property NSProgressIndicator *progress; // @synthesize progress;
@property NSBox *box; // @synthesize box;
- (void)pairingComplete:(id)arg1 error:(id)arg2;
- (void)pairingUserPasskeyNotification:(id)arg1 passkey:(unsigned long long)arg2;
- (void)pairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned long long)arg2;
- (void)pairingPINCodeRequest:(id)arg1;
- (void)pairingConnecting:(id)arg1;
- (void)pairingStarted:(id)arg1;
- (void)inquiryComplete:(id)arg1 error:(id)arg2;
- (void)inquiry:(id)arg1 deviceNameUpdated:(id)arg2 devicesRemaining:(unsigned long long)arg3;
- (void)inquiry:(id)arg1 startedUpdatingDeviceNames:(unsigned long long)arg2;
- (void)inquiry:(id)arg1 foundDevice:(id)arg2;
- (void)inquiryStarted:(id)arg1;
- (void)onAlternateClick:(id)arg1;
- (void)onBackwardClick:(id)arg1;
- (void)onForwardClick:(id)arg1;
- (void)contract:(id)arg1;
- (void)expand:(id)arg1;

@end

