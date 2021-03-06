/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage {
    NSString *_backdropViewGroupName;
    UIImage *_condensedBackgroundImage;
    BOOL _deferShadowToSearchBar;
    int activeBarMetrics;
    UIImage *backIndicatorImage;
    NSNumber *backIndicatorLeftMargin;
    UIImage *backIndicatorTransitionMaskImage;
    int barMetrics;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
    int defaultBarMetrics;
    BOOL hidesShadow;
    BOOL reversesShadowOffset;
    UIImage *shadowImage;
    NSDictionary *textAttributes;
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
}

@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;
@property (nonatomic) int activeBarMetrics;
@property (nonatomic, retain) UIImage *backIndicatorImage;
@property (nonatomic, retain) NSNumber *backIndicatorLeftMargin;
@property (nonatomic, retain) UIImage *backIndicatorTransitionMaskImage;
@property (nonatomic, retain) NSString *backdropViewGroupName;
@property (nonatomic, readonly) UIImage *backgroundImage;
@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property (nonatomic, readonly) UIImage *condensedBackgroundImage;
@property (nonatomic) int defaultBarMetrics;
@property (nonatomic) BOOL deferShadowToSearchBar;
@property (nonatomic) BOOL hidesShadow;
@property (nonatomic, readonly) UIImage *miniBackgroundImage;
@property (nonatomic, readonly) UIImage *miniPromptBackgroundImage;
@property (nonatomic, readonly) UIImage *promptBackgroundImage;
@property (nonatomic) BOOL reversesShadowOffset;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic, copy) NSDictionary *textAttributes;

+ (int)typicalBarPosition;

- (void).cxx_destruct;
- (id)_barButtonAppearanceStorage;
- (int)activeBarMetrics;
- (id)backIndicatorImage;
- (id)backIndicatorLeftMargin;
- (id)backIndicatorTransitionMaskImage;
- (id)backdropViewGroupName;
- (id)backgroundImage;
- (id)barButtonAppearanceStorage;
- (id)condensedBackgroundImage;
- (int)defaultBarMetrics;
- (BOOL)deferShadowToSearchBar;
- (BOOL)hidesShadow;
- (id)miniBackgroundImage;
- (id)miniPromptBackgroundImage;
- (id)promptBackgroundImage;
- (id)representativeImageForIdiom:(int)arg1;
- (BOOL)reversesShadowOffset;
- (void)setActiveBarMetrics:(int)arg1;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setBackIndicatorLeftMargin:(id)arg1;
- (void)setBackIndicatorTransitionMaskImage:(id)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setDefaultBarMetrics:(int)arg1;
- (void)setDeferShadowToSearchBar:(BOOL)arg1;
- (void)setHidesShadow:(BOOL)arg1;
- (void)setReversesShadowOffset:(BOOL)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTitleVerticalAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (id)shadowImage;
- (id)textAttributes;
- (float)titleVerticalAdjustmentForBarMetrics:(int)arg1;

@end
