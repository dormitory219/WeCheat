//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBJceObjectV2.h"

@class MttWkMachinceInfo;

@interface MttWkMachinceInfoRsp : QBJceObjectV2
{
    int jcev2_p_0_o_rspCode;
    MttWkMachinceInfo *jcev2_p_1_o_stWkMachinceInfo;
}

+ (void)initialize;
+ (id)jceType;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, getter=rspCode, setter=setRspCode:) int jcev2_p_0_o_rspCode; // @synthesize jcev2_p_0_o_rspCode;
@property(retain, nonatomic, getter=stWkMachinceInfo, setter=setStWkMachinceInfo:) MttWkMachinceInfo *jcev2_p_1_o_stWkMachinceInfo; // @synthesize jcev2_p_1_o_stWkMachinceInfo;

@end
