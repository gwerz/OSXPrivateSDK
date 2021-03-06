//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSystemMonitorListener.h"

@class FTMessageDelivery, IDSPushHandler, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber;

@interface IDSAppleIDSRegistrationCenter : NSObject <IMSystemMonitorListener>
{
    NSMutableArray *_queuedRegistrations;
    NSMutableArray *_queuedAuthentications;
    NSMutableArray *_currentAuthentications;
    NSMutableArray *_currentRegistrations;
    NSMutableArray *_handlers;
    BOOL _pendingDequeue;
    BOOL _pendingDeregistration;
    NSMutableDictionary *_currentGetDependentRegistrationBlocks;
    NSMutableSet *_currentGetDependentRegistrations;
    NSMutableDictionary *_currentGetHandlesBlocks;
    NSMutableSet *_currentGetHandlesRegistrations;
    NSMutableArray *_successfulRegistrations;
    BOOL _shouldUseAbsinthe;
    BOOL _isBuildingContext;
    struct NACContextOpaque_ *_validationContext;
    BOOL _validationContextDisabled;
    NSDate *_validateContextDate;
    NSNumber *_validateContextTTL;
    NSMutableArray *_validationContextQueue;
    NSDate *_dateLastRegistered;
    NSDate *_accountingHour;
    unsigned long long _registrations;
    FTMessageDelivery *_httpMessageDelivery;
    IDSPushHandler *_pushHandler;
}

+ (id)sharedInstance;
- (id)dateLastRegistered;
- (void)_noteRegistration;
- (BOOL)_checkOverRegistrations;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)activeRegistrations;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;
- (BOOL)sendDeregistration:(id)arg1;
- (BOOL)sendRegistration:(id)arg1;
- (void)__reallySendRegistration;
- (BOOL)authenticateRegistration:(id)arg1;
- (BOOL)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)getDependentRegistrations:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(BOOL)arg6;
- (BOOL)isRegistering:(id)arg1;
- (void)_sendAuthenticateRegistration:(id)arg1;
- (void)_sendDeregistration:(id)arg1;
- (void)__reallySendDeregistration;
- (void)_sendRegistrationAsDeregister:(BOOL)arg1;
- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(BOOL)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9;
- (BOOL)sendRequest:(id)arg1;
- (BOOL)_hasRegistration:(id)arg1 inQueue:(id)arg2;
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;
- (void)_notifyEmailQueryFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;
- (void)_notifyAllSuccessfulRegistrations:(id)arg1;
- (void)_notifyRegistrationSuccess:(id)arg1;
- (void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;
- (void)_notifyIDSAuthenticationSuccess:(id)arg1;
- (void)_notifyProvisionFailure:(id)arg1 error:(long long)arg2 fatal:(BOOL)arg3 info:(id)arg4;
- (void)buildValidationCredentialsIfNeeded;
- (BOOL)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1;
- (void)_sendAbsintheValidationCertRequestIfNeeded;
- (void)_setAbisntheCleanupTimer;
- (void)__abisntheCleanupTimerHit;
- (void)_clearAbisntheCleanupTimer;
- (void)__cleanupValidationInfo;
- (void)__flushValidationQueue;
- (void)__failValidationQueue;
- (void)__queueValidationMessage:(id)arg1;
- (void)_dequeuePendingRequestsIfNecessary;
- (BOOL)_hasOngoingAuthentications;
- (void)dealloc;
- (id)init;

@end

