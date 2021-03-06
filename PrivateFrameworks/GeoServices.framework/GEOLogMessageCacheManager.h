/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessageCacheManager : NSObject {
    int _currentRetrivedLogMessageRetryCount;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    void *_databaseQueueIdentityKey;
    void *_databaseQueueIdentityValue;
    struct sqlite3 { } *_logMessageCacheDatabase;
    NSString *_logMessageCacheFilePath;
    int _logMessageCacheIterator;
    NSMutableArray *_retrivedLogMessageCacheIds;
}

@property (readonly) int currentRetrivedLogMessageRetryCount;

- (void)_addRetryCountColumnToTable;
- (void)_cleanupLogMessageCacheDatabase;
- (void)_createTables;
- (void)_deleteAllExpiredLogMessages:(double)arg1;
- (void)_deleteExpiredLogMessageCacheDBFile:(double)arg1;
- (void)_executeSQL:(id)arg1;
- (int)_getNumberOfLogMessagesInCache;
- (id)_groupIDOfNextPendingLogMessage;
- (void)_migrateDatabaseIfNeeded;
- (void)_openCreateLogMessageCacheDBFile;
- (void)_openLogMessageCacheDBFile;
- (int)_queryLogMessageCacheDBUserVersion;
- (id)_retrieveBatchOfLogMessagesLimitCount:(int)arg1 limitSize:(int)arg2;
- (void)_updateLogMessageCacheDBUserVersion;
- (void)closeLogMessageCache;
- (int)currentRetrivedLogMessageRetryCount;
- (void)dealloc;
- (id)initWithLogMessageCacheFilePath:(id)arg1;
- (void)insertLogMessageIntoCache:(id)arg1;
- (BOOL)isLogMessageCacheEmpty;
- (void)openLogMessageCache;
- (void)purgeCurrentlyRetrievedLogMessagesFromCache;
- (void)purgeExpiredLogMessagesFromCache:(double)arg1;
- (void)resetLogMessageCacheIterator;
- (id)retrieveFirstBatchOfLogMessagesWithLimitCount:(int)arg1 limitSize:(int)arg2;
- (id)retrieveNextBatchOfLogMessagesWithLimitCount:(int)arg1 limitSize:(int)arg2;
- (void)updateCurrentlyRetrievedLogMessagesRetryCount;

@end
