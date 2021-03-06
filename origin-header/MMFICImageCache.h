//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IClearDataMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface MMFICImageCache : MMService <IClearDataMgrExt, MMService>
{
    NSMutableDictionary *_imageTables;
    NSRecursiveLock *_tableLock;
    NSObject<OS_dispatch_queue> *_imageCacheDispatchQueue;
}

- (void).cxx_destruct;
- (_Bool)addFormatIfNotExist:(id)arg1 imgSize:(struct CGSize)arg2 maxImgCnt:(unsigned int)arg3 version:(unsigned int)arg4;
- (void)asyncCreateFICImgForEntity:(id)arg1;
- (void)asyncCreateFICImgForEntity:(id)arg1 withImage:(id)arg2;
- (void)cleanupFICImageInMemoryWithFormat:(id)arg1;
- (void)clearImgTableWithPrefix:(id)arg1;
- (void)dealloc;
- (void)deleteImageForEntity:(id)arg1;
- (void)executeEntityCreating:(id)arg1 withImage:(id)arg2;
- (_Bool)imageExistsForEntity:(id)arg1;
- (id)init;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)reset;
- (id)retrieveImageForEntity:(id)arg1 isNeedMemoryCache:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

