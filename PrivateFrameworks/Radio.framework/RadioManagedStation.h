/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioManagedStation : NSManagedObject

@property (nonatomic, retain) NSData *adData;
@property (nonatomic) long long adamID;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSData *artworkURLData;
@property (nonatomic, copy) NSString *coreSeedName;
@property (nonatomic, copy) NSDictionary *debugDictionary;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL editEnabled;
@property (nonatomic, retain) NSArray *editableFields;
@property (getter=isFeatured, nonatomic) BOOL featured;
@property (getter=isGatewayVideoAdEnabled, nonatomic) BOOL gatewayVideoAdEnabled;
@property (nonatomic) BOOL hasSkipRules;
@property (nonatomic) unsigned int impressionThreshold;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL likesEnabled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long persistentID;
@property (getter=isPremiumPlacement, nonatomic) BOOL premiumPlacement;
@property (getter=isPreview, nonatomic, readonly) BOOL preview;
@property (getter=isPreviewOnly, nonatomic) BOOL previewOnly;
@property (nonatomic, retain) NSArray *seedTracks;
@property (nonatomic, copy) NSString *shareToken;
@property (getter=isShared, nonatomic) BOOL shared;
@property (getter=isSharingEnabled, nonatomic) BOOL sharingEnabled;
@property (nonatomic) BOOL skipEnabled;
@property (nonatomic) int skipFrequency;
@property (nonatomic, copy) NSString *skipIdentifier;
@property (nonatomic) double skipInterval;
@property (nonatomic, copy) NSArray *skipTimestamps;
@property (nonatomic) int songMixType;
@property (nonatomic) int sortOrder;
@property (getter=isSponsored, nonatomic) BOOL sponsored;
@property (nonatomic, copy) NSString *stationDescription;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic, retain) NSURL *streamURL;
@property (getter=isSubscribed, nonatomic) BOOL subscribed;
@property (nonatomic) int subscriberCount;
@property (nonatomic, copy) NSArray *trackPlaybackDescriptorQueue;
@property (nonatomic) BOOL virtualPlayEnabled;

+ (id)defaultPropertiesToFetch;

- (id)adData;
- (long long)adamID;
- (id)additionalReferencedTrackDescriptors;
- (id)artworkURL;
- (id)artworkURLData;
- (id)coreSeedName;
- (id)debugDictionary;
- (id)dictionaryRepresentation;
- (BOOL)editEnabled;
- (id)editableFields;
- (id)feedbackDictionaryRepresentation;
- (BOOL)hasSkipRules;
- (unsigned int)impressionThreshold;
- (BOOL)isExplicit;
- (BOOL)isFeatured;
- (BOOL)isGatewayVideoAdEnabled;
- (BOOL)isPremiumPlacement;
- (BOOL)isPreview;
- (BOOL)isPreviewOnly;
- (BOOL)isShared;
- (BOOL)isSharingEnabled;
- (BOOL)isSponsored;
- (BOOL)isSubscribed;
- (BOOL)likesEnabled;
- (id)name;
- (long long)persistentID;
- (id)seedTracks;
- (void)setAdData:(id)arg1;
- (void)setAdamID:(long long)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setArtworkURLData:(id)arg1;
- (void)setCoreSeedName:(id)arg1;
- (void)setDebugDictionary:(id)arg1;
- (void)setEditEnabled:(BOOL)arg1;
- (void)setEditableFields:(id)arg1;
- (void)setFeatured:(BOOL)arg1;
- (void)setGatewayVideoAdEnabled:(BOOL)arg1;
- (void)setHasSkipRules:(BOOL)arg1;
- (void)setImpressionThreshold:(unsigned int)arg1;
- (void)setIsExplicit:(BOOL)arg1;
- (void)setLikesEnabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPremiumPlacement:(BOOL)arg1;
- (void)setPreviewOnly:(BOOL)arg1;
- (void)setSeedTracks:(id)arg1;
- (void)setShareToken:(id)arg1;
- (void)setShared:(BOOL)arg1;
- (void)setSharingEnabled:(BOOL)arg1;
- (void)setSkipEnabled:(BOOL)arg1;
- (void)setSkipFrequency:(int)arg1;
- (void)setSkipIdentifier:(id)arg1;
- (void)setSkipInterval:(double)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setSongMixType:(int)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSponsored:(BOOL)arg1;
- (void)setStationDescription:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStreamCertificateURL:(id)arg1;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamURL:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setSubscriberCount:(int)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1;
- (void)setVirtualPlayEnabled:(BOOL)arg1;
- (id)shareToken;
- (BOOL)skipEnabled;
- (int)skipFrequency;
- (id)skipIdentifier;
- (double)skipInterval;
- (id)skipTimestamps;
- (int)songMixType;
- (int)sortOrder;
- (id)stationDescription;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;
- (id)streamCertificateURL;
- (id)streamKeyURL;
- (id)streamURL;
- (int)subscriberCount;
- (id)trackPlaybackDescriptorQueue;
- (BOOL)virtualPlayEnabled;

@end
