//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLoadSessionExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WXGSelectTimeViewControllerDelegate-Protocol.h"

@class MMTableView, NSDate, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, WXGSelectTimeViewController;
@protocol WXGChatLogSessionViewControllerDelegate;

@interface WXGChatLogSessionViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMLoadSessionExt, WXGSelectTimeViewControllerDelegate>
{
    unsigned long long m_curMaxDataCount;
    NSDate *m_beginBeginDate;
    NSDate *m_endEndDate;
    NSDate *m_beginDate;
    NSDate *m_endDate;
    _Bool m_selectAllTime;
    _Bool m_selectTextOnly;
    _Bool _doneWithPop;
    _Bool _showSelectTime;
    _Bool _showSize;
    _Bool _showSelectTextOnly;
    NSString *_rightNavigationTitleString;
    NSString *_leftNavigationTitleString;
    NSString *_emptyTipString;
    NSString *_titleString;
    NSString *_selectTimeTitle;
    NSString *_selectContentTitle;
    NSString *_selectTextOnlyTip;
    NSString *_selectSpecificTimeTip;
    id <WXGChatLogSessionViewControllerDelegate> _delegate;
    MMTableView *_sessionTableView;
    UIImageView *_footerImageView;
    UIButton *_selectAllButton;
    UIButton *_moreSelectButton;
    UILabel *_moreSelectContentLabel;
    UILabel *_sizeLabel;
    UILabel *_emptyTipLabel;
    NSMutableArray *_selectedSessionArray;
    UIActivityIndicatorView *_loadingIndicatorView;
    UIActivityIndicatorView *_secondLoadingIndicatorView;
    UIImageView *_headerImageView;
    UILabel *_selectTimeLabel;
    UIButton *_selectTimeButton;
    WXGSelectTimeViewController *_selectTimeVC;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WXGChatLogSessionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool doneWithPop; // @synthesize doneWithPop=_doneWithPop;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) NSString *emptyTipString; // @synthesize emptyTipString=_emptyTipString;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
- (id)getCurrentDateWithoutHourMinSecond;
- (unsigned long long)getDataSize:(id)arg1;
- (id)getDataSizeShowString:(id)arg1;
- (id)getSelectButtonTitle;
- (struct CGRect)getTableViewFrame;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (id)init;
- (void)initData;
- (void)initFooterPannelView;
- (void)initView;
- (_Bool)isSessionDataEmpty;
- (_Bool)isSessionDataFull;
@property(retain, nonatomic) NSString *leftNavigationTitleString; // @synthesize leftNavigationTitleString=_leftNavigationTitleString;
- (void)loadMoreData;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UIButton *moreSelectButton; // @synthesize moreSelectButton=_moreSelectButton;
@property(retain, nonatomic) UILabel *moreSelectContentLabel; // @synthesize moreSelectContentLabel=_moreSelectContentLabel;
- (void)onCancel;
- (void)onDone;
- (void)onFilterdDataFinished;
- (void)onLoadDataFinished;
- (void)onLoadSessionDataFinished;
- (void)onReloadDataItem;
- (void)onSelectTime;
- (void)onSelectTimeViewCancel;
- (void)onSelectTimeViewCompleteWithBeginDate:(id)arg1 endDate:(id)arg2 selectAllTime:(_Bool)arg3 selectTextOnly:(_Bool)arg4;
- (void)onSelecteAll;
- (void)p_popViewController;
- (void)resetBeginDate;
- (void)resetEmptyTipLabelWithTip:(id)arg1;
@property(retain, nonatomic) NSString *rightNavigationTitleString; // @synthesize rightNavigationTitleString=_rightNavigationTitleString;
@property(retain, nonatomic) UIActivityIndicatorView *secondLoadingIndicatorView; // @synthesize secondLoadingIndicatorView=_secondLoadingIndicatorView;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) NSString *selectContentTitle; // @synthesize selectContentTitle=_selectContentTitle;
@property(retain, nonatomic) NSString *selectSpecificTimeTip; // @synthesize selectSpecificTimeTip=_selectSpecificTimeTip;
@property(retain, nonatomic) NSString *selectTextOnlyTip; // @synthesize selectTextOnlyTip=_selectTextOnlyTip;
@property(retain, nonatomic) UIButton *selectTimeButton; // @synthesize selectTimeButton=_selectTimeButton;
@property(retain, nonatomic) UILabel *selectTimeLabel; // @synthesize selectTimeLabel=_selectTimeLabel;
@property(retain, nonatomic) NSString *selectTimeTitle; // @synthesize selectTimeTitle=_selectTimeTitle;
@property(retain, nonatomic) WXGSelectTimeViewController *selectTimeVC; // @synthesize selectTimeVC=_selectTimeVC;
@property(retain, nonatomic) NSMutableArray *selectedSessionArray; // @synthesize selectedSessionArray=_selectedSessionArray;
@property(retain, nonatomic) MMTableView *sessionTableView; // @synthesize sessionTableView=_sessionTableView;
@property(nonatomic) _Bool showSelectTextOnly; // @synthesize showSelectTextOnly=_showSelectTextOnly;
@property(nonatomic) _Bool showSelectTime; // @synthesize showSelectTime=_showSelectTime;
@property(nonatomic) _Bool showSize; // @synthesize showSize=_showSize;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateDoneButton;
- (void)updateFooterPannelView;
- (void)updateTableFooterView;
- (void)updateTableView;
- (void)updateView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)whetherSelectAllTime;
- (_Bool)whetherSessionItemSelected:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
