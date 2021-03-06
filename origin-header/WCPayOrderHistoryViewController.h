//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString;
@protocol WCPayOrderHistoryViewControllerDelegate;

@interface WCPayOrderHistoryViewController : WCPayBaseViewController <UITableViewDataSource, UITableViewDelegate, WCActionSheetDelegate>
{
    MMTableView *m_tableView;
    _Bool m_loadingMoreOrderList;
    id <WCPayOrderHistoryViewControllerDelegate> m_delegate;
    NSMutableArray *arrOrderAndMsgDetail;
    _Bool m_bTableViewEditing;
}

- (void).cxx_destruct;
- (void)OnDelAllOrder;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)becomeEditing;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getBottomView;
- (id)init;
- (void)initNavigationBar;
- (void)initTableView;
- (void)initView;
- (void)loadMoreOrderList:(id)arg1;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (void)makeNotificationCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (void)makeTranscationCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startEditAllOrder;
- (void)stopEditAllOrder;
- (void)stopEditing;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

