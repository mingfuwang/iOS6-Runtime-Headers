/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaQuery, NSArray;

@interface MPMediaItemCollection : MPMediaEntity  {
    struct MPMediaItemCollectionInternal { 
        NSArray *_items; 
        MPMediaQuery *_itemsQuery; 
        unsigned int _itemsCount; 
        MPMediaItem *_representativeItem; 
        int _containedMediaTypes; 
    } _internal;
}

@property(readonly) NSArray * items;
@property(readonly) MPMediaItem * representativeItem;
@property(readonly) unsigned int count;
@property(readonly) int mediaTypes;
@property struct MPMediaItemCollectionInternal { id x1; id x2; unsigned int x3; id x4; int x5; } _internal;

+ (id)representativePersistentIDPropertyForGroupingType:(int)arg1;
+ (id)sortTitlePropertyForGroupingType:(int)arg1;
+ (id)titlePropertyForGroupingType:(int)arg1;
+ (id)collectionWithItems:(id)arg1;

- (BOOL)hasDownloadableItem;
- (BOOL)hasDownloadingItem;
- (id)itemsQuery;
- (id)initWithItemsQuery:(id)arg1;
- (id)representativeItem;
- (void)set_internal:(struct MPMediaItemCollectionInternal { id x1; id x2; unsigned int x3; id x4; int x5; })arg1;
- (struct MPMediaItemCollectionInternal { id x1; id x2; unsigned int x3; id x4; int x5; })_internal;
- (id)items;
- (id)init;
- (void)dealloc;
- (unsigned int)count;
- (int)mediaTypes;
- (id)initWithItems:(id)arg1;
- (id)_init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end