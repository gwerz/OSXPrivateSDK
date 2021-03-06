//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreDAVAccountInfoProvider.h"
#import "CoreDAVLogDelegate.h"
#import "CoreDAVOAuthInfoProvider.h"

@class NSData, NSManagedObjectID, NSSet, NSString, NSURL;

@interface CalDAVBasicAccountInfoProvider : NSObject <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate>
{
    NSString *_scheme;
    NSString *_host;
    long long _port;
    NSString *_serverRoot;
    NSString *_user;
    NSString *_password;
    NSData *_identityPersist;
    NSURL *_principalURL;
    NSString *_accountID;
    NSSet *_serverComplianceClasses;
    NSManagedObjectID *_objectID;
    BOOL _shouldFailAllTasks;
    NSString *_acAccountID;
    NSString *_cachedClientToken;
}

@property(retain) NSString *acAccountID; // @synthesize acAccountID=_acAccountID;
@property(retain) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property BOOL shouldFailAllTasks; // @synthesize shouldFailAllTasks=_shouldFailAllTasks;
@property(retain) NSSet *serverComplianceClasses; // @synthesize serverComplianceClasses=_serverComplianceClasses;
@property(retain) NSString *accountID; // @synthesize accountID=_accountID;
@property(retain) NSURL *principalURL; // @synthesize principalURL=_principalURL;
@property(retain) NSData *identityPersist; // @synthesize identityPersist=_identityPersist;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *user; // @synthesize user=_user;
@property(retain) NSString *serverRoot; // @synthesize serverRoot=_serverRoot;
@property long long port; // @synthesize port=_port;
@property(retain) NSString *host; // @synthesize host=_host;
@property(retain) NSString *scheme; // @synthesize scheme=_scheme;
- (void)coreDAVTransmittedDataFinished;
- (void)coreDAVLogTransmittedDataPartial:(id)arg1;
- (BOOL)shouldLogTransmittedData;
- (void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
- (long long)coreDAVOutputLevel;
- (long long)coreDAVLogLevel;
- (id)userAgentHeader;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (id)clientToken;
- (void)clientTokenRequestedByServer;
- (id)oauth2Token;
- (id)oauthToken;
- (id)oauthInfoProvider;
- (BOOL)handleCertificateError:(id)arg1;
- (BOOL)handleTrustChallenge:(id)arg1;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleShouldUseCredentialStorage;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 principalURL:(id)arg3 objectID:(id)arg4;
- (void)dealloc;

@end

