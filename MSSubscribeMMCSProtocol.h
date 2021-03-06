/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

@class <MSSubscribeStorageProtocolDelegate>, NSMutableDictionary;

@interface MSSubscribeMMCSProtocol : MSMMCSProtocol <MSSubscribeStorageProtocol> {
    <MSSubscribeStorageProtocolDelegate> *_delegate;
    unsigned int _itemCount;
    NSMutableDictionary *_itemIDToAssetDict;
    unsigned long long *_itemIDs;
    const char **_signatures;
    char **_authTokens;
}

@property <MSSubscribeStorageProtocolDelegate> * delegate;


- (void)_tellDelegateProtocolDidFinishRetrievingAssetParams:(id)arg1;
- (void)_requestCompleted;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (void)retrieveAssets:(id)arg1;
- (id)initWithPersonID:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)deactivate;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
