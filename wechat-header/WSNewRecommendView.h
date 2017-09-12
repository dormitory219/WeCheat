//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, WSRecommendModel;
@protocol WSNewRecommendViewDelegate;

@interface WSNewRecommendView : UIView
{
    WSRecommendModel *_rcmdData;
    MMUILabel *_mainLabel;
    id <WSNewRecommendViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WSNewRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getRcmdDataModel;
- (void)initViewWithData:(id)arg1;
- (id)initWithRecommendModel:(id)arg1 andFrame:(struct CGRect)arg2;
- (id)makeNewButton:(id)arg1;
- (void)onClickButton:(id)arg1;
- (void)updateViewWithData:(id)arg1;

@end
