/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUPointerKeyDictionary;

@interface EDKeyedCollection : EDCollection  {
    TSUPointerKeyDictionary *mMap;
}


- (bool)isObjectInMap:(id)arg1;
- (void)removeFromMap:(id)arg1;
- (void)insertIntoMap:(id)arg1;
- (bool)isOverwritingKeyOK;
- (id)objectWithKey:(int)arg1;
- (void)dealloc;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end