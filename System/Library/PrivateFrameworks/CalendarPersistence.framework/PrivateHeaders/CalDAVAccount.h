//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CoreDAVTaskGroupDelegate.h"

@class CalCalDAVTaskManager, CalDAVPrincipal, CalDAVPrincipalSearchPropertySet, NSMutableArray, NSString;

@interface CalDAVAccount : NSObject <CoreDAVTaskGroupDelegate>
{
    NSString *_uid;
    NSString *_login;
    NSString *_server;
    int _port;
    NSString *_scheme;
    BOOL _useKerberos;
    NSString *_acAccountID;
    NSString *_collectionSetName;
    CalDAVPrincipalSearchPropertySet *_searchPropertySet;
    CalDAVPrincipal *_principal;
    NSMutableArray *_grantedDelegates;
    CalCalDAVTaskManager *_taskManager;
}

+ (void)setPassword:(id)arg1 withScheme:(id)arg2 login:(id)arg3 host:(id)arg4 path:(id)arg5 port:(int)arg6;
+ (id)passwordWithScheme:(id)arg1 login:(id)arg2 host:(id)arg3 path:(id)arg4 port:(int)arg5;
+ (id)oldURLForKeychainWithScheme:(id)arg1 login:(id)arg2 host:(id)arg3 principalPath:(id)arg4 port:(int)arg5;
+ (id)urlForKeychainWithScheme:(id)arg1 login:(id)arg2 host:(id)arg3 path:(id)arg4 port:(int)arg5;
@property(retain) CalCalDAVTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(retain) CalDAVPrincipalSearchPropertySet *searchPropertySet; // @synthesize searchPropertySet=_searchPropertySet;
@property(retain) NSString *collectionSetName; // @synthesize collectionSetName=_collectionSetName;
- (id)mainPrincipal;
- (id)key;
- (id)scheme;
- (void)setScheme:(id)arg1;
- (int)port;
- (void)setPort:(int)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (BOOL)useKerberos;
- (void)setUseKerberos:(BOOL)arg1;
- (void)setPassword:(id)arg1;
- (id)password;
- (id)urlForKeychain;
- (void)setACAccountID:(id)arg1;
- (id)acAccountID;
- (void)setLogin:(id)arg1;
- (id)login;
- (id)updatedSearchPropertySet;
- (id)uid;
- (void)setUid:(id)arg1;
- (id)description;
- (void)setMainPrincipal:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initAndCreateQueue:(BOOL)arg1;

@end

