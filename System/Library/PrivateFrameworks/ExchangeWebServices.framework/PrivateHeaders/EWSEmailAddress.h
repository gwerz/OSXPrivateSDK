//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EWSEmailAddress : NSObject
{
    NSString *Name;
    NSString *Address;
    NSString *RoutingType;
}

+ (id)definition;
@property(retain, nonatomic) NSString *RoutingType; // @synthesize RoutingType;
@property(retain, nonatomic) NSString *Address; // @synthesize Address;
@property(retain, nonatomic) NSString *Name; // @synthesize Name;
- (void)dealloc;

@end

