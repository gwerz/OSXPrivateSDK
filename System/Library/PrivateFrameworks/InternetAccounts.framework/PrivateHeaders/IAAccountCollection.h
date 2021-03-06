//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IAAListPlugin, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSRecursiveLock;

@interface IAAccountCollection : NSObject
{
    BOOL _isUpdating;
    int _sourcesUpdating;
    struct dispatch_group_s *_dispatch_group;
    IAAListPlugin *_castlePlugin;
    NSRecursiveLock *_lock;
    NSMutableArray *_accountsFromApps;
    NSMutableArray *_highLevelAccounts;
    NSMutableArray *_cachedAccounts;
    NSArray *_sources;
    NSDictionary *_options;
    NSMutableDictionary *_accountsAndChildrenFromApps;
    NSMutableDictionary *_cachedAccountsAndChildren;
}

+ (id)shared;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(retain) NSArray *sources; // @synthesize sources=_sources;
@property(retain) NSMutableArray *highLevelAccounts; // @synthesize highLevelAccounts=_highLevelAccounts;
@property(retain) NSMutableArray *accountsFromApps; // @synthesize accountsFromApps=_accountsFromApps;
@property BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
- (void)reset;
- (void)collectAllPersistentAccounts;
- (id)highLevelAccountWithLoginName:(id)arg1 provider:(id)arg2;
- (id)highLevelAccountsWithProvider:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)removeAccountWithUID:(id)arg1;
- (id)accountWithUID:(id)arg1;
- (id)accountWithDescription:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)collect;
- (void)_removeStaleCachedAccounts;
- (void)loadCachedAccounts;
- (void)_loadCachedAccounts;
- (id)cachedAccountsFromPath:(id)arg1;
- (id)cachedAccounts;
- (void)cacheAccounts;
- (void)cacheAccounts:(id)arg1 toPath:(id)arg2;
- (void)dispatch_collectAccountsFromApps;
- (void)_incrementUpdateCount;
- (void)_decrementUpdateCount;
- (id)_existingICloudAccountForEmailAlias:(id)arg1;
- (void)_cacheHouseKeepingIndexChildAppAccount:(id)arg1 forParentAccount:(id)arg2;
- (BOOL)_willBeAList:(id)arg1;
- (void)_updateAccount:(id)arg1 withContentsOfAccount:(id)arg2;
- (void)_collectAccountsFromAppsFromPluginID:(id)arg1;
- (id)_bListAccountForDataPlugin:(id)arg1 withSettings:(id)arg2;
- (void)_notifyNewAccounts:(id)arg1;
- (void)collectAccountsFromApps;
- (void)_collectAccountsFromApps;
- (id)_calDAVAccountMatching:(id)arg1;
- (id)_mailAccountMatching:(id)arg1;
- (BOOL)_isIMAP:(id)arg1;
- (BOOL)_isCalDAV:(id)arg1;
- (void)dealloc;
- (id)init;

@end

