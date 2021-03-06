/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource  {
    NSMutableDictionary *_loadingCompletionHandlers;
}

@property NSMutableDictionary * loadingCompletionHandlers;


- (void)setLoadingCompletionHandlers:(id)arg1;
- (BOOL)imageNeedsRefresh:(id)arg1;
- (void)loadRawImageForImageID:(id)arg1 withCompletionHandler:(id)arg2;
- (id)loadingCompletionHandlers;
- (void)loadImageForURLString:(id)arg1 withCompletionHandler:(id)arg2;
- (void)dealloc;

@end
