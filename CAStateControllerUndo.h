/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSMutableArray, CAStateControllerUndo, CAState;

@interface CAStateControllerUndo : NSObject <CAStateRecorder> {
    CAStateControllerUndo *_next;
    CAState *_state;
    NSMutableArray *_elements;
    NSMutableArray *_transitions;
}

@property(readonly) CAStateControllerUndo * next;
@property(retain) CAState * state;
@property(retain) NSMutableArray * elements;
@property(retain) NSMutableArray * transitions;


- (void)setState:(id)arg1;
- (id)state;
- (void)setTransitions:(id)arg1;
- (id)transitions;
- (id)next;
- (void)addTransition:(id)arg1;
- (void)willAddLayer:(id)arg1;
- (void)addElement:(id)arg1;
- (id)elements;
- (void)setElements:(id)arg1;
- (void)dealloc;

@end
