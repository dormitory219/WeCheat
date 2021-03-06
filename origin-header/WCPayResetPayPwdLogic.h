//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayResetPwdBindCardViewControllerDelegate-Protocol.h"
#import "WCPayResetPwdBindedCardListViewControllerDelegate-Protocol.h"
#import "WCPayResetPwdCardInfoViewControllerDelegate-Protocol.h"
#import "WCPayVerifyPayCardViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayResetPayPwdLogic : WCPayControlLogic <WCPayResetPwdCardInfoViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayResetPwdBindedCardListViewControllerDelegate, WCPayResetPwdBindCardViewControllerDelegate>
{
}

- (void)BackToRootView;
- (void)OnAlertGiveUpResetPwd;
- (void)OnGetAvailableBank:(id)arg1 Error:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 userExInfoResponse:(id)arg3 Error:(id)arg4;
- (void)OnGetBindingCardBin:(id)arg1 Error:(id)arg2;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)OnResetPwdBindedCardListBack;
- (void)OnResetPwdBindedCardListNewCardClicked;
- (void)OnResetPwdBindedCardListNext;
- (void)OnResetWCPayPasswordVerifyCard:(id)arg1 Error:(id)arg2;
- (void)OnResetWCPayPasswordVerifySMS:(id)arg1;
- (_Bool)OnSelectBindCardAvailble:(id)arg1;
- (void)OnSetWCPayPasswordInReset:(id)arg1;
- (void)OnWCPayResetPwdBindCardBack;
- (void)OnWCPayResetPwdBindCardNext;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)ResetPwdCardInfoCardInfoCancel;
- (void)ResetPwdCardInfoNext:(id)arg1;
- (void)ResetPwdCardInfoPoped;
- (void)ResetPwdCardInfoReadAgreement;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)openNewCardErrorPathWebView;
- (void)showGiveUpResetAlert;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

