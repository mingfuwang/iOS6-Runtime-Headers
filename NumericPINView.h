/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIPasscodeField;

@interface NumericPINView : PINView  {
    UIPasscodeField *_passcodeField;
}


- (void)hidePasscodeField:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)stringValue;
- (void)appendString:(id)arg1;
- (void)deleteLastCharacter;
- (void)setStringValue:(id)arg1;
- (void)layoutSubviews;

@end
