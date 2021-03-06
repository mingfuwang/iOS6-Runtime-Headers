/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureInfo : NSObject <NSCopying> {
    unsigned int name;
    unsigned int target;
    unsigned int width;
    unsigned int height;
    unsigned int alphaState;
    unsigned int textureOrigin;
    BOOL containsMipmaps;
}

@property(readonly) unsigned int name;
@property(readonly) unsigned int target;
@property(readonly) unsigned int width;
@property(readonly) unsigned int height;
@property(readonly) unsigned int alphaState;
@property(readonly) unsigned int textureOrigin;
@property(readonly) BOOL containsMipmaps;


- (id)initWithTexture:(id)arg1 textureName:(unsigned int)arg2;
- (BOOL)containsMipmaps;
- (unsigned int)textureOrigin;
- (unsigned int)alphaState;
- (unsigned int)height;
- (unsigned int)width;
- (void)dealloc;
- (unsigned int)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)target;

@end
