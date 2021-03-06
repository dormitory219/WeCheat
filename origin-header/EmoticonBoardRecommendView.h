//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "EmoticonStoreDownloadViewDelegate-Protocol.h"

@class EmoticonStoreDownloadView, EmoticonTabRecommendItem, MMWebImageView, NSString, UIButton, UILabel;
@protocol EmoticonBoardRecommendViewDelegate;

@interface EmoticonBoardRecommendView : UIView <EmoticonStoreDownloadViewDelegate>
{
    UIView *m_contentView;
    MMWebImageView *m_imageView;
    UILabel *m_titleLabel;
    UILabel *m_recWordLabel;
    EmoticonStoreDownloadView *m_downloadView;
    UIButton *m_showDetailButton;
    EmoticonTabRecommendItem *m_item;
    UIButton *m_closeButton;
    id <EmoticonBoardRecommendViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmoticonBoardRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onClickCloseButton;
- (void)onDownloadBegin;
- (void)onViewTap;
- (void)updateCloseButton;
- (void)updateContentView;
- (void)updateDownloadView;
- (void)updateImageView;
- (void)updateItem:(id)arg1;
- (void)updateRecWordLabel;
- (void)updateShowDetailButton;
- (void)updateTitleLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

