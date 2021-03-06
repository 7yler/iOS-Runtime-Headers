/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeManager : NSObject <HAPFragmentationStreamDelegate, HAPTimerDelegate, HMDAccessoryManagerDelegate, HMDPairedSyncDelegate, HMMessageReceiver, IDSServiceDelegate> {
    NSObject<OS_dispatch_source> *_accessoryFinderTimer;
    HMDAccessoryManager *_accessoryManager;
    BOOL _accountActive;
    BOOL _accountStatusFailedDueToNetworkFailure;
    BOOL _accountStatusIsAuthenticated;
    HMDApplicationRegistry *_appRegistry;
    int _assetUpdatedNotification;
    unsigned int _assistantGenerationCounter;
    NSMutableDictionary *_associatedRemotePeers;
    NSMutableDictionary *_associatedWatchPeers;
    BOOL _backOffOperationInProgress;
    HMDClientConnection *_clientConnection;
    HMDCloudDataSyncManager *_cloudDataSyncManager;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
    unsigned int _cloudOperationRetryCount;
    NSObject<OS_dispatch_source> *_cloudOperationRetryTimer;
    HMDCloudReadOnlyModeFilter *_cloudReadonlyFilter;
    NSObject<OS_dispatch_source> *_cloudUploadTimer;
    HAPTimer *_cloudkitAccountChangedDebounceTimer;
    BOOL _cloudkitAccountStatusDetermined;
    BOOL _companionReachable;
    NSUUID *_dataTag;
    NSMutableSet *_dialogCancelationContexts;
    NSMutableSet *_fullSyncedWatchPeers;
    HMDAssistantGather *_gatherer;
    unsigned int _generationCounter;
    BOOL _homeDataLoadedFromArchive;
    unsigned int _homeDatabaseSize;
    NSMutableDictionary *_homeNames;
    NSMutableArray *_homes;
    HMDIdentityRegistry *_identityRegistry;
    HMDIDSMessageDispatcher *_idsMessageDispatcher;
    BOOL _ignoreFirstTimeReachabilityChanged;
    NSMutableArray *_incomingInvitations;
    BOOL _lastAnswerForShouldCloudSyncData;
    HMDLocation *_locationHandler;
    HMMessageDispatcher *_messageDispatcher;
    HMDMessageFilterChain *_msgFilterChain;
    HMDNameValidator *_nameValidator;
    BOOL _needToCleanUpKeys;
    int _networkConnectionAvailable;
    int _newAssetInstalledNotification;
    unsigned short _nextRequestTransactionIdentifier;
    HMDPairedSync *_pairedSync;
    NSMutableDictionary *_pendingDataSyncAcks;
    NSMutableDictionary *_pendingFragmentationStream;
    NSMutableDictionary *_pendingRemoteSessions;
    NSMutableSet *_pendingResidentSetupSessions;
    NSMutableArray *_pendingResponsesForAccessoryFinder;
    HMDPendingCloudSyncTransactions *_pendingTransactions;
    HMDPowerManager *_powerManager;
    NSUUID *_primaryHomeUUID;
    struct __SCNetworkReachability { } *_reachability;
    NSArray *_reachableWatchDeviceAddresses;
    HAPTimer *_remoteAccessHealthMonitorTimer;
    HMDTimeInformationMonitor *_timeInformationMonitor;
    NSMutableSet *_unassociatedRemotePeers;
    BOOL _uploadHomeDataToCloud;
    BOOL _uploadMetadataToCloud;
    BOOL _uploadToCloudIsPending;
    NSUUID *_uuid;
    NSMutableArray *_uuidsOfRemovedHomes;
    NSMutableDictionary *_watchSyncStateMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *accessoryFinderTimer;
@property (nonatomic, retain) HMDAccessoryManager *accessoryManager;
@property (nonatomic) BOOL accountActive;
@property (nonatomic) BOOL accountStatusFailedDueToNetworkFailure;
@property (nonatomic) BOOL accountStatusIsAuthenticated;
@property (nonatomic, retain) HMDApplicationRegistry *appRegistry;
@property (nonatomic) int assetUpdatedNotification;
@property (nonatomic) unsigned int assistantGenerationCounter;
@property (nonatomic, retain) NSMutableDictionary *associatedRemotePeers;
@property (nonatomic, retain) NSMutableDictionary *associatedWatchPeers;
@property (nonatomic) BOOL backOffOperationInProgress;
@property (nonatomic, retain) HMDClientConnection *clientConnection;
@property (nonatomic, retain) HMDCloudDataSyncManager *cloudDataSyncManager;
@property (nonatomic, retain) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter;
@property (nonatomic) unsigned int cloudOperationRetryCount;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *cloudOperationRetryTimer;
@property (nonatomic, retain) HMDCloudReadOnlyModeFilter *cloudReadonlyFilter;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *cloudUploadTimer;
@property (nonatomic, retain) HAPTimer *cloudkitAccountChangedDebounceTimer;
@property (nonatomic) BOOL cloudkitAccountStatusDetermined;
@property (nonatomic) BOOL companionReachable;
@property (nonatomic, retain) NSUUID *dataTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *dialogCancelationContexts;
@property (nonatomic, retain) NSMutableSet *fullSyncedWatchPeers;
@property (nonatomic, retain) HMDAssistantGather *gatherer;
@property (nonatomic) unsigned int generationCounter;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL homeDataLoadedFromArchive;
@property (nonatomic) unsigned int homeDatabaseSize;
@property (nonatomic, retain) NSMutableDictionary *homeNames;
@property (nonatomic, retain) NSMutableArray *homes;
@property (nonatomic, retain) HMDIdentityRegistry *identityRegistry;
@property (nonatomic, retain) HMDIDSMessageDispatcher *idsMessageDispatcher;
@property (nonatomic) BOOL ignoreFirstTimeReachabilityChanged;
@property (nonatomic, retain) NSMutableArray *incomingInvitations;
@property (nonatomic) BOOL lastAnswerForShouldCloudSyncData;
@property (nonatomic, retain) HMDLocation *locationHandler;
@property (nonatomic, retain) HMMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMDMessageFilterChain *msgFilterChain;
@property (nonatomic, retain) HMDNameValidator *nameValidator;
@property (nonatomic) BOOL needToCleanUpKeys;
@property (nonatomic) int networkConnectionAvailable;
@property (nonatomic) int newAssetInstalledNotification;
@property (nonatomic, readonly) unsigned short nextRequestTransactionIdentifier;
@property (nonatomic, readonly) HMDPairedSync *pairedSync;
@property (nonatomic, retain) NSMutableDictionary *pendingDataSyncAcks;
@property (nonatomic, retain) NSMutableDictionary *pendingFragmentationStream;
@property (nonatomic, retain) NSMutableDictionary *pendingRemoteSessions;
@property (nonatomic, retain) NSMutableSet *pendingResidentSetupSessions;
@property (nonatomic, retain) NSMutableArray *pendingResponsesForAccessoryFinder;
@property (nonatomic, retain) HMDPendingCloudSyncTransactions *pendingTransactions;
@property (nonatomic, retain) HMDPowerManager *powerManager;
@property (nonatomic, retain) NSUUID *primaryHomeUUID;
@property (nonatomic) struct __SCNetworkReachability { }*reachability;
@property (nonatomic, retain) NSArray *reachableWatchDeviceAddresses;
@property (nonatomic, retain) HAPTimer *remoteAccessHealthMonitorTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMDTimeInformationMonitor *timeInformationMonitor;
@property (nonatomic, retain) NSMutableSet *unassociatedRemotePeers;
@property (nonatomic) BOOL uploadHomeDataToCloud;
@property (nonatomic) BOOL uploadMetadataToCloud;
@property (nonatomic) BOOL uploadToCloudIsPending;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) NSMutableArray *uuidsOfRemovedHomes;
@property (nonatomic, retain) NSMutableDictionary *watchSyncStateMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)activeAccountIdentifier;
+ (id)createIdentifierSalt:(id)arg1;
+ (BOOL)doesSaveReasonAffectOnlyLocalData:(id)arg1;
+ (void)enableDisplayOfHomeKitSettings;
+ (id)getCurrentUserID;
+ (id)getUniqueDeviceIdSalt;
+ (id)remotePeerDeviceAddress:(id)arg1;
+ (id)saltForDeviceSpecificIdentifier;

