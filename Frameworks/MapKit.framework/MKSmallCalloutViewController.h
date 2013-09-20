/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKCalloutBackgroundView, MKSmallCalloutView, NSString, UIView;

@interface MKSmallCalloutViewController : UIViewController <CalloutViewControllerProtocol> {
    MKSmallCalloutView *_smallCalloutView;
}

@property(retain) MKCalloutBackgroundView * calloutBackgroundView;
@property(copy) NSString * calloutSubtitle;
@property(copy) NSString * calloutTitle;
@property(retain) UIView * detailView;
@property(retain) UIView * leftView;
@property int mapDisplayStyle;
@property(retain) UIView * rightView;

+ (struct CGSize { float x1; float x2; })defaultSize;

- (id)_smallCalloutView;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutBackgroundView;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (BOOL)canDisplayCompleteTitleWhenExpanded;
- (void)dealloc;
- (id)detailView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)leftView;
- (void)loadView;
- (int)mapDisplayStyle;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)reset;
- (id)rightView;
- (void)setCalloutBackgroundView:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(BOOL)arg2;
- (void)setDetailView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftView:(id)arg1;
- (void)setMapDisplayStyle:(int)arg1;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1;
- (void)updatePreferredContentSize;
- (void)viewWillAppear:(BOOL)arg1;

@end