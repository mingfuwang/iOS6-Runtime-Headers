/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebGeolocationManagerPrivate;

@interface WebGeolocationManager : NSObject  {
    WebGeolocationManagerPrivate *_private;
}

+ (id)sharedGeolocationManager;

- (void)suspend;
- (void)resume;

@end