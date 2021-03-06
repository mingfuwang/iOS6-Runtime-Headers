/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, <AVVoiceControllerRecordDelegate>, <Endpointer>, NSDictionary, <AVVoiceControllerPlaybackDelegate>;

@interface AVVoiceController : NSObject  {
    void *_impl;
}

@property(getter=isBargeInDetectEnabled) BOOL bargeInDetectEnabled;
@property(getter=isStopOnBargeInEnabled) BOOL stopOnBargeInEnabled;
@property(readonly) NSString * recordRoute;
@property(readonly) unsigned long long lastRecordStartTime;
@property(readonly) NSDictionary * recordSettings;
@property(getter=isRecording,readonly) BOOL recording;
@property <Endpointer> * endpointerDelegate;
@property int recordEndpointMode;
@property double recordStartWaitTime;
@property double recordInterspeechWaitTime;
@property double recordEndWaitTime;
@property <AVVoiceControllerRecordDelegate> * recordDelegate;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property(readonly) NSDictionary * playbackSettings;
@property(getter=isPlaying,readonly) BOOL playing;
@property <AVVoiceControllerPlaybackDelegate> * playbackDelegate;
@property float playbackVolume;
@property(getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;
@property float alertVolume;


- (BOOL)isPlaying;
- (void)stopPlaying;
- (void)setStopOnEndpointEnabled:(BOOL)arg1;
- (BOOL)isStopOnEndpointEnabled;
- (float)playbackVolume;
- (void)setPlaybackVolume:(float)arg1;
- (float)alertVolume;
- (void)setAlertVolume:(float)arg1;
- (BOOL)setPlaybackBufferDuration:(double)arg1;
- (double)getPlaybackBufferDuration;
- (id)playbackSettings;
- (void)setPlaybackDelegate:(id)arg1;
- (id)playbackDelegate;
- (void)setRecordEndWaitTime:(double)arg1;
- (double)recordEndWaitTime;
- (void)setRecordInterspeechWaitTime:(double)arg1;
- (double)recordInterspeechWaitTime;
- (void)setRecordStartWaitTime:(double)arg1;
- (double)recordStartWaitTime;
- (void)setRecordEndpointMode:(int)arg1;
- (int)recordEndpointMode;
- (void)setEndpointerDelegate:(id)arg1;
- (id)endpointerDelegate;
- (BOOL)setRecordBufferDuration:(double)arg1;
- (double)getRecordBufferDuration;
- (id)recordSettings;
- (void)setRecordDelegate:(id)arg1;
- (id)recordDelegate;
- (BOOL)startPlaying;
- (BOOL)preparePlaybackFromURL:(id)arg1 error:(id*)arg2;
- (BOOL)preparePlaybackWithSettings:(id)arg1 error:(id*)arg2;
- (BOOL)startRecording;
- (BOOL)playAlertSoundForType:(int)arg1;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id*)arg2;
- (BOOL)setCurrentContext:(id)arg1 error:(id*)arg2;
- (void)releaseAudioSession;
- (id)initWithContext:(id)arg1 error:(id*)arg2;
- (void)setStopOnBargeInEnabled:(BOOL)arg1;
- (BOOL)isStopOnBargeInEnabled;
- (void)setBargeInDetectEnabled:(BOOL)arg1;
- (BOOL)isBargeInDetectEnabled;
- (unsigned long long)lastRecordStartTime;
- (id)recordRoute;
- (void)endPlaybackInterruption;
- (void)beginPlaybackInterruption;
- (void)endRecordInterruption;
- (void)beginRecordInterruption;
- (void)decodeError;
- (void)finishedPlaying;
- (void)playbackBufferReceived:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (void)beganPlaying;
- (void)encodeError;
- (void)endpointDetected;
- (void)interspeechPointDetected;
- (void)startpointDetected;
- (void)recordBufferReceived:(struct MyAudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (void)beganRecording;
- (void)hardwareConfigChanged;
- (void)finishedRecording;
- (float)averagePowerForChannel:(unsigned int)arg1;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)isMeteringEnabled;
- (struct ControllerImpl { id x1; id x2; id x3; struct CAStreamBasicDescription { double x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; unsigned int x_4_1_9; } x4; double x5; boolx6; struct AudioQueueLevelMeterState {} *x7; struct OpaqueAudioQueue {} *x8; int x9; struct OpaqueAudioConverter {} *x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; struct AudioQueueBuffer {} **x15; unsigned long long x16; int x17; int x18; boolx19; struct MemorySyncBool { boolx_20_1_1; } x20; boolx21; float x22; id x23; unsigned int x24; id x25; struct CAStreamBasicDescription { double x_26_1_1; unsigned int x_26_1_2; unsigned int x_26_1_3; unsigned int x_26_1_4; unsigned int x_26_1_5; unsigned int x_26_1_6; unsigned int x_26_1_7; unsigned int x_26_1_8; unsigned int x_26_1_9; } x26; double x27; struct OpaqueAudioQueue {} *x28; int x29; id x30; unsigned int x31; struct AudioQueueBuffer {} **x32; int x33; boolx34; boolx35; boolx36; boolx37; struct MemorySyncBool { boolx_38_1_1; } x38; boolx39; float x40; unsigned int x41; struct CAStreamBasicDescription { double x_42_1_1; unsigned int x_42_1_2; unsigned int x_42_1_3; unsigned int x_42_1_4; unsigned int x_42_1_5; unsigned int x_42_1_6; unsigned int x_42_1_7; unsigned int x_42_1_8; unsigned int x_42_1_9; } x42; long long x43; struct OpaqueAudioQueue {} *x44; struct map<AVVoiceAlertType, NSURL *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *>> > { struct _Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, NSURL *>, std::_Select1st<std::pair<const AVVoiceAlertType, NSURL *>>, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, NSURL *>> > { struct _Rb_tree_impl<std::less<AVVoiceAlertType>, false> { struct less<AVVoiceAlertType> { } x_1_3_1; struct _Rb_tree_node_base { int x_2_4_1; struct _Rb_tree_node_base {} *x_2_4_2; struct _Rb_tree_node_base {} *x_2_4_3; struct _Rb_tree_node_base {} *x_2_4_4; } x_1_3_2; unsigned int x_1_3_3; } x_1_2_1; } x_45_1_1; } x45; struct map<AVVoiceAlertType, AudioQueueBuffer *, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>> > { struct _Rb_tree<AVVoiceAlertType, std::pair<const AVVoiceAlertType, AudioQueueBuffer *>, std::_Select1st<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>>, std::less<AVVoiceAlertType>, std::allocator<std::pair<const AVVoiceAlertType, AudioQueueBuffer *>> > { struct _Rb_tree_impl<std::less<AVVoiceAlertType>, false> { struct less<AVVoiceAlertType> { } x_1_3_1; struct _Rb_tree_node_base { int x_2_4_1; struct _Rb_tree_node_base {} *x_2_4_2; struct _Rb_tree_node_base {} *x_2_4_3; struct _Rb_tree_node_base {} *x_2_4_4; } x_1_3_2; unsigned int x_1_3_3; } x_1_2_1; } x_46_1_1; } x46; boolx47; int x48; float x49; double x50; unsigned long long x51; float x52; float x53; struct OpaqueAudioQueue {} *x54; id x55; struct OpaqueAudioFileID {} *x56; unsigned int x57; struct AudioFormatListItem {} *x58; unsigned int x59; unsigned int x60; char *x61; struct AudioFilePacketTableInfo { long long x_62_1_1; int x_62_1_2; int x_62_1_3; } x62; long long x63; long long x64; boolx65; int x66; int x67; id x68; boolx69; boolx70; boolx71; boolx72; int x73; double x74; double x75; double x76; boolx77; boolx78; id x79; unsigned char x80; int x81; boolx82; boolx83; int x84; boolx85; struct _opaque_pthread_mutex_t { long x_86_1_1; BOOL x_86_1_2[40]; } x86[5]; int x87; }*)impl;
- (BOOL)isRecording;
- (void)dealloc;
- (void)finalize;
- (void)stopRecording;

@end
