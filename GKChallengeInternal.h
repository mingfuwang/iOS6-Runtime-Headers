/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSString, NSOrderedSet;

@interface GKChallengeInternal : GKInternalRepresentation  {
    NSString *_receivingPlayerID;
    int _state;
    NSDate *_issueDate;
    NSDate *_completionDate;
    NSString *_message;
    NSOrderedSet *_compatibleBundleIDs;
    NSString *_bundleID;
    NSString *_challengeID;
    NSString *_issuingPlayerID;
}

@property(retain) NSString * challengeID;
@property(retain) NSString * bundleID;
@property(retain) NSString * issuingPlayerID;
@property(retain) NSString * receivingPlayerID;
@property(retain) NSDate * issueDate;
@property(retain) NSDate * completionDate;
@property int state;
@property(retain) NSOrderedSet * compatibleBundleIDs;
@property(retain) NSString * message;

+ (id)codedPropertyKeys;
+ (id)internalRepresentation;

- (void)setBundleID:(id)arg1;
- (void)setIssuingPlayerID:(id)arg1;
- (id)issuingPlayerID;
- (void)setChallengeID:(id)arg1;
- (void)setCompatibleBundleIDs:(id)arg1;
- (id)compatibleBundleIDs;
- (void)setIssueDate:(id)arg1;
- (id)issueDate;
- (void)setReceivingPlayerID:(id)arg1;
- (id)receivingPlayerID;
- (id)findLocalGameBundleID;
- (id)issueRepresentationToPlayerID:(id)arg1;
- (id)bundleID;
- (id)challengeID;
- (id)serverRepresentation;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;
- (void)setState:(int)arg1;
- (int)state;
- (id)message;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setMessage:(id)arg1;

@end
