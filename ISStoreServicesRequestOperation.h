/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation  {
    SSRequest *_request;
}

@property(readonly) SSRequest * request;


- (void)dealloc;
- (id)request;
- (void)run;
- (void)cancel;
- (id)initWithRequest:(id)arg1;

@end