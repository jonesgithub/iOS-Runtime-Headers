/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayViewDataSource>, <EKDayViewDelegate>, EKDayAllDayView, EKDayTimeView, EKDayViewContent, EKEvent, NSArray, NSCalendar, NSDate, NSDateComponents, NSTimer, UIColor, UIImageView, UIScrollAnimation, UIScrollView, UIView;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    BOOL _alignsMidnightToTop;
    EKDayAllDayView *_allDayView;
    BOOL _allowsOccurrenceSelection;
    UIView *_bottomLine;
    UIImageView *_bottomVerticalGridExtension;
    NSCalendar *_calendar;
    <EKDayViewDataSource> *_dataSource;
    EKDayViewContent *_dayContent;
    double _dayEnd;
    double _dayStart;
    <EKDayViewDelegate> *_delegate;
    NSDateComponents *_displayDate;
    NSArray *_existingTimedOcurrences;
    NSDate *_lastInspectedOccurrenceOnDate;
    double _nextDSTTransition;
    UIColor *_occurrenceTextBackgroundColor;
    int _orientation;
    int _outlineStyle;
    UIScrollAnimation *_scrollAnimation;
    BOOL _scrollToOccurrencesOnNextReload;
    BOOL _scrollbarShowsInside;
    } _scrolledToFirstVisibleSecondForSize;
    UIScrollView *_scroller;
    BOOL _scrollingToOccurrence;
    BOOL _settingDate;
    BOOL _shouldEverShowTimeIndicators;
    NSTimer *_timeMarkerTimer;
    EKDayTimeView *_timeView;
    UIImageView *_topVerticalGridExtension;
    BOOL _userScrolling;
    BOOL _usesVibrantGridDrawing;
}

@property BOOL alignsMidnightToTop;
@property(readonly) EKDayAllDayView * allDayView;
@property BOOL allowsOccurrenceSelection;
@property BOOL allowsScrolling;
@property(copy) NSCalendar * calendar;
@property <EKDayViewDataSource> * dataSource;
@property(readonly) double dayEnd;
@property(readonly) double dayStart;
@property <EKDayViewDelegate> * delegate;
@property(retain) EKEvent * dimmedOccurrence;
@property(copy) NSDateComponents * displayDate;
@property BOOL eventsFillGrid;
@property int firstVisibleSecond;
@property(retain) UIColor * gridLineColor;
@property struct _NSRange { unsigned int x1; unsigned int x2; } hoursToRender;
@property(readonly) float leftContentInset;
@property struct CGPoint { float x1; float x2; } normalizedContentOffset;
@property int occurrenceBackgroundStyle;
@property(retain) UIColor * occurrenceLocationColor;
@property(retain) UIColor * occurrenceTextBackgroundColor;
@property(retain) UIColor * occurrenceTitleColor;
@property(readonly) NSArray * occurrenceViews;
@property int outlineStyle;
@property(readonly) float scrollBarOffset;
@property(readonly) float scrollOffset;
@property BOOL shouldEverShowTimeIndicators;
@property BOOL showsLeftBorder;
@property BOOL showsTimeLine;
@property BOOL showsTimeMarker;
@property(retain) UIColor * timeViewTextColor;
@property BOOL usesVibrantGridDrawing;

