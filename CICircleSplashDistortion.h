/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CICircleSplashDistortion : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputCenter;
@property(retain) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;

@end