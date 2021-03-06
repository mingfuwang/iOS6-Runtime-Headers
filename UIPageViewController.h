/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPanGestureRecognizer, UITapGestureRecognizer, <UIPageViewControllerDataSource>, <UIPageViewControllerDelegate>, _UIPageViewControllerContentView, NSMutableArray, _UIPageCurl, NSDictionary, _UIQueuingScrollView, NSMutableDictionary, NSArray;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource> {
    <UIPageViewControllerDelegate> *_delegate;
    <UIPageViewControllerDataSource> *_dataSource;
    int _transitionStyle;
    int _navigationOrientation;
    int _spineLocation;
    BOOL _doubleSided;
    BOOL _pageControlRequiresValidation;
    NSArray *_viewControllers;
    _UIPageCurl *_pageCurl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _stashingViewControllersForRotation;
    NSArray *_viewControllersStashedForRotation;
    BOOL _interfaceRotating;
    NSMutableArray *_rotationSnapshotViews;
    int _spineLocationPriorToInterfaceRotation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _tapRegionInsets;
    struct CGSize { 
        float width; 
        float height; 
    } _tapRegionBreadths;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _effectiveTapRegionInsets;
    struct CGSize { 
        float width; 
        float height; 
    } _effectiveTapRegionBreadths;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *_tapRegions;
    float _pageSpacing;
    NSMutableDictionary *_cachedViewControllersForCurl;
    NSMutableArray *_cachedViewControllersForScroll;
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;
    int _lastKnownNavigationDirection;
    int _disableAutorotationCount;
    struct { 
        unsigned int delegateWantsTransitionWillBegin : 1; 
        unsigned int delegateWantsTransitionCompleted : 1; 
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation : 1; 
        unsigned int dataSourceSuppliesBeforeViewController : 1; 
        unsigned int dataSourceSuppliesAfterViewController : 1; 
        unsigned int dataSourceSuppliesPageCount : 1; 
        unsigned int dataSourceSuppliesPageNumber : 1; 
    } _delegateFlags;
}

@property <UIPageViewControllerDelegate> * delegate;
@property <UIPageViewControllerDataSource> * dataSource;
@property(readonly) int transitionStyle;
@property(readonly) int navigationOrientation;
@property(readonly) int spineLocation;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(readonly) NSArray * gestureRecognizers;
@property(readonly) NSArray * viewControllers;
@property(readonly) int _transitionStyle;
@property(readonly) int _navigationOrientation;
@property(setter=_setViewControllers:,retain) NSArray * _viewControllers;
@property(setter=_setViewControllersStashedForRotation:,retain) NSArray * _viewControllersStashedForRotation;
@property(getter=_isPageControlVisible,readonly) BOOL _pageControlVisible;
@property(readonly) _UIPageViewControllerContentView * _contentView;
@property(readonly) _UIQueuingScrollView * _scrollView;
@property(setter=_setPageSpacing:) float _pageSpacing;
@property(getter=_isInterfaceRotating,readonly) BOOL _interfaceRotating;

+ (id)_incomingViewControllerKeys;
+ (id)_outgoingViewControllerKeys;
+ (id)stringForSpineLocation:(int)arg1;
+ (BOOL)_isSpineLocation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isNavigationOrientation:(int)arg1 supportedForTransitionStyle:(int)arg2;
+ (BOOL)_isSupportedTransitionStyle:(int)arg1;

- (void)setDoubleSided:(BOOL)arg1;
- (id)_contentView;
- (id)_scrollView;
- (void)setDataSource:(id)arg1;
- (BOOL)isDoubleSided;
- (id)dataSource;
- (void)dealloc;
- (BOOL)_isInterfaceRotating;
- (id)_viewControllersStashedForRotation;
- (void)setViewControllers:(id)arg1 direction:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (struct CGSize { float x1; float x2; })_contentSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setDisabledScrollingRegion:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_disabledScrollingRegion;
- (void)_setTapRegionBreadths:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_tapRegionBreadths;
- (void)_setTapRegionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_tapRegionInsets;
- (int)spineLocation;
- (int)transitionStyle;
- (void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(BOOL)arg3;
- (id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2;
- (id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2;
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1;
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(int)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(int)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5;
- (void)_flushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_queuingScrollView:(id)arg1 viewBefore:(BOOL)arg2 view:(id)arg3;
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float*)arg1;
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(float*)arg2;
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)arg1;
- (BOOL)_shouldBeginNavigationInDirection:(int*)arg1 inResponseToPanGestureRecognizer:(id)arg2;
- (BOOL)_shouldNavigateInDirection:(int*)arg1 inResponseToTapGestureRecognizer:(id)arg2;
- (BOOL)_shouldNavigateInDirection:(int*)arg1 inResponseToVelocity:(float*)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_tapRegions;
- (id)_viewControllerBeforeViewController:(id)arg1;
- (id)_viewControllerAfterViewController:(id)arg1;
- (void)_cacheViewControllerForScroll:(id)arg1;
- (void)_invalidateViewControllersStashedForCurlFromDataSource;
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(int)arg2;
- (void)_setViewControllers:(id)arg1;
- (void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(int)arg3;
- (void)_populateOutgoingViewControllersInMap:(id)arg1;
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_isCurrentViewControllerStateValid;
- (id)_viewControllerBefore:(BOOL)arg1 viewController:(id)arg2;
- (void)_child:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2;
- (void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)_child:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3;
- (void)_setViewControllersStashedForRotation:(id)arg1;
- (id)_viewControllersForPendingSpineLocation:(int)arg1;
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_validRangeForPresentationOfViewControllersWithSpineLocation:(int)arg1;
- (void)_sendChildViewWill:(BOOL)arg1 appear:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_invalidatePageCurl;
- (int)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(int)arg1;
- (void)_child:(id)arg1 endAppearanceTransitionIfPossible:(BOOL)arg2;
- (void)_childEndAppearanceTransition:(id)arg1;
- (BOOL)_childCanEndAppearanceTransition:(id)arg1;
- (void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_child:(id)arg1 beginAppearanceTransition:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)_child:(id)arg1 canBeginAppearanceTransition:(BOOL)arg2;
- (void)_setViewControllers:(id)arg1 withScrollInDirection:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (void)_setViewControllers:(id)arg1 withCurlOfType:(int)arg2 fromLocation:(struct CGPoint { float x1; float x2; })arg3 direction:(int)arg4 animated:(BOOL)arg5 notifyDelegate:(BOOL)arg6 completion:(id)arg7;
- (struct CGSize { float x1; float x2; })_effectiveTapRegionBreadths;
- (void)_invalidateEffectiveTapRegions;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_effectiveTapRegionInsets;
- (int)_navigationOrientation;
- (BOOL)_canHandleGestures;
- (void)_handleTapGesture:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (id)initWithTransitionStyle:(int)arg1 navigationOrientation:(int)arg2 options:(id)arg3;
- (void)_setPageSpacing:(float)arg1;
- (void)_setSpineLocation:(int)arg1;
- (void)_updatePageControlViaDataSourceIfNecessary;
- (void)_pageControlValueChanged:(id)arg1;
- (void)_contentViewFrameOrBoundsDidChange;
- (int)navigationOrientation;
- (BOOL)_isPageControlVisible;
- (int)_transitionStyle;
- (float)_pageSpacing;
- (id)_viewControllers;
- (id)_pageControl;
- (id)viewControllers;
- (void)_endDisablingInterfaceAutorotation;
- (void)_beginDisablingInterfaceAutorotation;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewWillUnload;
- (void)loadView;
- (BOOL)_shouldPersistViewWhenCoding;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
