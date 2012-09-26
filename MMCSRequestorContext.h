/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

@class MMCSEngine, <NSObject>;

@interface MMCSRequestorContext : NSObject  {
    MMCSEngine *_engine;
    <NSObject> *_context;
    char **_signatures;
    unsigned long _count;
    unsigned long long *_itemIDs;
    unsigned int *_itemFlags;
    char **_authTokens;
    int _type;
}

@property MMCSEngine * engine;
@property <NSObject> * context;
@property int type;
@property unsigned long count;
@property unsigned long long* itemIDs;
@property unsigned int* itemFlags;
@property char ** signatures;
@property char ** authTokens;

+ (id)contextWithEngine:(id)arg1 context:(id)arg2 type:(int)arg3;

- (void)setAuthTokens:(char **)arg1;
- (char **)authTokens;
- (void)setItemFlags:(unsigned int*)arg1;
- (unsigned int*)itemFlags;
- (void)setItemIDs:(unsigned long long*)arg1;
- (unsigned long long*)itemIDs;
- (void)setSignatures:(char **)arg1;
- (char **)signatures;
- (void)setEngine:(id)arg1;
- (id)initWithEngine:(id)arg1 context:(id)arg2 type:(int)arg3;
- (id)engine;
- (void)setType:(int)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)count;
- (void).cxx_destruct;
- (int)type;
- (void)setCount:(unsigned long)arg1;

@end