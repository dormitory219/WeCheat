//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCCanvasImageLoaderObserver-Protocol.h"

@class MMProgressViewEx, NSString, WCPanoramaImageView;

@interface WCCanvasPanoramaImageComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    WCPanoramaImageView *_panoramaImageView;
    MMProgressViewEx *_loadingView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)componentDidFullyApperaInMainScreen:(_Bool)arg1;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCPanoramaImageView *panoramaImageView; // @synthesize panoramaImageView=_panoramaImageView;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

