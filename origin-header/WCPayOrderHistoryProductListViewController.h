//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@protocol WCPayOrderHistoryProductListViewControllerDelegate;

@interface WCPayOrderHistoryProductListViewController : WCPayBaseViewController
{
    id <WCPayOrderHistoryProductListViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)backButtonDone;
- (void)clickInfoCell:(id)arg1;
- (id)getHeaderView;
- (void)makeProductCell:(id)arg1 cellInfo:(id)arg2;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadProductList;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;

@end

