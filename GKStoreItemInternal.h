/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, NSDate, NSNumber, NSURL;

@interface GKStoreItemInternal : GKInternalRepresentation  {
    NSDate *_expirationDate;
    NSURL *_viewItemURL;
    NSString *_priceDisplay;
    float _averageUserRating;
    unsigned int _numberOfUserRatings;
    NSString *_artistName;
    NSNumber *_adamID;
}

@property(retain) NSNumber * adamID;
@property(retain) NSString * artistName;
@property unsigned int numberOfUserRatings;
@property float averageUserRating;
@property(retain) NSString * priceDisplay;
@property(retain) NSURL * viewItemURL;
@property(retain) NSDate * expirationDate;

+ (id)codedPropertyKeys;

- (void)setExpirationDate:(id)arg1;
- (void)setPriceDisplay:(id)arg1;
- (id)priceDisplay;
- (void)setArtistName:(id)arg1;
- (id)artistName;
- (void)setNumberOfUserRatings:(unsigned int)arg1;
- (void)setAverageUserRating:(float)arg1;
- (void)setViewItemURL:(id)arg1;
- (id)viewItemURL;
- (void)setAdamID:(id)arg1;
- (id)expirationDate;
- (id)adamID;
- (unsigned int)numberOfUserRatings;
- (float)averageUserRating;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isValid;

@end