- (void).cxx_destruct;
- (void)__registerIncomingInvitations:(id)arg1;
- (void)_acceptHomeInviteFromUser:(id)arg1 message:(id)arg2 trackInvite:(BOOL)arg3;
- (BOOL)_acceptMetadataVersion:(id)arg1 schemaVersion:(id)arg2 error:(id*)arg3;
- (void)_accessoriesAreLocallyReachableOnTransientDevice:(BOOL)arg1 forHome:(id)arg2;
- (id)_accessoryIdentifiersForHome:(id)arg1;
- (void)_addPendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_addSyncOperation:(id)arg1;
- (void)_addWatch:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)_addWatch:(id)arg1 toAssociatedList:(id)arg2;
- (void)_cancelAccessoryFinderTimer;
- (void)_checkAndAddWatchDevices:(id)arg1 resend:(BOOL)arg2 requestFromWatch:(BOOL)arg3;
- (void)_checkAndAddWatchDevicesWithResend:(BOOL)arg1;
- (void)_checkAndInformCompanionDevices:(id)arg1;
- (void)_checkForAccountChanged;
- (void)_checkForRemotePeers;
- (void)_checkForRemotePeersAndRegisterForRemoteNotifications:(BOOL)arg1;
- (void)_cleariCloudSwitchState;
- (BOOL)_configureHomes:(id)arg1;
- (BOOL)_configureHomesImpl:(id)arg1;
- (void)_detectGuestHomesAddedAndRemovedWithCloudHomes:(id)arg1;
- (void)_downloadUnavailableAsset:(id)arg1 availableVersion:(unsigned int)arg2 unavailableVersion:(unsigned int)arg3;
- (void)_electCompanionForRemoteAccess:(id)arg1;
- (void)_electRemoteAccessDeviceForHome:(id)arg1 retryCount:(unsigned int)arg2;
- (void)_electRemoteAccessPeerForHome:(id)arg1;
- (void)_electRemoteAccessPeerForHome:(id)arg1 retryCount:(unsigned int)arg2;
- (void)_electRemoteGatewayForHomesAfterReachabilityChanges;
- (void)_eraseConfiguration:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_eraseLocalHomeConfiguration;
- (void)_eraseLocalHomeConfigurationAndDeleteMetadata:(BOOL)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)_eraseLocalHomeConfigurationCommon;
- (void)_eraseLocalMetadata;
- (void)_extractVendorIdentifierFor:(id)arg1 andRun:(id /* block */)arg2;
- (void)_fetchDataFromCloud;
- (id)_filterAccessories:(id)arg1 inHome:(id)arg2;
- (id)_filterAccessories:(id)arg1 withIdentifiers:(id)arg2;
- (BOOL)_findAnyAccessoryWithIdentities:(id)arg1 inAccessoryServers:(id)arg2;
- (void)_findRemotePeerContainingAccessories:(id)arg1 forHome:(id)arg2;
- (BOOL)_getControllerKey:(id*)arg1 controllerUsername:(id*)arg2 error:(id*)arg3;
- (id)_getHomeConfiguration;
- (void)_handleAccessHomeInvite:(id)arg1;
- (void)_handleAccountAvailabilityChanged;
- (void)_handleAccountStatusDeterminedWithError:(id)arg1 homeDataRecordExists:(BOOL)arg2 metadataRecordExists:(BOOL)arg3;
- (void)_handleAddRemoteAccessRequest:(id)arg1;
- (void)_handleAreYouAtHome:(id)arg1;
- (void)_handleCompanionKeysSync:(id)arg1;
- (void)_handleControllerKeyAvailable;
- (void)_handleDisabledResidentDevices;
- (void)_handleDismissBulletinRequest:(id)arg1;
- (void)_handleDismissDialogRequest:(id)arg1;
- (void)_handleDoYouSeeUnpairedAccessories:(id)arg1;
- (void)_handleDumpState:(id)arg1;
- (void)_handleHomeDataFragmentedSync:(id)arg1;
- (void)_handleHomeDataSync:(id)arg1;
- (void)_handleHomesConfigSync:(id)arg1;
- (void)_handleLogControl:(id)arg1;
- (void)_handleMergeWithCloudHomeData1:(id)arg1 cloudHomeData2:(id)arg2 needConflictResolution:(BOOL)arg3 homeDataFetechedTransaction:(id)arg4;
- (void)_handleMetadataAssetUpdated;
- (void)_handleMetadataSync:(id)arg1;
- (void)_handlePrimaryAccountDeleted:(id)arg1;
- (void)_handlePrimaryAccountModified:(id)arg1;
- (void)_handleQueryAddressesOfControllersOnYourAccount:(id)arg1;
- (void)_handleQueryMetadata:(id)arg1;
- (void)_handleQueryVersionInformation:(id)arg1;
- (void)_handleQueryiCloudSwitchState:(id)arg1;
- (void)_handleReachableCompanionDevicesChanged:(id)arg1;
- (void)_handleReachableWatchDevicesChanged:(id)arg1;
- (void)_handleRemoteAccessPeersFoundNotification:(id)arg1;
- (void)_handleRemoteSessionTornDown:(id)arg1;
- (void)_handleRequestAddHome:(id)arg1;
- (void)_handleRequestFetchHomeConfiguration:(id)arg1;
- (void)_handleRequestForCompanionKeysSync:(id)arg1;
- (void)_handleRequestIsUserUsingHomeKit:(id)arg1;
- (void)_handleRequestRemoveHome:(id)arg1;
- (void)_handleRequestSetPrimaryHome:(id)arg1;
- (void)_handleRequestToUpdateHomeInvitationFromInviter:(id)arg1;
- (void)_handleRequestToUpdateHomeInvitationFromLocalUser:(id)arg1;
- (void)_handleResetConfiguration:(id)arg1;
- (void)_handleResetHome:(id)arg1;
- (void)_handleRetrieveVendorIdentifier:(id)arg1;
- (void)_handleSaveRequest:(id)arg1;
- (void)_handleSetMetadata:(id)arg1;
- (void)_handleShouldDisplayiCloudSwitch:(id)arg1;
- (void)_handleUpdateiCloudSwitchState:(id)arg1;
- (void)_handleUserRemoved:(id)arg1;
- (id)_homeWithName:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (void)_installAvailableAsset:(id)arg1 version:(unsigned int)arg2;
- (BOOL)_isiCloudSwitchStateEnabled;
- (BOOL)_isiCloudSwitchStatePresent;
- (void)_loadMessageDispatcher:(id)arg1 idsMessageDispatcher:(id)arg2 accessoryManager:(id)arg3 messageFilterChain:(id)arg4 homeData:(id)arg5 identityRegistry:(id)arg6 appRegistry:(id)arg7 reloadData:(BOOL)arg8;
- (void)_loadMetadataFromURL:(id)arg1 identifier:(id)arg2 remoteSource:(BOOL)arg3 responseHandler:(id /* block */)arg4;
- (void)_mergeHomeDataWithRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(BOOL)arg4 idsDataSync:(BOOL)arg5 idsSyncUser:(id)arg6 dataVersion:(int)arg7 newResidentDevice:(BOOL*)arg8;
- (void)_monitorReachability;
- (unsigned short)_nextTransactionIdentifier;
- (void)_notifySyncDataChanged;
- (void)_pairedSyncDidStart;
- (void)_postCloudSyncNotificationWithSuccess:(BOOL)arg1;
- (void)_postHomesDidUpdateNotification;
- (void)_postIncomingInvitationStateChangedNotification:(id)arg1 newInvitationState:(int)arg2;
- (void)_postMergeDataFromCloud:(BOOL)arg1;
- (void)_postiCloudSigninState:(BOOL)arg1;
- (id)_prepareDataForDevicesOnSameAccountForHome:(id)arg1 remoteGateway:(BOOL)arg2;
- (id)_prepareHomesVersionDict;
- (void)_processAnyPendingRequestsForRemoteAccess:(BOOL)arg1;
- (void)_pushChangesForHome:(id)arg1 toRegularUsersOfHome:(id)arg2 electDestinationDevice:(BOOL)arg3;
- (void)_pushChangesForHome:(id)arg1 toRemoteDevicesOnSameAccount:(id)arg2 addedUser:(id)arg3;
- (void)_pushChangesToAllUsersOfAllHomes;
- (void)_pushChangesToCloud;
- (void)_pushChangesToUsers:(id)arg1 forHome:(id)arg2;
- (void)_pushChangesToUsersThatHaveNotAcknowledged;
- (void)_pushChangesToWatch:(id)arg1 paylod:(id)arg2 group:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_pushMetadataChangesToUsers;
- (void)_pushMetadataToCloud;
- (void)_registerForMessages;
- (void)_reloadHomeDataFromLocalStore;
- (void)_remoteAccessHealthMonitorTimerDidFire:(id)arg1;
- (void)_removeAllUsersOfHome:(id)arg1;
- (BOOL)_removeAndAddKeyPair:(id)arg1 userName:(id)arg2;
- (void)_removeFromAssociatedPeers:(id)arg1 home:(id)arg2;
- (void)_removeFromUnassociatedPeers:(id)arg1 home:(id)arg2;
- (void)_removeHome:(id)arg1 withMessage:(id)arg2 saveToStore:(BOOL)arg3 removedByLocalUser:(BOOL)arg4;
- (void)_removePendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_resetCloudOperationRetryCounters;
- (void)_retryCloudOperationWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_saveMetadata:(BOOL)arg1;
- (void)_saveMetadata:(id)arg1 pushChangesToCloud:(BOOL)arg2;
- (void)_saveToPersistentStore;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned int)arg3;
- (void)_saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (void)_sendFragmentedMessage:(id)arg1 messageIndex:(unsigned int)arg2 messageIdentity:(id)arg3 userID:(id)arg4 destination:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_sendHomeDataToAllWatches;
- (void)_sendHomeDataToWatch:(id)arg1 performVersionCheck:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)_sendInviteRequestToUser:(id)arg1 inviteIdentifier:(id)arg2 forHome:(id)arg3 confirm:(BOOL)arg4 expiryDate:(id)arg5 queue:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_sendKeysToWatch:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sendUpdateRequestToAdminForInvitation:(id)arg1 homeUUID:(id)arg2 invitationState:(int)arg3;
- (void)_sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)_sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_setHomeConfigurationKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)_setHomekitAssistantConfigurationVersion:(unsigned int)arg1;
- (BOOL)_setPrimaryHome:(id)arg1 idsDataSync:(BOOL)arg2;
- (void)_setUniqueDeviceIdSalt:(id)arg1;
- (void)_startAccessoryFinderTimer;
- (void)_startAccessoryFinderTimerExpired;
- (void)_startCloudOperationRetryWithTimeout:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_startScanningForAccessories:(id)arg1;
- (void)_startTimerToResetCloudOperationRetryCounter;
- (void)_startUploadTimer;
- (void)_stopCloudOperationRetryTimer;
- (void)_stopUploadTimer;
- (void)_suspendXPCConnectionAndMergeRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(BOOL)arg4 idsDataSync:(BOOL)arg5 idsSyncUser:(id)arg6 dataVersion:(int)arg7 completionHandler:(id /* block */)arg8;
- (void)_teardownRemoteAccessForHome:(id)arg1;
- (void)_teardownRemoteAccessForHomeCommon:(id)arg1;
- (void)_teardownRemoteAccessForHomeThroughCompanion:(id)arg1;
- (id)_trackIncomingInvitationFromUser:(id)arg1 message:(id)arg2 invitationState:(int)arg3 error:(id*)arg4;
- (void)_updateCloudDataSyncWithAccountState:(BOOL)arg1;
- (void)_updateHomeKitInUsePreferences;
- (void)_updateHomesAboutNetworkConnectivity:(BOOL)arg1;
- (void)_updateTransportInformationInstances:(id)arg1 remoteAccessories:(id)arg2;
- (void)_updateiCloudSwitchState:(BOOL)arg1;
- (void)_updateiCloudSwitchStateFromiCloudDriveState;
- (void)_uploadHomeConfigToCloud;
- (void)accessoriesAreLocallyReachableOnTransientDevice:(BOOL)arg1 forHome:(id)arg2;
- (id)accessoryFinderTimer;
- (id)accessoryManager;
- (void)accessoryManager:(id)arg1 didAddDiscoveredAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemoveDiscoveredAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (BOOL)accountActive;
- (void)accountAvailabilityChanged:(id)arg1;
- (BOOL)accountStatusFailedDueToNetworkFailure;
- (BOOL)accountStatusIsAuthenticated;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (id)appRegistry;
- (void)archiveServerToken:(id)arg1;
- (int)assetUpdatedNotification;
- (unsigned int)assistantGenerationCounter;
- (id)associatedRemotePeers;
- (id)associatedWatchPeers;
- (BOOL)backOffOperationInProgress;
- (void)checkAndPushMetadataToUser:(id)arg1 destination:(id)arg2 userInfo:(id)arg3;
- (void)checkForRemotePeers;
- (id)clientConnection;
- (id)cloudDataSyncManager;
- (id)cloudDataSyncStateFilter;
- (unsigned int)cloudOperationRetryCount;
- (id)cloudOperationRetryTimer;
- (id)cloudReadonlyFilter;
- (id)cloudUploadTimer;
- (id)cloudkitAccountChangedDebounceTimer;
- (BOOL)cloudkitAccountStatusDetermined;
- (BOOL)companionReachable;
- (void)controllerKeyPairGenerated:(id)arg1;
- (id)dataTag;
- (void)dealloc;
- (id)dialogCancelationContexts;
- (void)dismissBulletinOnAllMyTransientDevicesWithContext:(id)arg1;
- (void)dismissDialogOnAllMyTransientDevicesWithContext:(id)arg1 selection:(BOOL)arg2;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)electRemoteAccessPeerForHome:(id)arg1;
- (void)eraseLocalHomeData;
- (void)forcePushLocalDataToCloud:(id)arg1;
- (void)fragmentationStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)fragmentationStream:(id)arg1 didReceiveData:(id)arg2 transactionIdentifier:(unsigned short)arg3 error:(id)arg4;
- (id)fullSyncedWatchPeers;
- (id)gatherer;
- (unsigned int)generationCounter;
- (void)handleBackgroundTaskAgentJob:(const char *)arg1 forHomeWithUUID:(id)arg2;
- (void)handleEducationAccountEnabled:(id)arg1;
- (BOOL)homeDataLoadedFromArchive;
- (unsigned int)homeDatabaseSize;
- (id)homeNames;
- (id)homes;
- (id)identifiersOfAccessories:(id)arg1;
- (id)identityRegistry;
- (id)idsMessageDispatcher;
- (BOOL)ignoreFirstTimeReachabilityChanged;
- (id)incomingInvitations;
- (id)initWithMessageDispatcher:(id)arg1 idsMessageDispatcher:(id)arg2 accessoryManager:(id)arg3 messageFilterChain:(id)arg4 homeData:(id)arg5 identityRegistry:(id)arg6 appRegistry:(id)arg7;
- (BOOL)isThisDeviceAdminOfHome:(id)arg1;
- (BOOL)lastAnswerForShouldCloudSyncData;
- (id)locationHandler;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgFilterChain;
- (id)nameValidator;
- (BOOL)needToCleanUpKeys;
- (int)networkConnectionAvailable;
- (int)newAssetInstalledNotification;
- (unsigned short)nextRequestTransactionIdentifier;
- (void)notifyPrimaryHomeUpdated:(id)arg1;
- (id)pairedSync;
- (void)pairedSyncDidStart:(id)arg1;
- (id)pendingDataSyncAcks;
- (id)pendingFragmentationStream;
- (id)pendingRemoteSessions;
- (id)pendingResidentSetupSessions;
- (id)pendingResponsesForAccessoryFinder;
- (id)pendingTransactions;
- (void)postHomesDidUpdateNotification;
- (id)powerManager;
- (id)primaryHomeUUID;
- (void)pushMetadataToCloud;
- (struct __SCNetworkReachability { }*)reachability;
- (id)reachableWatchDeviceAddresses;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 toResidentForHome:(id)arg4;
- (void)reloadHomeDataFromLocalStore;
- (id)remoteAccessHealthMonitorTimer;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (void)saveMetadata:(id)arg1 pushChangesToCloud:(BOOL)arg2;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)saveWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned int)arg3;
- (void)sendInviteRequestToUser:(id)arg1 inviteIdentifier:(id)arg2 forHome:(id)arg3 confirm:(BOOL)arg4 expiryDate:(id)arg5 queue:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)sendSecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 destination:(id)arg4 responseQueue:(id)arg5 responseHandler:(id /* block */)arg6;
- (void)sendUnsecureMessage:(id)arg1 target:(id)arg2 userID:(id)arg3 responseQueue:(id)arg4 responseHandler:(id /* block */)arg5;
- (void)sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setAccessoryFinderTimer:(id)arg1;
- (void)setAccessoryManager:(id)arg1;
- (void)setAccountActive:(BOOL)arg1;
- (void)setAccountStatusFailedDueToNetworkFailure:(BOOL)arg1;
- (void)setAccountStatusIsAuthenticated:(BOOL)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setAssetUpdatedNotification:(int)arg1;
- (void)setAssistantGenerationCounter:(unsigned int)arg1;
- (void)setAssociatedRemotePeers:(id)arg1;
- (void)setAssociatedWatchPeers:(id)arg1;
- (void)setBackOffOperationInProgress:(BOOL)arg1;
- (void)setClientConnection:(id)arg1;
- (void)setCloudDataSyncManager:(id)arg1;
- (void)setCloudDataSyncStateFilter:(id)arg1;
- (void)setCloudOperationRetryCount:(unsigned int)arg1;
- (void)setCloudOperationRetryTimer:(id)arg1;
- (void)setCloudReadonlyFilter:(id)arg1;
- (void)setCloudUploadTimer:(id)arg1;
- (void)setCloudkitAccountChangedDebounceTimer:(id)arg1;
- (void)setCloudkitAccountStatusDetermined:(BOOL)arg1;
- (void)setCompanionReachable:(BOOL)arg1;
- (void)setDataTag:(id)arg1;
- (void)setDialogCancelationContexts:(id)arg1;
- (void)setFullSyncedWatchPeers:(id)arg1;
- (void)setGatherer:(id)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setHomeConfigurationKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (void)setHomeConfigurationVersion:(unsigned int)arg1;
- (void)setHomeDataLoadedFromArchive:(BOOL)arg1;
- (void)setHomeDatabaseSize:(unsigned int)arg1;
- (void)setHomeNames:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setIdsMessageDispatcher:(id)arg1;
- (void)setIgnoreFirstTimeReachabilityChanged:(BOOL)arg1;
- (void)setIncomingInvitations:(id)arg1;
- (void)setLastAnswerForShouldCloudSyncData:(BOOL)arg1;
- (void)setLocationHandler:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setMsgFilterChain:(id)arg1;
- (void)setNameValidator:(id)arg1;
- (void)setNeedToCleanUpKeys:(BOOL)arg1;
- (void)setNetworkConnectionAvailable:(int)arg1;
- (void)setNewAssetInstalledNotification:(int)arg1;
- (void)setPendingDataSyncAcks:(id)arg1;
- (void)setPendingFragmentationStream:(id)arg1;
- (void)setPendingRemoteSessions:(id)arg1;
- (void)setPendingResidentSetupSessions:(id)arg1;
- (void)setPendingResponsesForAccessoryFinder:(id)arg1;
- (void)setPendingTransactions:(id)arg1;
- (void)setPowerManager:(id)arg1;
- (void)setPrimaryHomeUUID:(id)arg1;
- (void)setReachability:(struct __SCNetworkReachability { }*)arg1;
- (void)setReachableWatchDeviceAddresses:(id)arg1;
- (void)setRemoteAccessHealthMonitorTimer:(id)arg1;
- (void)setTimeInformationMonitor:(id)arg1;
- (void)setUnassociatedRemotePeers:(id)arg1;
- (void)setUploadHomeDataToCloud:(BOOL)arg1;
- (void)setUploadMetadataToCloud:(BOOL)arg1;
- (void)setUploadToCloudIsPending:(BOOL)arg1;
- (void)setUuid:(id)arg1;
- (void)setUuidsOfRemovedHomes:(id)arg1;
- (void)setWatchSyncStateMap:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)teardownRemoteAccessForHome:(id)arg1;
- (id)timeInformationMonitor;
- (void)timerDidFire:(id)arg1;
- (id)transientDeviceAddresses;
- (id)unassociatedRemotePeers;
- (void)updateGenerationCounter;
- (void)updateHomesConfigured;
- (void)updateIncomingInvitesPresent;
- (void)updateiCloudSwitchState:(BOOL)arg1;
- (BOOL)uploadHomeDataToCloud;
- (BOOL)uploadMetadataToCloud;
- (BOOL)uploadToCloudIsPending;
- (id)uuid;
- (id)uuidsOfRemovedHomes;
- (id)watchSyncStateMap;
- (id)workQueue;

@end
