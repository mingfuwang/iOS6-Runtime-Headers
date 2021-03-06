/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray;

@interface AVPlaybackItemInspector : AVAssetInspector  {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    NSArray *_trackIDs;
}

@property(getter=_playbackItem,setter=_setPlaybackItem:,retain) struct OpaqueFigPlaybackItem { }* playbackItem;


- (id)initWithPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 trackIDs:(id)arg2;
- (void)_setPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (long)trackCount;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)lyrics;
- (id)trackIDs;
- (BOOL)providesPreciseDurationAndTiming;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (struct CGSize { float x1; float x2; })naturalSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;

@end
