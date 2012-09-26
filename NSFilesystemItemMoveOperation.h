/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSError, NSString;

@interface NSFilesystemItemMoveOperation : NSOperation  {
    id _delegate;
    NSString *_sourcePath;
    NSString *_destinationPath;
    NSError *_error;
}

+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (id)filesystemItemMoveOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;

- (void)dealloc;
- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;
- (void)main;
- (void)_setError:(id)arg1;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (id)error;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end