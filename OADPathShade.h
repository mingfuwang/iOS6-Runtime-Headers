/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRelativeRect;

@interface OADPathShade : OADShade  {
    OADRelativeRect *mFillToRect;
    BOOL mIsFillToRectOverridden;
    int mType;
    BOOL mIsTypeOverridden;
}

+ (id)defaultProperties;

- (BOOL)isTypeOverridden;
- (BOOL)isFillToRectOverridden;
- (id)initWithDefaults;
- (void)setFillToRect:(id)arg1;
- (id)fillToRect;
- (void)setType:(int)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;

@end
