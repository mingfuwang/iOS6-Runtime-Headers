/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class NSMutableDictionary, NSMutableArray;

@interface IMDAppleEmailInterface : NSObject <MSSearchDelegate> {
    NSMutableDictionary *_currentSearches;
    NSMutableArray *_handlers;
}

+ (id)sharedInstance;

- (BOOL)cancelMonitoringForEmail:(id)arg1 registrationInfo:(id)arg2;
- (id)_existingSearchForEmail:(id)arg1;
- (void)_startSearchingForRegistrationEmail:(id)arg1 registrationInfo:(id)arg2 attempt:(int)arg3;
- (void)_cancelSearchesForEmail:(id)arg1;
- (void)_cancelAllSearches;
- (BOOL)startMonitoringForEmail:(id)arg1 registrationInfo:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;

@end