- (void).cxx_destruct;
- (void)_adjustForDateOrCalendarChange;
- (double)_adjustSecondBackwardForDSTHole:(double)arg1;
- (double)_adjustSecondForwardForDSTHole:(double)arg1;
- (void)_clearVerticalGridExtensionImageCache;
- (void)_createAllDayView;
- (void)_disposeAllDayView;
- (void)_finishedScrollToSecond;
- (id)_generateVerticalGridExtensionImage;
- (void)_invalidateMarkerTimer;
- (void)_localeChanged;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (float)_positionOfSecond:(int)arg1;
- (void)_scrollToSecond:(int)arg1 animated:(BOOL)arg2 whenFinished:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_scrollerRect;
- (int)_secondAtPosition:(float)arg1;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_selectedDate;
- (void)_startMarkerTimer;
- (void)_stopScrolling;
- (void)_timeViewTapped:(id)arg1;
- (float)_verticalOffset;
- (void)addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2;
- (void)adjustForSignificantTimeChange;
- (void)adjustFrameToSpanToMidnightFromStartDate:(id)arg1;
- (BOOL)alignsMidnightToTop;
- (float)allDayRegionHeight;
- (void)allDayView:(id)arg1 didSelectEvent:(id)arg2;
- (id)allDayView;
- (void)allDayViewDidLayoutSubviews:(id)arg1;
- (BOOL)allowsOccurrenceSelection;
- (BOOL)allowsScrolling;
- (void)bringEventToFront:(id)arg1;
- (id)calendar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentTimeRectInView:(id)arg1;
- (id)dataSource;
- (double)dateAtPoint:(struct CGPoint { float x1; float x2; })arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3;
- (double)dateAtPoint:(struct CGPoint { float x1; float x2; })arg1 isAllDay:(BOOL*)arg2;
- (void)dayAllDayView:(id)arg1 occurrenceViewClicked:(id)arg2;
- (void)dayContentView:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (double)dayEnd;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (double)dayStart;
- (void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dimmedOccurrence;
- (id)displayDate;
- (BOOL)eventsFillGrid;
- (int)firstVisibleSecond;
- (void)firstVisibleSecondChanged;
- (id)gridLineColor;
- (void)highlightHour:(double)arg1;
- (double)highlightedHour;
- (struct _NSRange { unsigned int x1; unsigned int x2; })hoursToRender;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 scrollbarShowsInside:(BOOL)arg6;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (BOOL)isAllDayLabelHighlighted;
- (void)layoutSubviews;
- (float)leftContentInset;
- (struct CGPoint { float x1; float x2; })normalizedContentOffset;
- (int)occurrenceBackgroundStyle;
- (id)occurrenceLocationColor;
- (void)occurrencePressed:(id)arg1 onDay:(double)arg2;
- (id)occurrenceTextBackgroundColor;
- (id)occurrenceTitleColor;
- (id)occurrenceViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViews;
- (int)outlineStyle;
- (struct CGPoint { float x1; float x2; })pointAtDate:(double)arg1 isAllDay:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForEvent:(id)arg1;
- (void)relayoutExistingTimedOccurrences;
- (void)reloadData;
- (void)removeFromSuperview;
- (void)resetLastSelectedOccurrencePoint;
- (float)scrollBarOffset;
- (void)scrollEventsIntoViewAnimated:(BOOL)arg1;
- (float)scrollOffset;
- (void)scrollToDate:(id)arg1 animated:(BOOL)arg2 whenFinished:(id)arg3;
- (void)scrollToEvent:(id)arg1 animated:(BOOL)arg2;
- (BOOL)scrollTowardPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAlignsMidnightToTop:(BOOL)arg1;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setAllowsScrolling:(BOOL)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setEventsFillGrid:(BOOL)arg1;
- (void)setFirstVisibleSecond:(int)arg1;
- (void)setGridLineColor:(id)arg1;
- (void)setHoursToRender:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setNormalizedContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setOccurrenceBackgroundStyle:(int)arg1;
- (void)setOccurrenceLocationColor:(id)arg1;
- (void)setOccurrenceTextBackgroundColor:(id)arg1;
- (void)setOccurrenceTitleColor:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOutlineStyle:(int)arg1;
- (void)setScrollerYInset:(float)arg1 keepingYPointVisible:(float)arg2;
- (void)setShouldEverShowTimeIndicators:(BOOL)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (void)setShowsTimeLine:(BOOL)arg1;
- (void)setShowsTimeMarker:(BOOL)arg1;
- (void)setTimeViewTextColor:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUsesVibrantGridDrawing:(BOOL)arg1;
- (BOOL)shouldEverShowTimeIndicators;
- (BOOL)showsLeftBorder;
- (BOOL)showsTimeLine;
- (BOOL)showsTimeMarker;
- (id)timeViewTextColor;
- (void)updateMarkerPosition;
- (BOOL)usesVibrantGridDrawing;
- (void)willMoveToSuperview:(id)arg1;
- (float)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1;

@end
