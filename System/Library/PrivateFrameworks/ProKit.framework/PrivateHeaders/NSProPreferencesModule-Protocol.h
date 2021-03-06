//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSBox, NSImage, NSString, ProThemeImageSource;

@protocol NSProPreferencesModule
- (BOOL)preferencesWindowShouldClose;
- (BOOL)moduleCanBeRemoved;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (ProThemeImageSource *)imageSource;
- (void)setImageSource:(ProThemeImageSource *)arg1;
- (void)didChange;
- (void)initializeFromDefaults;
- (void)willBeDisplayed;
- (void)saveChanges;
- (BOOL)hasChangesPending;
- (NSImage *)imageForPreferenceNamed:(NSString *)arg1;
- (NSBox *)viewForPreferenceNamed:(NSString *)arg1;
@end

