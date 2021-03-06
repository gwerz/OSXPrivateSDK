//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSImage;

@interface SCTImageAndTextCell : NSTextFieldCell
{
    NSImage *mImage;
    unsigned long long mLineBreakMode;
}

- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setLineBreakMode:(unsigned long long)arg1;
- (struct CGRect)imageFrameForCellFrame:(struct CGRect)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isOpaque;
- (void)dealloc;

@end

