/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIHoleDistortion : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputCenter;
@property(copy) NSNumber * inputRadius;

+ (id)customAttributes;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeDOD;
- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)_colorKernel;
- (id)_geomKernel;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (BOOL)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end