/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSDate;

@interface APSIncomingMessage : APSMessage  {
}

@property(copy) NSDate * timestamp;
@property(getter=wasFromStorage) BOOL fromStorage;
@property(getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;


- (void)setLastMessageFromStorage:(BOOL)arg1;
- (BOOL)wasLastMessageFromStorage;
- (void)setFromStorage:(BOOL)arg1;
- (BOOL)wasFromStorage;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
