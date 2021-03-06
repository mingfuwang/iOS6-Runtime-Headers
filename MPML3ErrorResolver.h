/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, NSError, SSKeybagRequest;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
    MPMediaItem *_mediaItem;
    SSKeybagRequest *_request;
    NSError *_error;
}

@property(retain) MPMediaItem * mediaItem;
@property(retain) SSKeybagRequest * request;
@property(retain) NSError * error;


- (void)setMediaItem:(id)arg1;
- (void)setRequest:(id)arg1;
- (id)initWithMediaItem:(id)arg1;
- (void)resolveError:(id)arg1;
- (id)mediaItem;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)dealloc;
- (void)setError:(id)arg1;
- (id)request;
- (id)error;

@end
