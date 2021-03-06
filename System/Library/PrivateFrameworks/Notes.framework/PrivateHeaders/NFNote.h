//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NFFolder, NFNoteBody, NSDate, NSSet, NSString;

@interface NFNote : NSManagedObject
{
}

+ (BOOL)supportsAttachments;
- (id)createAttachmentWithName:(id)arg1;
- (id)compactDescription;
- (void)moveToTrash;
- (BOOL)isDeletedOrInTrash;
- (void)takeValuesFromNote:(id)arg1;
@property(readonly) BOOL isBlankNewNote;
@property(readonly) BOOL isRemote;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) NSSet *attachments; // @dynamic attachments;
@property(retain, nonatomic) NFNoteBody *body; // @dynamic body;
@property(retain, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain, nonatomic) NSDate *dateEdited; // @dynamic dateEdited;
@property(retain, nonatomic) NFFolder *folder; // @dynamic folder;
@property(retain, nonatomic) NFNoteBody *primitiveBody; // @dynamic primitiveBody;
@property(retain, nonatomic) NSDate *primitiveDateCreated; // @dynamic primitiveDateCreated;
@property(retain, nonatomic) NSDate *primitiveDateEdited; // @dynamic primitiveDateEdited;
@property(retain, nonatomic) NSString *primitiveTitle; // @dynamic primitiveTitle;
@property(retain, nonatomic) NSString *remoteID; // @dynamic remoteID;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

