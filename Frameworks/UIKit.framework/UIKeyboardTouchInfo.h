/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBTree, UITouch;

@interface UIKeyboardTouchInfo : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    BOOL _dragged;
    } _initialDragPoint;
    } _initialPoint;
    UIKBTree *_key;
    UIKBTree *_keyplane;
    BOOL _maySuppressUpAction;
    UIKBTree *_slidOffKey;
    int _stage;
    UITouch *_touch;
}

@property BOOL dragged;
@property struct CGPoint { float x1; float x2; } initialDragPoint;
@property struct CGPoint { float x1; float x2; } initialPoint;
@property(retain) UIKBTree * key;
@property(retain) UIKBTree * keyplane;
@property BOOL maySuppressUpAction;
@property(retain) UIKBTree * slidOffKey;
@property int stage;
@property(retain) UITouch * touch;

- (void)dealloc;
- (BOOL)dragged;
- (struct CGPoint { float x1; float x2; })initialDragPoint;
- (struct CGPoint { float x1; float x2; })initialPoint;
- (id)key;
- (id)keyplane;
- (BOOL)maySuppressUpAction;
- (void)setDragged:(BOOL)arg1;
- (void)setInitialDragPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInitialPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setKey:(id)arg1;
- (void)setKeyplane:(id)arg1;
- (void)setMaySuppressUpAction:(BOOL)arg1;
- (void)setSlidOffKey:(id)arg1;
- (void)setStage:(int)arg1;
- (void)setTouch:(id)arg1;
- (id)slidOffKey;
- (int)stage;
- (id)touch;

@end
