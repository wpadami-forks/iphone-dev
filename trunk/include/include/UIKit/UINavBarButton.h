/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIThreePartButton.h>

@interface UINavBarButton : UIThreePartButton
{
    int _style;
    int _barStyle;
    float _padding;
    BOOL _multiple;
}

- (BOOL)_canHandleStatusBarMouseEvents;	// IMP=0x323d6028
- (BOOL)contentsEqualTo:(id)fp8 withStyle:(int)fp12;	// IMP=0x323d5d64
- (void)drawButtonPart:(int)fp8 inRect:(struct CGRect)fp12;	// IMP=0x323d879c
- (void)drawImageAtPoint:(struct CGPoint)fp8 fraction:(float)fp16;	// IMP=0x323d5fa0
- (void)setNavBarButtonStyle:(int)fp8;	// IMP=0x323d5e28

@end
