/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIImageView, UIFont;



@interface UISimpleTableCell : UITableCell 
{
    UIFont *_font;
    UIImageView *_iconImageView;
    NSUInteger _indentationLevel;
    NSString *_title;
    NSInteger _titleColor;
}

+ (id)defaultFont;
+ (void)_initializeSafeCategory;

- (void)drawTitleInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)setTitleColor:(NSInteger)arg1;
- (void)setIcon:(id)arg1;
- (id)icon;
- (NSUInteger)indentationLevel;
- (id)iconImageView;
- (void)setIndentationLevel:(NSUInteger)arg1;
- (id)title;
- (id)_scriptingInfo;
- (NSInteger)lineBreakMode;
- (id)font;
- (void)setFont:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityTableViewCellText;

@end