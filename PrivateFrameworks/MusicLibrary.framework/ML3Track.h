/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Track : ML3Entity {
}

+ (id)TVShowEpisodesDefaultOrderingProperties;
+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)albumAllArtistsDefaultOrderingProperties;
+ (id)albumAndArtistDefaultOrderingProperties;
+ (id)albumsDefaultOrderingProperties;
+ (id)allProperties;
+ (id)artistAllAlbumsDefaultOrderingProperties;
+ (id)artistsDefaultOrderingProperties;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)composersDefaultOrderingProperties;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (id)containerQueryWithContainer:(id)arg1;
+ (id)databaseTable;
+ (id)defaultOrderingProperties;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned int)arg4;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(id)arg3;
+ (id)extraTablesToDelete;
+ (id)extraTablesToInsert;
+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)genresDefaultOrderingProperties;
+ (id)importChaptersByParsingAsset:(id)arg1;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)arg1;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (BOOL)libraryDynamicChangeForProperty:(id)arg1;
+ (id)orderingTermsForITTGTrackOrder:(unsigned long)arg1 descending:(BOOL)arg2;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)podcastsDefaultOrderingProperties;
+ (id)podcastsEpisodesDefaultOrderingProperties;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (id)predisambiguatedProperties;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;
+ (BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (int)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (BOOL)trackValueAreInTheCloud:(id)arg1;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long*)arg3;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (id)unsettableProperties;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;

- (void)_createVideoSnapshotAtTime:(double)arg1 withCompletionBlock:(id)arg2;
- (id)_screenshotArtworkDataStoredAsItemArtwork;
- (id)absoluteFilePath;
- (id)artworkCacheIDAtPlaybackTime:(double)arg1;
- (id)chapterTOC;
- (void)createVideoSnapshotAtTime:(double)arg1;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
- (BOOL)needsVideoSnapshot;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (id)rawIntegrity;
- (void)updateCollectionCloudStatus;
- (BOOL)updateIntegrity;
- (void)updateStoreBookmarkMetadataIdentifier;

@end
