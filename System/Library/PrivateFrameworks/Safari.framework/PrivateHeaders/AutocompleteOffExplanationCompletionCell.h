//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/CompletionCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AutocompleteOffExplanationCompletionCell : CompletionCell
{
    NSString *_explanation;
}

+ (id)_textAttributes;
+ (id)_keyImage;
+ (struct CGSize)sizeForExplanation:(id)arg1;
+ (struct CGSize)_textSize;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

