/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock;

@interface ISDelegateProxy : NSObject  {
    id _delegate;
    NSLock *_lock;
    BOOL _shouldMessageMainThread;
}


- (void)sendInvocationToDelegate:(id)arg1;
- (void)setShouldMessageMainThread:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
