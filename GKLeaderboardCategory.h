/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKLeaderboardCategoryInternal, NSString, UIImage;

@interface GKLeaderboardCategory : NSObject <NSCoding> {
    GKLeaderboardCategoryInternal *_internal;
    UIImage *_image;
}

@property(retain) NSString * categoryID;
@property(retain) NSString * groupID;
@property(retain) NSString * localizedTitle;
@property int overallRank;
@property int overallRankCount;
@property int rankAmongFriends;
@property int friendCount;
@property(readonly) NSString * imageURL;
@property(readonly) NSString * miniImageURL;
@property(retain) UIImage * image;
@property(retain) GKLeaderboardCategoryInternal * internal;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (id)miniImageURL;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)imageURL;
- (id)internal;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)init;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end