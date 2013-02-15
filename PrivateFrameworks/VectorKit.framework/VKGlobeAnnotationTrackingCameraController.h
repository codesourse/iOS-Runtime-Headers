/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class AltMapView, VKGlobeViewWrapper;

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    AltMapView *_altMapView;
    } _currentAnimationEndCoordinate;
    } _currentAnimationPresentationStartCoordinate;
    } _currentAnimationStartCoordinate;
    VKGlobeViewWrapper *_globe;
}

@property(retain) AltMapView * altMapView;
@property(retain) VKGlobeViewWrapper * globe;

- (id).cxx_construct;
- (void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3;
- (void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2;
- (id)altMapView;
- (void)dealloc;
- (id)globe;
- (id)init;
- (void)setAltMapView:(id)arg1;
- (void)setGesturing:(BOOL)arg1;
- (void)setGlobe:(id)arg1;

@end