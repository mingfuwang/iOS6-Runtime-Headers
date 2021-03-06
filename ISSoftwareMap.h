/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray;

@interface ISSoftwareMap : NSObject  {
    NSArray *_applications;
}

@property(readonly) NSArray * applications;

+ (void)_startWatchingInstallationNotifications;
+ (id)loadedMap;
+ (void)invalidateCurrentMap;
+ (BOOL)haveApplicationsOfType:(struct __CFString { }*)arg1;
+ (id)currentMap;
+ (void)startObservingNotifications;
+ (void)setCurrentMap:(id)arg1;
+ (BOOL)currentMapIsValid;
+ (id)applicationForBundleIdentifier:(id)arg1;
+ (id)applicationForBundleIdentifier:(id)arg1 applicationType:(struct __CFString { }*)arg2;

- (id)copySoftwareUpdatesPropertyList;
- (id)applications;
- (id)applicationForItemIdentifier:(id)arg1;
- (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1;
- (void)_loadFromMobileInstallation;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;

@end
