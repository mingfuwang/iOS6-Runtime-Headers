/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIAlertView, NSError;

@interface GKHostedAuthenticateViewController : GKHostedViewController <GKAuthenticateViewController> {
    BOOL _shouldShowActiveViewController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    BOOL _disablesSignIn;
    UIAlertView *_alert;
    NSError *_error;
}

@property(retain) UIAlertView * alert;
@property(retain) NSError * error;
@property(copy) id completionHandler;
@property BOOL shouldShowActiveViewController;
@property BOOL disablesSignIn;


- (void)setDisablesSignIn:(BOOL)arg1;
- (BOOL)disablesSignIn;
- (BOOL)shouldShowActiveViewController;
- (void)saveActiveTextField;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)setShouldShowActiveViewController:(BOOL)arg1;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (id)alert;
- (void)setAlert:(id)arg1;
- (void)dealloc;
- (void)setCompletionHandler:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)completionHandler;
- (unsigned int)supportedInterfaceOrientations;
- (void)setError:(id)arg1;
- (id)error;

@end
