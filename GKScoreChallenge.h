/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScore;

@interface GKScoreChallenge : GKChallenge  {
    GKScore *_score;
}

@property(retain) GKScore * score;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (id)titleTextForAuxData:(id)arg1;
- (id)goalTextForAuxData:(id)arg1;
- (void)loadAuxDataWithHandler:(id)arg1;
- (id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2;
- (void)setInternal:(id)arg1;
- (id)cellGoalTextForLeaderboard:(id)arg1;
- (id)identifierKey;
- (void)setScore:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)score;

@end