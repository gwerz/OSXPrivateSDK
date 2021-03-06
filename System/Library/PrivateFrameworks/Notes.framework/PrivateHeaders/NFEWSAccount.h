//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/NFAccount.h>

@class NFEWSFolder, NSString, NSURL;

@interface NFEWSAccount : NFAccount
{
}

+ (id)createAccountWithEmailAddress:(id)arg1 context:(id)arg2;
+ (id)nfEWSAccountWithUsername:(id)arg1 internalURL:(id)arg2 context:(id)arg3;
+ (id)nfEWSAccountWithRootFolderID:(id)arg1 context:(id)arg2;
+ (id)accountWithEmailAddress:(id)arg1 context:(id)arg2;
- (id)folderEntityName;
- (BOOL)participatesInInternetAccounts;
- (long long)accountClassPriority;
- (id)createDefaultFolderInContext:(id)arg1;
@property(readonly) NFEWSFolder *defaultFolder;
- (BOOL)validateRootFolder:(inout id *)arg1 error:(out id *)arg2;

// Remaining properties
@property(retain, nonatomic) NSURL *externalURL; // @dynamic externalURL;
@property(retain, nonatomic) NSString *folderHierarchySyncState; // @dynamic folderHierarchySyncState;
@property(retain, nonatomic) NSURL *internalURL; // @dynamic internalURL;
@property(retain, nonatomic) NSURL *lastUsedAutodiscoverURL; // @dynamic lastUsedAutodiscoverURL;
@property(retain, nonatomic) NFEWSFolder *rootFolder; // @dynamic rootFolder;

@end

