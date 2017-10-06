//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCCommentView, WCUserComment;

@protocol WCCommentViewDelegate <NSObject>

@optional
- (_Bool)isTouchEnableOnCommentView;
- (void)onCommentViewClicked:(WCCommentView *)arg1;
- (void)onCommentViewLongPressed:(WCCommentView *)arg1 withText:(NSString *)arg2 withRect:(struct CGRect)arg3;
- (void)onReloadCommentCellView:(WCUserComment *)arg1;
@end
