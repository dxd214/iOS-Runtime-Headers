/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetInspector, NSMutableArray, AVAssetCache, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
    NSURL *_URL;
    AVAssetCache *_assetCache;
    AVAssetInspector *_assetInspector;
    int _basicInspectionFailureCode;
    NSURL *_downloadDestinationURL;
    struct OpaqueFigFormatReader { } *_formatReader;
    NSMutableArray *_keysAwaitingCompletion;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
    int _status;
}

@property(readonly) NSURL * URL;
@property(readonly) AVAssetCache * assetCache;
@property(readonly) NSURL * downloadDestinationURL;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;

- (id)URL;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (BOOL)_inspectionRequiresAFormatReader;
- (BOOL)_isStreaming;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (id)_loadValuesWhileMutexLockedForKeys:(id)arg1;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (BOOL)_providesAccurateTiming;
- (void)_serverHasDied;
- (void)_setStatus:(int)arg1 figErrorCode:(long)arg2;
- (int)_status;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (int)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1;
- (BOOL)_updateStatusWhileMutexLocked:(int)arg1 figErrorCode:(long)arg2;
- (id)assetCache;
- (id)assetInspector;
- (void)cancelLoading;
- (id)chapterGroupInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)downloadDestinationURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)finalize;
- (BOOL)hasProtectedContent;
- (id)initWithURL:(id)arg1;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)lyrics;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;

@end