/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVPlayerInternal, NSArray;

@interface AVPlayer : NSObject  {
    AVPlayerInternal *_player;
}

@property(setter=_setDisplaysUsedForPlayback:,copy) NSArray * _displaysUsedForPlayback;
@property(readonly) int _externalProtectionStatus;
@property(getter=isAudioPlaybackEnabledAtAllRates,readonly) BOOL audioPlaybackEnabledAtAllRates;
@property float minRateForAudioPlayback;
@property float maxRateForAudioPlayback;
@property BOOL disallowsAMRAudio;
@property(readonly) int status;
@property(readonly) NSError * error;

+ (BOOL)automaticallyNotifiesObserversOfDisallowsAMRAudio;
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (BOOL)automaticallyNotifiesObserversOfUsesExternalPlaybackWhileExternalScreenIsActive;
+ (BOOL)automaticallyNotifiesObserversOfAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (BOOL)automaticallyNotifiesObserversOfVolume;
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (id)keyPathsForValuesAffectingRate;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
+ (void)initialize;

- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (id)_displaysUsedForPlayback;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)_setClientName:(id)arg1;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (BOOL)outputObscuredDueToInsufficientExternalProtection;
- (BOOL)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)setClosedCaptionDisplayEnabled:(BOOL)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)arg1;
- (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (BOOL)isClosedCaptionDisplayEnabled;
- (void)setAllowsAirPlayVideo:(BOOL)arg1;
- (BOOL)allowsAirPlayVideo;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)removeTimeObserver:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)setDisallowsAMRAudio:(BOOL)arg1;
- (BOOL)disallowsAMRAudio;
- (BOOL)isAirPlayVideoActive;
- (BOOL)_disallowsAMRAudio;
- (id)_clientName;
- (BOOL)_shouldDetachContentLayersFromFigPlayer;
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (BOOL)_CALayerDestinationIsTVOut;
- (float)maxRateForAudioPlayback;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (float)minRateForAudioPlayback;
- (void)setMinRateForAudioPlayback:(float)arg1;
- (BOOL)isAudioPlaybackEnabledAtAllRates;
- (void)removeAudioPlaybackRateLimits;
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;
- (int)_externalProtectionStatus;
- (id)_playbackDisplaysForFigPlayer;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (BOOL)_shouldLogPerformanceData;
- (void)_setCurrentSubtitlesPayload:(id)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)setExternalVideoGravity:(id)arg1;
- (id)externalVideoGravity;
- (id)_pixelBufferAttributeMediator;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (int)externalPlaybackType;
- (BOOL)isExternalPlaybackActive;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (int)actionAtItemEnd;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (struct OpaqueCMClock { }*)masterClock;
- (void)prerollOperationDidComplete:(BOOL)arg1 notificationPayload:(struct __CFDictionary { }*)arg2;
- (void)cancelPendingPrerolls;
- (void)prerollAtRate:(float)arg1 completionHandler:(id)arg2;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id)arg2;
- (void)_removeAllItems;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_currentItemStatusIsReadyToPlay;
- (id)initWithDispatchQueue:(id)arg1;
- (id)_fpNotificationNames;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (id)_playerLayers;
- (void)_detachLayersFromFigPlayer;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)allowsExternalPlayback;
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;
- (BOOL)_allowsExternalPlayback;
- (BOOL)_isClosedCaptionDisplayEnabled;
- (void)_setActionAtItemEnd:(int)arg1 allowingAdvance:(BOOL)arg2;
- (int)_actionAtItemEnd;
- (int)_defaultActionAtItemEnd;
- (id)playerAVAudioSession;
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)arg1;
- (int)_createPrerollID;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id)arg4;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)seekToDate:(id)arg1 completionHandler:(id)arg2;
- (void)seekToDate:(id)arg1;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_attachLayersToFigPlayer;
- (BOOL)_externalPlaybackActive;
- (id)_propertyStorage;
- (BOOL)_airPlayVideoActive;
- (void)_addFPListeners;
- (BOOL)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (void)_setCurrentItem:(id)arg1;
- (BOOL)_attachItem:(id)arg1 andPerformOperation:(int)arg2 withObject:(id)arg3;
- (BOOL)_removeItem:(id)arg1;
- (void)_coordinateWithRemovalOfItem:(id)arg1;
- (struct OpaqueFigPlayer { }*)_figPlayer;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (id)_currentItem;
- (id)_items;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_removeFPListeners;
- (void)_checkDefaultsWriteForPerformanceLogging;
- (void)_playerDestinationPixelBufferAttributesDidChange:(id)arg1;
- (BOOL)_iapdExtendedModeIsActive;
- (void)_didFinishSuspension:(id)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setActionAtItemEnd:(int)arg1;
- (BOOL)_insertItem:(id)arg1 afterItem:(id)arg2;
- (id)initWithPlayerItem:(id)arg1;
- (id)externalPlaybackVideoGravity;
- (void)setRate:(float)arg1;
- (id)_currentSubtitlesPayload;
- (id)_stateDispatchQueue;
- (id)_cachedValueForKey:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (void)_addLayer:(id)arg1;
- (id)_weakReference;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (float)rate;
- (float)_rate;
- (void)_setVolume:(float)arg1;
- (float)_volume;
- (void)play;
- (void)_removeAllLayers;
- (id)init;
- (void)dealloc;
- (id)dispatchQueue;
- (void)didChangeValueForKey:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)finalize;
- (void)_willEnterForeground:(id)arg1;
- (id)currentItem;
- (void)pause;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (id)error;
- (int)status;

@end
