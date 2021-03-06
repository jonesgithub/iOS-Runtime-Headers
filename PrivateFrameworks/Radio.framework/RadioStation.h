/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSData, NSDictionary, NSManagedObject, NSManagedObjectContext, NSSet, NSString, NSURL;

@interface RadioStation : NSObject <RadioManagedObjectWrapperProtocol> {
    NSSet *_additionalReferencedTrackIDs;
    NSManagedObjectContext *_context;
    NSManagedObject *_managedObject;
}

@property NSData * adData;
@property long long adamID;
@property(copy) NSSet * additionalReferencedTrackIDs;
@property(copy) NSURL * artworkURL;
@property(copy) NSData * artworkURLData;
@property(readonly) NSManagedObjectContext * context;
@property(copy) NSString * coreSeedName;
@property long long currentPlayingTrackID;
@property double currentPlayingTrackTime;
@property(copy) NSDictionary * debugDictionary;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property BOOL editEnabled;
@property NSArray * editableFields;
@property(getter=isFeatured) BOOL featured;
@property(readonly) NSDictionary * feedbackDictionaryRepresentation;
@property(getter=isGatewayVideoAdEnabled) BOOL gatewayVideoAdEnabled;
@property unsigned int impressionThreshold;
@property BOOL likesEnabled;
@property(readonly) NSManagedObject * managedObject;
@property(copy) NSString * name;
@property long long persistentID;
@property(getter=isPremiumPlacement) BOOL premiumPlacement;
@property(getter=isPreview,readonly) BOOL preview;
@property id seedTracks;
@property(copy) NSString * shareToken;
@property(getter=isShared) BOOL shared;
@property(getter=isSharingEnabled) BOOL sharingEnabled;
@property BOOL skipEnabled;
@property int skipFrequency;
@property(copy) NSString * skipIdentifier;
@property double skipInterval;
@property(copy) NSArray * skipTimestamps;
@property int songMixType;
@property int sortOrder;
@property(getter=isSponsored) BOOL sponsored;
@property(copy) NSString * stationDescription;
@property(copy) NSString * stationHash;
@property long long stationID;
@property(readonly) int stationType;
@property(retain) NSURL * streamCertificateURL;
@property(retain) NSURL * streamKeyURL;
@property(retain) NSURL * streamURL;
@property(getter=isSubscribed) BOOL subscribed;
@property int subscriberCount;
@property(readonly) NSArray * tracksForPlayback;
@property BOOL tracksForPlaybackNeedRefresh;
@property BOOL virtualPlayEnabled;

- (void).cxx_destruct;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (id)adData;
- (long long)adamID;
- (void)addTracksForPlayback:(id)arg1 withExpirationDate:(id)arg2;
- (id)additionalReferencedTrackIDs;
- (id)artworkURL;
- (id)artworkURLData;
- (id)artworkURLForSize:(struct CGSize { float x1; float x2; })arg1 expectedSize:(struct CGSize { float x1; float x2; }*)arg2;
- (id)context;
- (id)coreSeedName;
- (long long)currentPlayingTrackID;
- (double)currentPlayingTrackTime;
- (void)dealloc;
- (id)debugDictionary;
- (id)dictionaryRepresentation;
- (BOOL)editEnabled;
- (id)editableFields;
- (id)feedbackDictionaryRepresentation;
- (unsigned int)hash;
- (unsigned int)impressionThreshold;
- (id)initWithManagedObject:(id)arg1 context:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFeatured;
- (BOOL)isGatewayVideoAdEnabled;
- (BOOL)isPremiumPlacement;
- (BOOL)isPreview;
- (BOOL)isShared;
- (BOOL)isSharingEnabled;
- (BOOL)isSponsored;
- (BOOL)isSubscribed;
- (BOOL)likesEnabled;
- (id)managedObject;
- (id)name;
- (long long)persistentID;
- (void)removeAllTracksForPlayback;
- (void)removeTrackForPlayback:(id)arg1;
- (id)seedTracks;
- (void)setAdData:(id)arg1;
- (void)setAdamID:(long long)arg1;
- (void)setAdditionalReferencedTrackIDs:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setArtworkURLData:(id)arg1;
- (void)setCoreSeedName:(id)arg1;
- (void)setCurrentPlayingTrackID:(long long)arg1;
- (void)setCurrentPlayingTrackTime:(double)arg1;
- (void)setDebugDictionary:(id)arg1;
- (void)setEditEnabled:(BOOL)arg1;
- (void)setEditableFields:(id)arg1;
- (void)setFeatured:(BOOL)arg1;
- (void)setGatewayVideoAdEnabled:(BOOL)arg1;
- (void)setImpressionThreshold:(unsigned int)arg1;
- (void)setLikesEnabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPremiumPlacement:(BOOL)arg1;
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
- (void)setStreamCertificateURL:(id)arg1;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamURL:(id)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setSubscriberCount:(int)arg1;
- (void)setTracksForPlaybackNeedRefresh:(BOOL)arg1;
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
- (int)stationType;
- (id)streamCertificateURL;
- (id)streamKeyURL;
- (id)streamURL;
- (int)subscriberCount;
- (id)tracksForPlayback;
- (BOOL)tracksForPlaybackNeedRefresh;
- (BOOL)virtualPlayEnabled;

@end
