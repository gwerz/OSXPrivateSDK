//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMALRock.h>

@class NSDictionary;

@interface XMDelegateRock : SMALRock
{
    NSDictionary *_dictionary;
}

+ (id)rockID;
- (id)description;
- (BOOL)expectsAResult;
- (id)requestPayload;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

