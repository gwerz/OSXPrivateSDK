//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class MCMimePart;

@interface _MCMimePartEnumerator : NSEnumerator
{
    BOOL _onlyAttachments;
    BOOL _isFirstIteration;
    MCMimePart *_currentPart;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithMimeBody:(id)arg1 onlyAttachments:(BOOL)arg2;
- (void)_setCurrentPart:(id)arg1;

@end

