//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCPayJSApiVerifyDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAJSEventHandler_verifyPaymentPassword : WAJSEventHandler_BaseEvent <WCPayJSApiVerifyDelegate>
{
    NSMutableDictionary *_param;
}

- (void).cxx_destruct;
- (id)getCurrentURL;
- (id)getParam;
- (void)handleJSEvent:(id)arg1;
- (void)onVerifyResult:(id)arg1;
@property(retain) NSMutableDictionary *param; // @synthesize param=_param;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

