//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLTexture.h>

__attribute__((visibility("hidden")))
@interface VGLSurfaceTexture : VGLTexture
{
    struct __IOSurface *_surface;
}

- (void)dealloc;
- (struct CGImage *)newImage;
- (void)setTarget:(int)arg1;
- (BOOL)loadTexture;
- (id)initWithSize:(struct CGSize)arg1 requirePowerOf2:(BOOL)arg2;

@end

