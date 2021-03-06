/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel;

@interface UIDatePickerWeekMonthDayView : UIView  {
    UILabel *_dateLabel;
    UILabel *_weekdayLabel;
    float _weekdayWidth;
    struct { 
        unsigned int weekdayLast : 1; 
    } _datePickerWeekMonthDayViewFlags;
}

@property(readonly) UILabel * dateLabel;
@property(readonly) UILabel * weekdayLabel;
@property float weekdayWidth;
@property BOOL weekdayLast;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (float)weekdayWidth;
- (id)weekdayLabel;
- (id)dateLabel;
- (void)setWeekdayLast:(BOOL)arg1;
- (BOOL)weekdayLast;
- (void)setWeekdayWidth:(float)arg1;
- (void)layoutSubviews;

@end
