/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction;

@interface UIKeyboardPreferencesController : NSObject  {
    UIDelayedAction *m_synchronizePreferencesAction;
    BOOL dontSynchronizePreferences;
}

@property BOOL dontSynchronizePreferences;
@property(readonly) BOOL isInternalInstall;

+ (void)handleSpecificHardwareKeyboard;
+ (void)preferencesChangedCallback:(id)arg1;
+ (id)sharedPreferencesController;

- (BOOL)isInternalInstall;
- (struct { id x1; id x2; int x3; id x4; id x5; int x6; }*)preferences;
- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (BOOL)costlyCapture;
- (void)touchSynchronizePreferencesTimer;
- (void)clearSynchronizePreferencesTimer;
- (void)setDontSynchronizePreferences:(BOOL)arg1;
- (id)defaultForKey:(int)arg1;
- (struct { id x1; id x2; BOOL x3; BOOL x4; unsigned long long x5; int x6; }*)domainForType:(int)arg1;
- (struct { id x1; id x2; BOOL x3; BOOL x4; unsigned long long x5; int x6; }*)domains;
- (BOOL)dontSynchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (void)synchronizePreferences;
- (float)rivenSizeFactor:(float)arg1;
- (BOOL)typologyEnabled;
- (BOOL)spaceConfirmationEnabled;
- (void)setInputModeLastUsed:(id)arg1;
- (void)saveInputModes:(id)arg1;
- (id)valueForKey:(int)arg1;
- (BOOL)boolForKey:(int)arg1;

@end
