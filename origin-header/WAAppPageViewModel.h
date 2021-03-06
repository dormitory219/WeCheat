//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAppMessageBaseViewModel.h"

@class CContact;

@interface WAAppPageViewModel : WAAppMessageBaseViewModel
{
    double _cacheTitleHeight;
    double _cacheDescHeight;
    CContact *_appContact;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
@property(retain, nonatomic) CContact *appContact; // @synthesize appContact=_appContact;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (double)descHeight;
- (id)getImageIfDownFail;
- (double)imageHeight;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)originThumbImage;
- (id)scaleFixOriginThumbImage;
- (unsigned int)thumbDownloadStatus;
- (double)titleHeight;

@end

