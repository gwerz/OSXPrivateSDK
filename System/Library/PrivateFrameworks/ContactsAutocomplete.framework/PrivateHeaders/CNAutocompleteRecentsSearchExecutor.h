//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAutocompleteSearchExecutor.h"

@class CNAutocompleteResultTracing;

@interface CNAutocompleteRecentsSearchExecutor : NSObject <CNAutocompleteSearchExecutor>
{
    CNAutocompleteResultTracing *_tracer;
}

+ (id)executorWithCurrentUserData;
@property(retain) CNAutocompleteResultTracing *tracer; // @synthesize tracer=_tracer;
- (void).cxx_destruct;
- (CDUnknownBlockType)resultTransformWithFactory:(id)arg1;
- (id)findRecentContactsWithString:(id)arg1 domain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4;
- (id)executeRequest:(id)arg1 error:(id *)arg2;
- (BOOL)usesNetwork;

@end

