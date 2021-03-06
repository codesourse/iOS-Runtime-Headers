/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIView;

@interface SBAwayViewPluginController : NSObject {
    BOOL _alwaysFullscreen;
    id _disableTransitionBlock;
    unsigned int _effectivePresentationStyle;
    NSString *_enablingApplicationBundleIdentifier;
    BOOL _fullscreen;
    int _orientation;
    UIView *_view;
    BOOL _viewCanBeDisplayed;
}

@property(getter=isAlwaysFullscreen) BOOL alwaysFullscreen;
@property(getter=_effectivePresentationStyle,setter=_setEffectivePresentationStyle:) unsigned int effectivePresentationStyle;
@property(copy) NSString * enablingApplicationBundleIdentifier;
@property int orientation;
@property(retain) UIView * view;
@property BOOL viewCanBeDisplayed;

+ (id)_serializedDataForContext:(id)arg1;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)disableBundleNamed:(id)arg1;
+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;

- (id)_disableTransitionBlock;
- (unsigned int)_effectivePresentationStyle;
- (void)_setDisableTransitionBlock:(id)arg1;
- (void)_setEffectivePresentationStyle:(unsigned int)arg1;
- (BOOL)allowsControlCenter;
- (BOOL)allowsLockScreenCamera;
- (BOOL)allowsLockScreenHint;
- (BOOL)allowsLockScreenMediaControls;
- (BOOL)allowsNotificationCenter;
- (BOOL)allowsPhotoSlideshow;
- (BOOL)allowsSiri;
- (BOOL)allowsTimer;
- (void)alwaysFullscreenValueHasChanged;
- (BOOL)animateResumingToApplicationWithIdentifier:(id)arg1;
- (id)backgroundView;
- (id)bundleIDForUnlock;
- (BOOL)canBeAlwaysFullscreen;
- (BOOL)canScreenDim;
- (id)customHeaderView;
- (void)dealloc;
- (void)deviceLockViewDidHide;
- (void)deviceLockViewWillShow;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)disable;
- (void)disableWithTransitionBlock:(id)arg1;
- (BOOL)disablesAwayItemsCompletely;
- (id)enableTransitionBlock;
- (id)enablingApplicationBundleIdentifier;
- (BOOL)handleGesture:(int)arg1 fingerCount:(unsigned int)arg2;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (id)init;
- (BOOL)isAlwaysFullscreen;
- (BOOL)isFullscreen;
- (id)legibilitySettings;
- (void)loadView;
- (void)lockScreenMediaControlsShown:(BOOL)arg1;
- (unsigned int)notificationBehavior;
- (int)orientation;
- (unsigned int)overlayStyle;
- (int)pluginPriority;
- (unsigned int)presentationStyle;
- (void)purgeView;
- (BOOL)retainsPriorityWhileInactive;
- (void)setActivationContext:(id)arg1;
- (void)setAlwaysFullscreen:(BOOL)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setEnablingApplicationBundleIdentifier:(id)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1 duration:(double)arg2;
- (void)setOrientation:(int)arg1;
- (void)setView:(id)arg1;
- (void)setViewCanBeDisplayed:(BOOL)arg1;
- (BOOL)shouldAutoHideNotifications;
- (BOOL)shouldDisableOnRelock;
- (BOOL)shouldDisableOnUnlock;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)showAwayItems;
- (BOOL)showBatteryChargingText;
- (BOOL)showDate;
- (BOOL)showDateView;
- (BOOL)showHeaderView;
- (BOOL)showStatusBar;
- (BOOL)showsDuringCall;
- (double)transitionDuration;
- (id)view;
- (BOOL)viewCanBeDisplayed;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (double)viewFadeInDuration;
- (BOOL)viewWantsFullscreenLayout;
- (BOOL)viewWantsOverlayLayout;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsAutomaticFullscreenTimer;
- (BOOL)wantsHardwareEventsWhenScreenDimmed;
- (BOOL)wantsMenuButtonHeldEvent;
- (BOOL)wantsMesaAutoUnlock;
- (BOOL)wantsSwipeGestureRecognizer;
- (BOOL)wantsToOpenURLsWhilePasscodeLocked;
- (BOOL)wantsUserWallpaper;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
