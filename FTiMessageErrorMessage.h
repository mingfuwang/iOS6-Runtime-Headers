/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString;

@interface FTiMessageErrorMessage : FTiMessagePeerMessage <NSCopying> {
    NSString *_failedMessageID;
    NSNumber *_failureReason;
}

@property(copy) NSString * failedMessageID;
@property(copy) NSNumber * failureReason;


- (void)setFailureReason:(id)arg1;
- (id)failureReason;
- (void)setFailedMessageID:(id)arg1;
- (id)failedMessageID;
- (int)command;
- (id)messageBody;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end