//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFRedundantContentMarkup;

@interface MFRedundantTextIdentifier : NSObject
{
    MFRedundantContentMarkup *_redundantContentMarkup;
}

+ (id)_htmlMarkerForContentType:(long long)arg1;
+ (void)initialize;
@property(readonly, nonatomic) MFRedundantContentMarkup *redundantContentMarkup; // @synthesize redundantContentMarkup=_redundantContentMarkup;
- (id)_attachmentContextsByURLforAttachmentsByURL:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 parsedMessage:(id)arg2 ancestorMessage:(id)arg3 ancestorParsedMessage:(id)arg4;

@end

