/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class MFPhoneBitmap;

@interface MFPhonePatternBrush : MFPhoneBrush  {
    MFPhoneBitmap *m_pattern;
    BOOL m_usePaletteForBilevel;
}

+ (id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2;

- (id)initWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2;
- (void)fillPath:(id)arg1 :(struct CGPath { }*)arg2;
- (void)dealloc;

@end