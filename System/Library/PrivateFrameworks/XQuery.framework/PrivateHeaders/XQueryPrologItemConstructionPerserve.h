//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XQueryPrologItemBehavior.h"

__attribute__((visibility("hidden")))
@interface XQueryPrologItemConstructionPerserve : NSObject <XQueryPrologItemBehavior>
{
    BOOL value;
    long long line;
}

+ (id)preserve:(BOOL)arg1 atLine:(long long)arg2;
- (id)description;
- (void)XQueryUpdateProlog:(id)arg1;

@end

