/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayOccurrenceContentView, EKEvent, NSString, UIColor, UIImageView, UIView;

@interface EKDayOccurrenceView : UIView <NSCopying> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    unsigned int _touchKeptInsideOccurrence : 1;
    unsigned int _offsetContentForLandscape : 1;
    BOOL _allDay;
    BOOL _allDayDrawingStyle;
    float _cappedColorBarHeight;
    UIColor *_color;
    UIImageView *_colorBar;
    EKDayOccurrenceContentView *_content;
    BOOL _declined;
    id _delegate;
    BOOL _dimmed;
    BOOL _dragging;
    BOOL _drawsResizeHandles;
    UIView *_endResizeHandle;
    BOOL _hideColorBar;
    BOOL _hideText;
    } _margin;
    BOOL _needsColorBarUpdate;
    BOOL _needsContentCalc;
    BOOL _needsReply;
    EKEvent *_occurrence;
    int _occurrenceBackgroundStyle;
    float _originalXBeforeOffset;
    } _padding;
    UIColor *_secondaryTextColor;
    BOOL _selected;
    UIView *_startResizeHandle;
    BOOL _tentative;
    UIColor *_textBackgroundColor;
    UIColor *_titleTextColor;
    float _visibleHeight;
    BOOL _visibleHeightLocked;
}

@property(getter=isAllDay) BOOL allDay;
@property BOOL allDayDrawingStyle;
@property(getter=isBirthday) BOOL birthday;
@property(getter=isCancelled) BOOL cancelled;
@property float cappedColorBarHeight;
@property(copy) UIColor * color;
@property(readonly) BOOL colorBarExtendsPastOrEqualToNaturalTextHeight;
@property(getter=isDeclined) BOOL declined;
@property id delegate;
@property BOOL dimmed;
@property BOOL dragging;
@property BOOL drawsResizeHandles;
@property(getter=isFacebook) BOOL facebook;
@property BOOL hideColorBar;
@property BOOL hideText;
@property(copy) NSString * location;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } margin;
@property BOOL needsReply;
@property(retain) EKEvent * occurrence;
@property int occurrenceBackgroundStyle;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } padding;
@property(retain) UIColor * secondaryTextColor;
@property BOOL selected;
@property(getter=isTentative) BOOL tentative;
@property(retain) UIColor * textBackgroundColor;
@property(copy) NSString * title;
@property(retain) UIColor * titleTextColor;
@property BOOL usesSmallText;
@property(readonly) BOOL visibleHeightLocked;

+ (id)_adjustedOccurrenceColorForDarkBackground:(id)arg1 opaque:(BOOL)arg2;
+ (id)_adjustedStripeColorForDarkBackground:(id)arg1;
+ (id)_cachedImageForCalendarColor:(id)arg1 selected:(BOOL)arg2 declined:(BOOL)arg3 cancelled:(BOOL)arg4 tentative:(BOOL)arg5 needsReply:(BOOL)arg6 dayViewBackgroundStyle:(int)arg7;
+ (void)_clearViewCache;
+ (id)_color:(id)arg1 lightenedToPercentage:(float)arg2 withFinalAlpha:(float)arg3;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(float)arg4;
+ (id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)_lightColorForColor:(id)arg1 opaque:(BOOL)arg2;
+ (id)_lightStripeColorForColor:(id)arg1;
+ (id)_viewCache;
+ (float)barToBarGapWidth;
+ (float)barToBarHorizontalDistanceIncludingBarWidth;
+ (float)bottomShadowMargin;
+ (void)clearCaches;
+ (float)colorBarImageSideLength;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStretchRectForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })defaultMargin;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })defaultPadding;
+ (float)minimumHeightForOrientation:(int)arg1 isAllDay:(BOOL)arg2;
+ (float)minimumHeightForOrientation:(int)arg1;
+ (id)occurrenceViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_computeContentRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameMutatedForProximityToHourLine:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_invalidateContentBounds;
- (id)_newResizeHandleView;
- (void)_resetContentViewPosition;
- (id)_timedEventBackgroundColor;
- (void)_updateBackgroundColor;
- (void)_updateResizeHandleLocations;
- (float)_verticalContentInset;
- (BOOL)allDayDrawingStyle;
- (void)animateToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 isAllDay:(BOOL)arg2 beginFromCurrentState:(BOOL)arg3 whenFinished:(id)arg4;
- (id)arrayOfResizeHandles;
- (void)bringResizeHandlesToFront;
- (float)cappedColorBarHeight;
- (id)color;
- (BOOL)colorBarExtendsPastOrEqualToNaturalTextHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToSuperview;
- (BOOL)dimmed;
- (int)dragTypeFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)dragging;
- (BOOL)drawsResizeHandles;
- (float)enoughHeightForOneLine;
- (void)fadeInContentViewAt:(float)arg1 minWidth:(float)arg2 animated:(BOOL)arg3;
- (BOOL)hasIcon;
- (BOOL)hideColorBar;
- (BOOL)hideText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAllDay;
- (BOOL)isBirthday;
- (BOOL)isCancelled;
- (BOOL)isDeclined;
- (BOOL)isFacebook;
- (BOOL)isTentative;
- (void)layoutSubviews;
- (id)location;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })margin;
- (BOOL)needsReply;
- (id)occurrence;
- (int)occurrenceBackgroundStyle;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })padding;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)removeFromSuperview;
- (BOOL)resetContentViewToOriginalState:(BOOL)arg1;
- (id)secondaryTextColor;
- (BOOL)selected;
- (void)setAllDay:(BOOL)arg1;
- (void)setAllDayDrawingStyle:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setAllDayDrawingStyle:(BOOL)arg1;
- (void)setBirthday:(BOOL)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setCappedColorBarHeight:(float)arg1;
- (void)setColor:(id)arg1;
- (void)setDeclined:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmed:(BOOL)arg1;
- (void)setDragging:(BOOL)arg1;
- (void)setDrawsResizeHandles:(BOOL)arg1;
- (void)setFacebook:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHideColorBar:(BOOL)arg1;
- (void)setHideText:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setHideText:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setMargin:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setNeedsReply:(BOOL)arg1;
- (void)setOccurrence:(id)arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTentative:(BOOL)arg1;
- (void)setTextBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setUsesSmallText:(BOOL)arg1;
- (void)setVisibleHeight:(float)arg1;
- (id)textBackgroundColor;
- (id)title;
- (id)titleTextColor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (float)unconstrainedWidth;
- (BOOL)usesSmallText;
- (float)viewMaxNaturalTextHeight;
- (BOOL)visibleHeightLocked;

@end
