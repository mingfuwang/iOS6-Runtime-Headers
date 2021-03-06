/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCCancel, TSUTemporaryDirectory;

@interface OCMapper : NSObject  {
    OCCancel *mCancel;
    TSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (id)temporaryDirectoryPath;
- (void)quit;
- (void)teardown;
- (void)setup;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (BOOL)isCancelled;

@end
