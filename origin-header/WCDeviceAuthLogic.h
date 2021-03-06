//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;
@protocol WCDeviceAuthLogicDelegate;

@interface WCDeviceAuthLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_deviceInfos;
    int m_appState;
    id <WCDeviceAuthLogicDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)__callbackEnd:(int)arg1 DID:(unsigned long long)arg2 RespTask:(id)arg3 SessionKey:(id)arg4;
- (void)__clearDeviceInfoByDeviceId:(long long)arg1;
- (id)__findDeviceInfoByDeviceID:(id)arg1;
- (id)__findDeviceInfoByDid:(long long)arg1;
- (id)__toNSString:(void *)arg1:(int)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WCDeviceAuthLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)genAuthRespTask:(int)arg1 DeviceID:(long long)arg2 Seq:(unsigned short)arg3 AESSessionKey:(id)arg4;
- (id)getSessionBuffer:(long long)arg1;
- (void)handleDeivceLost:(long long)arg1;
- (void)handleDeviceAuthReq:(long long)arg1:(unsigned short)arg2:(unsigned short)arg3:(struct _MmBp__AuthRequest **)arg4;
- (void)handleWCDeviceAuthResopnse:(id)arg1;
- (void)handleWCDeviceChannelStateChanged:(long long)arg1 OldState:(int)arg2 NewState:(int)arg3;
- (id)init;
- (_Bool)isDeviceAuthed:(long long)arg1;
- (void)sendAuthReqToSvr:(id)arg1 AuthBuffer:(id)arg2;
- (_Bool)setNeedAuth:(long long)arg1;
- (void)willEnterForeground;
- (void)willSuspend;

@end

