//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSCreateItemRequestOperation.h>

@class MFEWSGetItemsResponseOperation, NSString;

@interface MFEWSCreateEventReplyRequestOperation : MFEWSCreateItemRequestOperation
{
    BOOL _messageResponseType;
    NSString *_messageMeetingItemIdString;
    MFEWSGetItemsResponseOperation *_getItemsResponse;
}

+ (Class)classForResponse;
@property(readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse; // @synthesize getItemsResponse=_getItemsResponse;
@property(readonly, nonatomic) BOOL messageResponseType; // @synthesize messageResponseType=_messageResponseType;
@property(readonly, nonatomic) NSString *messageMeetingItemIdString; // @synthesize messageMeetingItemIdString=_messageMeetingItemIdString;
- (id)prepareRequest;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderIdString:(id)arg1 messageType:(BOOL)arg2 disposition:(long long)arg3 gateway:(id)arg4 errorHandler:(id)arg5;
- (void)_ewsCreateEventReplyRequestOperationCommonInitWithItemIdString:(id)arg1 responseType:(BOOL)arg2;
- (id)initWithItemIdString:(id)arg1 folderIdString:(id)arg2 messageType:(BOOL)arg3 responseType:(BOOL)arg4 disposition:(long long)arg5 gateway:(id)arg6 errorHandler:(id)arg7;

@end

