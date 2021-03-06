/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceRGBColor : UIColor  {
    float redComponent;
    float greenComponent;
    float blueComponent;
    float alphaComponent;
    struct CGColor { } *cachedColor;
}


- (void)setStroke;
- (struct CGColor { }*)CGColor;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (float)alphaComponent;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (id)colorWithAlphaComponent:(float)arg1;
- (void)dealloc;
- (void)set;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (struct CGColor { }*)_createCGColorWithAlpha:(float)arg1;
- (BOOL)_getWhite:(float*)arg1 alpha:(float*)arg2;
- (id)colorSpaceName;
- (void)setFill;

@end
