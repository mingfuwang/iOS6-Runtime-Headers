/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSString, IMHandle;

@interface AVChatCancelInvitationOp : IMExtendedOperation  {
    IMHandle *_imHandle;
    NSString *_conferenceID;
    unsigned int _sessionID;
}


- (id)initWithIMHandle:(id)arg1 avChat:(id)arg2;
- (void)didFinish;
- (void)dealloc;

@end
