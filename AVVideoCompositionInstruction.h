/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVVideoCompositionInstructionInternal;

@interface AVVideoCompositionInstruction : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    AVVideoCompositionInstructionInternal *_instruction;
}

@property(readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(retain) struct CGColor { }* backgroundColor;
@property(readonly) NSArray * layerInstructions;
@property(readonly) BOOL enablePostProcessing;

+ (void)initialize;

- (void)setLayerInstructions:(id)arg1;
- (void)_setValuesFromDictionary:(id)arg1;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (BOOL)enablePostProcessing;
- (id)layerInstructions;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)backgroundColor;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end