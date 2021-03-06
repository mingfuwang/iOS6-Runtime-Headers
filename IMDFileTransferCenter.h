/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSMutableSet, NSString, NSTimer, NSMutableArray, NSMutableDictionary;

@interface IMDFileTransferCenter : NSObject <IMFileCopierDelegate> {
    NSMutableDictionary *_guidToCopierMap;
    NSMutableDictionary *_guidToSimpleCopierMap;
    NSMutableDictionary *_guidToTransferMap;
    NSMutableSet *_activeTransfers;
    NSString *_contextStamp;
    NSTimer *_transferTimer;
    NSMutableArray *_transferringTransfers;
}

@property(readonly) BOOL hasActiveFileTransfers;
@property(retain) NSString * contextStamp;

+ (id)sharedInstance;

- (id)contextStamp;
- (void)_handleFileTransferRemoved:(id)arg1;
- (void)_handleSendFileTransfer:(id)arg1;
- (id)_allFileTransfers;
- (void)acceptTransfer:(id)arg1 path:(id)arg2;
- (void)failTransfer:(id)arg1 error:(id)arg2;
- (void)endTransfer:(id)arg1;
- (void)startFinalizingTransfer:(id)arg1;
- (void)updateTransfer:(id)arg1;
- (void)updateTransfer:(id)arg1 currentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3;
- (void)startTransfer:(id)arg1;
- (void)registerStandaloneTransfer:(id)arg1;
- (void)addTransfer:(id)arg1 forGUID:(id)arg2;
- (void)removeUnassignedTransfers;
- (void)assignTransfer:(id)arg1 toAccount:(id)arg2 otherPerson:(id)arg3;
- (id)guidForNewOutgoingTransferWithFilename:(id)arg1 isDirectory:(BOOL)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned long)arg4 hfsCreator:(unsigned long)arg5 hfsFlags:(unsigned short)arg6;
- (id)guidForNewIncomingTransferWithFilename:(id)arg1 isDirectory:(BOOL)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned long)arg4 hfsCreator:(unsigned long)arg5 hfsFlags:(unsigned short)arg6;
- (void)makeNewOutgoingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned long)arg5 hfsCreator:(unsigned long)arg6 hfsFlags:(unsigned short)arg7;
- (void)_addGatekeeperProperties:(id)arg1 toDirectory:(id)arg2;
- (void)archiveFileTransfer:(id)arg1;
- (id)_temporaryPathForGUID:(id)arg1 filename:(id)arg2;
- (void)_handleFileTransferStopped:(id)arg1;
- (id)_dictionaryRepresentationsForFileTransfers:(id)arg1 toSave:(BOOL)arg2;
- (void)_handleFileTransfer:(id)arg1 acceptedWithPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4;
- (void)_removeTransferringTransfer:(id)arg1;
- (id)_removeWrapperForTransfer:(id)arg1;
- (void)_addTransferringTransfer:(id)arg1;
- (id)_createWrapperForTransfer:(id)arg1;
- (void)removeTransferForGUID:(id)arg1;
- (void)makeNewIncomingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned long)arg5 hfsCreator:(unsigned long)arg6 hfsFlags:(unsigned short)arg7;
- (void)_transferTimerTick:(id)arg1;
- (void)_addSpotlightPropertiesFromFileTransfer:(id)arg1 toDirectory:(id)arg2;
- (void)_addDefaultGatekeeperPropertiesToDirectory:(id)arg1;
- (long)_addGatekeeperProperties:(id)arg1 toFileAtPath:(id)arg2;
- (void)failTransfer:(id)arg1 reason:(int)arg2;
- (void)_archiveFileTransfer:(id)arg1;
- (void)_postUpdated:(id)arg1;
- (void)_updateContextStamp;
- (void)_saveTransfersToDefaults;
- (void)setContextStamp:(id)arg1;
- (void)_loadTransfersFromDefaults;
- (BOOL)hasActiveFileTransfers;
- (void)_addActiveTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (id)init;
- (void)dealloc;

@end
