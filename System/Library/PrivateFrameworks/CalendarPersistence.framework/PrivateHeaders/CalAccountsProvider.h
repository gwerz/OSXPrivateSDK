//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore;

@interface CalAccountsProvider : NSObject
{
    ACAccountStore *_store;
}

+ (id)defaultProvider;
- (id)generateGoogleTokenForUsername:(id)arg1;
- (id)googleTokenIfExistsForUsername:(id)arg1;
- (BOOL)isPluginIDSupported:(id)arg1 forApp:(id)arg2;
- (void)notifyAccountsChangedExternally;
- (BOOL)shouldSendInfoForPluginWithID:(id)arg1;
- (id)descriptionForCalDAVHost:(id)arg1;
- (BOOL)shouldStorePasswordForCalDAVHost:(id)arg1;
- (id)providerIDForPluginID:(id)arg1;
- (id)pluginIDForExchangeHost:(id)arg1;
- (id)pluginIDForCalDAVHost:(id)arg1;
- (id)brandNameForHost:(id)arg1;
- (id)iaAlistPluginForExchangeHost:(id)arg1;
- (id)iaAListPluginForCalDAVHost:(id)arg1;
- (void)renewAccountCredentialsForAccountWithIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)oauthTokenForAccountWithIdentifier:(id)arg1 tokenType:(id)arg2;
- (id)acAccountWithIdentifier:(id)arg1;
- (BOOL)loadAccountsFramework;
- (void)dealloc;
- (id)init;

@end

