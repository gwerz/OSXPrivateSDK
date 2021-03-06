//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OISFUCryptoKey.h>

__attribute__((visibility("hidden")))
@interface OISFUTangierCryptoKey : OISFUCryptoKey
{
    char *mKey;
    unsigned long long mKeyLength;
}

- (void)dealloc;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2;
- (unsigned long long)keyLength;
- (const char *)keyData;

@end

