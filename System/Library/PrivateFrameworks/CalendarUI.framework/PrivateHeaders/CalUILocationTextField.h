//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "CalUIAutocompletingField.h"

@interface CalUILocationTextField : NSTextField <CalUIAutocompletingField>
{
    BOOL _expanded;
    double _menuWidth;
}

@property double menuWidth; // @synthesize menuWidth=_menuWidth;
@property(getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
- (void)setObjectValue:(id)arg1;
- (id)objectValueAsArray;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)init;

@end

