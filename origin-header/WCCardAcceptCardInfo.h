//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface WCCardAcceptCardInfo : MMObject
{
    unsigned int _succCount;
    unsigned int _retCode;
    NSString *_retMsg;
    NSString *_retJson;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) unsigned int retCode; // @synthesize retCode=_retCode;
@property(retain, nonatomic) NSString *retJson; // @synthesize retJson=_retJson;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) unsigned int succCount; // @synthesize succCount=_succCount;

@end
