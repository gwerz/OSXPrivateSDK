//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSMenu, NSString;

__attribute__((visibility("hidden")))
@interface SegmentedControlSegment : NSObject
{
    double _width;
    NSImage *_image;
    unsigned long long _imageScaling;
    NSString *_label;
    NSMenu *_menu;
    BOOL _enabled;
    NSString *_toolTip;
    long long _tag;
}

@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) double width; // @synthesize width=_width;
- (void)cloneAttributesToSegmentedControl:(id)arg1 index:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithSegmentedControl:(id)arg1 index:(unsigned long long)arg2;

@end

