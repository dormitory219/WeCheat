//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface CEmoticonUploadInfo : NSObject
{
    NSString *m_nsMD5;
    unsigned int m_uiSendTime;
    unsigned int m_uiStartPos;
    unsigned int m_uiTotalLen;
    _Bool m_bFirst;
    NSString *m_nsUsrExtern;
    CMessageWrap *m_wrapMsg;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
@property(nonatomic) _Bool m_bFirst; // @synthesize m_bFirst;
@property(retain, nonatomic) NSString *m_nsMD5; // @synthesize m_nsMD5;
@property(retain, nonatomic) NSString *m_nsUsrExtern; // @synthesize m_nsUsrExtern;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(nonatomic) unsigned int m_uiStartPos; // @synthesize m_uiStartPos;
@property(nonatomic) unsigned int m_uiTotalLen; // @synthesize m_uiTotalLen;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;

@end

