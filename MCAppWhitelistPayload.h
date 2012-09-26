/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray;

@interface MCAppWhitelistPayload : MCPayload  {
    NSArray *_whitelistedAppsAndOptions;
}

@property(retain) NSArray * whitelistedAppsAndOptions;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (id)whitelistedAppsAndOptions;
- (void)setWhitelistedAppsAndOptions:(id)arg1;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)description;

@end