/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebNotificationPrivate;

@interface WebNotification : NSObject  {
    WebNotificationPrivate *_private;
}


- (void)dispatchErrorEvent;
- (void)dispatchClickEvent;
- (void)dispatchCloseEvent;
- (void)dispatchShowEvent;
- (unsigned long long)notificationID;
- (id)init;
- (id)body;
- (id)title;
- (id)origin;
- (id)tag;

@end