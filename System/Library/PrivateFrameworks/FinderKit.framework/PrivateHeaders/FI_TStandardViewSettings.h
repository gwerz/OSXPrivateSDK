//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FI_TIconViewSettings, FI_TListViewSettings, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FI_TStandardViewSettings : NSObject
{
    NSMutableDictionary *_settings;
    FI_TIconViewSettings *_iconViewSettings;
    FI_TListViewSettings *_listViewSettings;
}

+ (id)iconViewSettingsFromDefaultsForNode:(const struct TFENode *)arg1;
+ (id)listViewSettingsFromDefaults;
+ (void)saveStandardViewSettingsForNewUser;
+ (id)standardSearchViewSettings;
+ (id)standardViewSettings;
@property(retain, nonatomic) FI_TListViewSettings *listViewSettings; // @synthesize listViewSettings=_listViewSettings;
@property(retain, nonatomic) FI_TIconViewSettings *iconViewSettings; // @synthesize iconViewSettings=_iconViewSettings;
- (void)save;
- (void)dealloc;
- (id)initForRegID:(int)arg1;

@end

