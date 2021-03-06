//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSString;

@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext *_migrationContext;
    NSPersistentStoreCoordinator *_coordinator;
    NSString *_databasePath;
}

- (void).cxx_destruct;
- (long long)_versionForModel:(id)arg1;
- (id)_compatibleModelForStoreAtURL:(id)arg1;
- (id)_setUpContextForMigration;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;
- (id)_fetchAllDataclassEntitles;
- (void)_migrateNameAttributeOfDataclassEntities;
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;
- (BOOL)run;
- (id)initForDatabaseAtPath:(id)arg1;

@end

