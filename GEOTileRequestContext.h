/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileRequester, GEOTileKeyList;

@interface GEOTileRequestContext : NSObject  {
    GEOTileKeyList *_fullList;
    GEOTileKeyList *_networkList;
    GEOTileRequester *_tileRequester;
}

@property(retain) GEOTileKeyList * fullList;
@property(retain) GEOTileKeyList * networkList;
@property(retain) GEOTileRequester * tileRequester;


- (id)tileRequester;
- (void)setTileRequester:(id)arg1;
- (void)setNetworkList:(id)arg1;
- (void)setFullList:(id)arg1;
- (id)networkList;
- (id)fullList;
- (void)dealloc;

@end