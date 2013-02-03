/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
    NSOperationQueue *_queue;
}

+ (BOOL)isActive;
+ (id)mainQueue;

- (void)addOperation:(id)arg1;
- (void)cancelAllOperations;
- (void)dealloc;
- (id)init;
- (id)operations;
- (void)setMaxConcurrentOperationCount:(NSInteger)arg1;
- (void)setSuspended:(BOOL)arg1;

@end