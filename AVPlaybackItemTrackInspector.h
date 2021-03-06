/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector  {
    struct OpaqueFigPlaybackItem { } *_playbackItem;
    int _trackID;
    unsigned long _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}


- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)nominalFrameRate;
- (struct CGSize { float x1; float x2; })dimensions;
- (id)extendedLanguageTag;
- (float)estimatedDataRate;
- (long long)totalSampleDataLength;
- (BOOL)isSelfContained;
- (id)formatDescriptions;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (int)trackID;
- (int)naturalTimeScale;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)mediaType;
- (BOOL)isEnabled;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)finalize;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)languageCode;
- (id)asset;

@end
