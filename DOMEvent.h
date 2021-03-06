/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, <DOMEventTarget>;

@interface DOMEvent : DOMObject  {
}

@property(readonly) NSString * type;
@property(readonly) <DOMEventTarget> * target;
@property(readonly) <DOMEventTarget> * currentTarget;
@property(readonly) unsigned short eventPhase;
@property(readonly) BOOL bubbles;
@property(readonly) BOOL cancelable;
@property(readonly) unsigned long long timeStamp;
@property(readonly) <DOMEventTarget> * srcElement;
@property BOOL returnValue;
@property BOOL cancelBubble;


- (void)setReturnValue:(BOOL)arg1;
- (void)stopImmediatePropagation;
- (void)initEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3;
- (void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3;
- (void)preventDefault;
- (void)stopPropagation;
- (void)setCancelBubble:(BOOL)arg1;
- (BOOL)cancelBubble;
- (BOOL)returnValue;
- (id)srcElement;
- (BOOL)defaultPrevented;
- (unsigned long long)timeStamp;
- (BOOL)cancelable;
- (BOOL)bubbles;
- (unsigned short)eventPhase;
- (id)currentTarget;
- (void)dealloc;
- (void)finalize;
- (id)type;
- (id)target;

@end
