//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "BindPhoneSuccessViewControllerDelegate-Protocol.h"
#import "IDCHostMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCAccountBindPhoneSetPrivateViewControllerDelegate-Protocol.h"
#import "WCAccountFillPhoneViewControllerDelegate-Protocol.h"
#import "WCAccountPhoneVerifyViewControllerDelegate-Protocol.h"
#import "WCAccountVoiceVerifyViewControllerDelegate-Protocol.h"
#import "settingModifyAliasDelegate-Protocol.h"

@class NSString, WCAccountControlData;
@protocol WCAccountBindPhoneControlLogicDelegate;

@interface WCAccountBindPhoneControlLogic : WCBaseControlLogic <WCAccountFillPhoneViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, WCAccountBindPhoneSetPrivateViewControllerDelegate, settingModifyAliasDelegate, BindPhoneSuccessViewControllerDelegate, PBMessageObserverDelegate, IDCHostMgrExt>
{
    _Bool m_bAgreementMobileCanBeFound;
    _Bool m_bAgreementPushFriendToMe;
    unsigned long long m_scene;
    NSString *m_nsOldPhone;
    WCAccountControlData *m_data;
    id <WCAccountBindPhoneControlLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)BindMobileAgain:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)bindPhoneReturn:(id)arg1;
- (void)cancelAllEvent;
- (_Bool)checkVerifyCode:(id)arg1;
- (void)dealloc;
- (unsigned int)getCheckOpcode;
- (id)getData;
- (id)getFullPhoneNum;
- (unsigned int)getReadyOpcode;
- (_Bool)getVerifyCodeReady;
- (_Bool)getVoideVerifyCodeReady:(id)arg1;
- (id)initWithData:(id)arg1;
- (_Bool)isFromBind;
- (_Bool)isFromChange;
- (_Bool)isFromNakedWxProtect;
- (_Bool)isFromVerify;
- (void)onAlertCancel;
- (void)onBindPhoneSuccess;
- (void)onContinueFillPhone;
- (void)onFillPhoneBack;
- (void)onFillPhoneBindAgreeMobileCanBeFound:(_Bool)arg1;
- (void)onFillPhoneCancelLogout;
- (void)onFillPhoneNext:(id)arg1 phoneNumber:(id)arg2;
- (void)onFillPhonePushFriendToMe:(_Bool)arg1;
- (void)onFillPhoneSetPrivate;
- (void)onFillPhoneSetPrivateDone;
- (void)onFillPhoneSetWxUserName;
- (_Bool)onHandleError:(id)arg1;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyBack;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyVoice;
- (void)onSyncAddressBook;
- (void)onVoiceVerifyBack;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)setAliasOKForNakedWxProtect;
- (void)setAliasOKForNakedWxProtectAndTryLogout;
- (void)setDelegate:(id)arg1;
- (void)setScene:(unsigned int)arg1;
- (void)startChangelogic:(id)arg1;
- (void)startLogic;
- (void)startLogicFromNakedWxProtect;
- (void)startLogicFromOnlySetWxIdProtect;
- (void)startVerifylogic:(id)arg1;
- (void)startlogic:(id)arg1;
- (void)startlogicFromServerControl;
- (void)stopLogic;
- (void)updateLastLoginName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
