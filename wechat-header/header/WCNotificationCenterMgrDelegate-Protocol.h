//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MyWCDB, NSArray, SnsActionGroup, WCAdvertiseDataHelper, WCDataItem;

@protocol WCNotificationCenterMgrDelegate <NSObject>
- (WCAdvertiseDataHelper *)adDataHelper;
- (MyWCDB *)database;
- (void)onLatestWCObjectChanged:(WCDataItem *)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceStrangerMessage:(SnsActionGroup *)arg1;
- (void)onReveiceWCMessages:(NSArray *)arg1;
@end
