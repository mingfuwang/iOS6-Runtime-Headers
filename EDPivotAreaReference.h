/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotAreaReference : NSObject  {
    boolmByPosition;
    boolmRelative;
    boolmSelected;
    unsigned int mFieldId;
    unsigned int mCount;
}

+ (id)pivotAreaReference;

- (bool)relative;
- (void)setByPosition:(bool)arg1;
- (bool)byPosition;
- (void)setFieldId:(unsigned int)arg1;
- (void)setRelative:(bool)arg1;
- (unsigned int)fieldId;
- (id)init;
- (unsigned int)count;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)setCount:(unsigned int)arg1;

@end