/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessageStatus : NSObject  {
    unsigned int _messageId;
    int _messageType;
    int _result;
}

@property(readonly) unsigned int messageId;
@property(readonly) int messageType;
@property(readonly) int result;


- (id)initWithMessageId:(unsigned int)arg1 messageType:(int)arg2 result:(int)arg3;
- (int)messageType;
- (unsigned int)messageId;
- (int)result;

@end