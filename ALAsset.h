/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class ALAsset, ALAssetPrivate;

@interface ALAsset : NSObject  {
    id _internal;
}

@property(readonly) ALAsset * originalAsset;
@property(getter=isEditable,readonly) BOOL editable;
@property(retain) ALAssetPrivate * internal;


- (void)setVideoAtPath:(id)arg1 completionBlock:(id)arg2;
- (void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (struct CGImage { }*)aspectRatioThumbnail;
- (id)representationForUTI:(id)arg1;
- (id)originalAsset;
- (id)_uuid;
- (id)_typeAsString;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (void)setInternal:(id)arg1;
- (id)internal;
- (BOOL)isEditable;
- (void)dealloc;
- (BOOL)isValid;
- (id)description;
- (struct CGImage { }*)thumbnail;
- (id)defaultRepresentation;
- (id)valueForProperty:(id)arg1;

@end