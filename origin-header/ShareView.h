//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol ShareViewDelegate><NSObject;

@interface ShareView : UIView
{
    id <ShareViewDelegate><NSObject> _delegate;
    UILabel *_shareLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ShareViewDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onClickShareLabel;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
