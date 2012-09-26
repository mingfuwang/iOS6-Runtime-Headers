/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation  {
    id _badgeValue;
    NSString *_bundleIdentifier;
}

@property(retain) id badgeValue;
@property(retain) NSString * bundleIdentifier;


- (id)uniqueKey;
- (void)setBundleIdentifier:(id)arg1;
- (void)dealloc;
- (id)badgeValue;
- (void)setBadgeValue:(id)arg1;
- (void)run;
- (id)bundleIdentifier;

@end