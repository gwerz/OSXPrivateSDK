//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VKLabelMarker : NSObject
{
    shared_ptr_dd1f7020 _manager;
    shared_ptr_0c41964b _label;
    float _contentScale;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugAnchorPointString;
- (struct CGPoint)screenPointToScrollRelativeToWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2;
- (struct CGPoint)calloutAnchorPointWithCanvasSize:(struct CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3;
- (void)setLabelSelected:(BOOL)arg1;
- (id)featureHandles;
- (id)incident;
- (unsigned long long)businessID;
- (BOOL)hasBusinessID;
- (BOOL)isTrafficIncident;
- (BOOL)isOneWayArrow;
- (BOOL)isSelectable;
- (struct CGRect)calloutAnchorRect;
- (CDStruct_d2b197d1)bounds;
- (CDStruct_c3b9c2ee)coordinate;
- (id)iconName;
- (id)subtitle;
- (id)title;
- (shared_ptr_0c41964b)infoLabel;
- (id)initWithManager:(const shared_ptr_dd1f7020 *)arg1 infoLabel:(const shared_ptr_0c41964b *)arg2 contentScale:(float)arg3;

@end

