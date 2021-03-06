/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSOperationQueue, NSURLRequest, NSDictionary, NSURLConnection, NSURL;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {
    NSURLConnection *_connection;
    NSOperationQueue *_delegateQueue;
    NSURL *_url;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    id _delegate;
    NSDictionary *_connectionProperties;
    BOOL _connectionActive;
}


- (void)dealloc;
- (void)_withErrorForConnection:(id)arg1;
- (void)_withConnection:(id)arg1;
- (void)_withActiveConnectionAndDelegate:(id)arg1;
- (void)_withConnectionDisconnectFromConnection;
- (BOOL)isConnectionActive;
- (void)setConnectionActive:(BOOL)arg1;
- (void)invokeForDelegate:(id)arg1;
- (void)_withConnectionAndDelegate:(id)arg1 onlyActive:(BOOL)arg2;
- (void)_invalidate;
- (id)_connectionProperties;
- (id)currentRequest;
- (id)originalRequest;
- (void)_setDelegateQueue:(id)arg1;
- (id)initWithInfo:(const struct InternalInit { id x1; id x2; id x3; id x4; BOOL x5; long long x6; }*)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
