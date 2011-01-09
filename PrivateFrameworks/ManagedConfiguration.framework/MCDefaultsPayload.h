/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDictionary;



@interface MCDefaultsPayload : MCPayload 
{
    NSDictionary *_defaultsByDomain;
}

+ (id)_allowedDefaults;
+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;

- (BOOL)_checkForValidDefaults:(id)arg1 outError:(id*)arg2;
- (id)domains;
- (id)defaultsForDomain:(id)arg1;
- (id)subtitle1Description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (id)description;
- (void)dealloc;

@end