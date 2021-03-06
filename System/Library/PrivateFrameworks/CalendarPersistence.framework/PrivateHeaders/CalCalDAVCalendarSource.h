//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalRemoteCalendarSource.h>

@class CALAddress, CalDAVPrincipal, NSError, NSString, NSTimeZone;

@interface CalCalDAVCalendarSource : CalRemoteCalendarSource
{
    CalDAVPrincipal *_principal;
    NSString *_principalUID;
    NSString *_cacheControllerPath;
    NSError *_lastOperationError;
    NSTimeZone *_timeZone;
    CALAddress *_ownerAddress;
    BOOL _isOwnerMe;
}

+ (id)propertiesForListContents;
+ (id)generateFilenameForUID:(id)arg1;
@property BOOL isOwnerMe; // @synthesize isOwnerMe=_isOwnerMe;
@property(retain) CALAddress *ownerAddress; // @synthesize ownerAddress=_ownerAddress;
- (BOOL)allowsSchedulingByMe;
- (BOOL)isSourceInSameAccount:(id)arg1 ignoringOwner:(BOOL)arg2;
- (BOOL)isSourceInSameAccount:(id)arg1;
- (void)setCacheControllerPath:(id)arg1;
- (void)removeFromQueue:(id)arg1;
- (BOOL)removeEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)removeEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)modifyEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)modifyEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)addEntity:(id)arg1 inManagedObjectContext:(id)arg2;
- (BOOL)addEntities:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)queueScanDropBoxContentsForCalendarItem:(id)arg1;
- (void)queueScanDropBoxContentsForEntity:(id)arg1;
- (void)fetchManagedAttachmentsForItem:(id)arg1;
- (BOOL)_shouldScanDropBox;
- (void)processGetData:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)operation:(id)arg1 deleteResourcesWithFilenames:(id)arg2;
- (void)operation:(id)arg1 processResources:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)processResourcesFromServer:(id)arg1 failedResources:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)processResourcesFromServer:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)didAbortRefreshInOperation:(id)arg1;
- (void)didCompleteRefreshInOperation:(id)arg1;
- (id)ownerForSource;
- (id)meForSource;
- (id)lastOperationError;
- (void)setLastOperationError:(id)arg1;
- (BOOL)hasCapability:(int)arg1;
- (void)setPrincipal:(id)arg1;
- (id)principal;
- (BOOL)hasNoPrincipal;
- (void)setPrincipalUID:(id)arg1;
- (id)principalUID;
- (id)calendarCollectionName;
- (BOOL)isDelegate;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (id)calendarPath;
- (BOOL)isCalDAV;
- (id)freeBusyCache;
- (void)dealloc;
- (id)initWithKey:(id)arg1;
- (id)pathWithoutLastComponent:(id)arg1;
- (id)pathWithoutLastComponent;
- (BOOL)removeEntities:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)removeEntity:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)modifyEntities:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)modifyEntity:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)addEntity:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (BOOL)addEntities:(id)arg1 fromServer:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (id)debugDescription;

@end

