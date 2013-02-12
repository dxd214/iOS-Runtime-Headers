/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableDictionary, NSMutableString, NSString;

@interface RTF_CMDictArchiveManager : RTF_CMArchiveManager {
    boolmIsFrameset;
    NSMutableString *mCssString;
    NSMutableString *mMainHtml;
    NSString *mName;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableDictionary *mResources;
    NSMutableDictionary *mStyleCache;
}

- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (id)copyDictionaryWithSizeInfos:(BOOL)arg1;
- (id)cssStylesheetString;
- (void)dealloc;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;
- (id)name;
- (id)newResourceWithName:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (int)resourceCount;
- (id)resourceUrlProtocol;
- (void)setIsFrameset;

@end