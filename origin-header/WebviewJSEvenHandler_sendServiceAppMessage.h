//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class CMessageWrap, NSDictionary, NSMutableData, NSString, NSURLConnection;

@interface WebviewJSEvenHandler_sendServiceAppMessage : WebviewJSEventHandlerBase <NSURLConnectionDelegate>
{
    CMessageWrap *m_wrapMsg;
    NSString *m_nsThumbUrl;
    NSURLConnection *_m_connecttion;
    NSDictionary *_m_curExtraData;
    NSMutableData *_m_recData;
}

- (void).cxx_destruct;
- (void)clearCurData;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
@property(retain, nonatomic) NSURLConnection *m_connecttion; // @synthesize m_connecttion=_m_connecttion;
@property(retain, nonatomic) NSDictionary *m_curExtraData; // @synthesize m_curExtraData=_m_curExtraData;
@property(copy, nonatomic) NSString *m_nsThumbUrl; // @synthesize m_nsThumbUrl;
@property(retain, nonatomic) NSMutableData *m_recData; // @synthesize m_recData=_m_recData;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
- (void)sendServiceAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

