//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePathToElementType.h>

@class NSString;

@interface EWSPathToExtendedFieldType : EWSBasePathToElementType
{
    int DistinguishedPropertySetId;
    long long PropertyId;
    BOOL PropertyIdSpecified;
    NSString *PropertyName;
    NSString *PropertySetId;
    NSString *PropertyTag;
    int PropertyType;
}

+ (id)definition;
@property(nonatomic) int PropertyType; // @synthesize PropertyType;
@property(retain, nonatomic) NSString *PropertyTag; // @synthesize PropertyTag;
@property(retain, nonatomic) NSString *PropertySetId; // @synthesize PropertySetId;
@property(retain, nonatomic) NSString *PropertyName; // @synthesize PropertyName;
@property(nonatomic) BOOL PropertyIdSpecified; // @synthesize PropertyIdSpecified;
@property(nonatomic) long long PropertyId; // @synthesize PropertyId;
@property(nonatomic) int DistinguishedPropertySetId; // @synthesize DistinguishedPropertySetId;
- (void)dealloc;
- (id)description;

@end

