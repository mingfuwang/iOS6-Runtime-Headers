/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSSet, NSDictionary;

@interface AVOutputSettings : NSObject <NSCopying> {
    NSDictionary *_outputSettingsDictionary;
}

@property(readonly) NSSet * compatibleMediaTypes;
@property(readonly) BOOL willYieldCompressedSamples;
@property(getter=isCodecAvailableOnCurrentSystem,readonly) BOOL codecAvailableOnCurrentSystem;
@property(readonly) NSDictionary * outputSettingsDictionary;

+ (id)defaultOutputSettingsForMediaType:(id)arg1;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)arg1;
+ (unsigned int)validateOutputSettingsDictionary:(id)arg1;
+ (unsigned int)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id*)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)registeredOutputSettingsClasses;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;

- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;
- (id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)isCodecAvailableOnCurrentSystem;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (BOOL)willYieldCompressedSamples;
- (id)compatibleMediaTypes;
- (id)outputSettingsDictionary;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
