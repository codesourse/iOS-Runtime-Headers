/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKRoadMapModel, VKTrafficDrawStyle, VKTrafficPainter;

@interface VKRoadTrafficMapModel : VKVectorMapModel {
    BOOL _enabled;
    VKRoadMapModel *_roadModel;
    float _styleZAdjust;
    VKTrafficDrawStyle *_trafficDrawStyle;
    VKTrafficPainter *_trafficPainter;
}

@property BOOL enabled;
@property(retain) VKRoadMapModel * roadModel;

- (void)dealloc;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (BOOL)enabled;
- (id)init;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (id)roadModel;
- (void)setEnabled:(BOOL)arg1;
- (void)setRoadModel:(id)arg1;
- (void)stylesheetDidChange;
- (unsigned int)supportedRenderPasses;

@end
