//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPFetchResult.h>

@class NSArray;

@interface IMAPBodyStructureFetchResult : IMAPFetchResult
{
    NSArray *_bodyStructure;
}

@property(copy, nonatomic) NSArray *bodyStructure; // @synthesize bodyStructure=_bodyStructure;
- (id)description;
- (void)dealloc;

@end

