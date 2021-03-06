/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact, NSArray, NSMutableArray, NSString;

@interface ABCardGroup : NSObject <NSCopying> {
    NSArray *_actionItems;
    NSMutableArray *_actions;
    BOOL _addSpacerFromPreviousGroup;
    CNContact *_contact;
    NSMutableArray *_items;
    NSString *_title;
    BOOL _useSplitActions;
}

@property(readonly) NSArray * actionItems;
@property(readonly) NSArray * actions;
@property BOOL addSpacerFromPreviousGroup;
@property(retain) CNContact * contact;
@property(readonly) NSArray * displayItems;
@property(readonly) NSArray * editingItems;
@property(readonly) NSString * title;
@property BOOL useSplitActions;

+ (id)groupForContact:(id)arg1;

- (id)_loadActionItems;
- (id)actionItems;
- (id)actions;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (BOOL)addSpacerFromPreviousGroup;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayItems;
- (id)editingItems;
- (id)initWithContact:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)removeActionWithTitle:(id)arg1;
- (void)setAddSpacerFromPreviousGroup:(BOOL)arg1;
- (void)setContact:(id)arg1;
- (void)setUseSplitActions:(BOOL)arg1;
- (id)title;
- (BOOL)useSplitActions;

@end
