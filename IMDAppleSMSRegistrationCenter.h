/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class FTPushHandler, NSDate, NSMutableArray, IMTimer;

@interface IMDAppleSMSRegistrationCenter : NSObject <IMUserNotificationListener, IMSystemMonitorListener> {
    FTPushHandler *_pushHandler;
    int _status;
    NSMutableArray *_handlers;
    NSMutableArray *_registrations;
    unsigned int _numberOfSMSSent;
    unsigned int _SMSRetries;
    unsigned int _isSMSWarningUp : 1;
    unsigned int _hasAcceptedSMSRequest : 1;
    unsigned int _commCenterDead : 1;
    int _carrierShortcodeSupported;
    unsigned int _smsIsAvailable : 1;
    unsigned int _needsToCheckPhoneNumberState : 1;
    NSDate *_nextSendSMSDate;
    IMTimer *_lastSendSMSTimer;
}

@property(readonly) int status;
@property(readonly) BOOL carrierSupportsShortCode;

+ (id)sharedInstance;

- (void)handleIncomingSMSForPhoneNumber:(id)arg1 signature:(id)arg2;
- (void)handleRegistrationSMSSuccessfullyDelivered:(id)arg1;
- (void)handlePhoneNumberChangedNotification:(id)arg1;
- (void)handlePhoneNumberRegistrationStateChangedNotification:(id)arg1;
- (void)_sendSMSVerification;
- (void)_setSMSDeliveryTimeout:(double)arg1;
- (void)_airplaneModeChangedNotification:(id)arg1;
- (void)_startupCoreTelephony;
- (void)_registerForDeviceCenterNotifications;
- (void)_notifyNeedsNewIdentification;
- (void)_checkRegistrationStatus;
- (void)_tryToSendSMSIdentification;
- (void)handleRegistrationSMSDeliveryFailed:(id)arg1;
- (void)_notifySuccess;
- (void)_notifyFailureWithError:(int)arg1 registration:(id)arg2;
- (void)timedOutWaitingForSMS;
- (BOOL)carrierSupportsShortCode;
- (BOOL)_deviceCanRegisterPresently;
- (BOOL)_failIfRegistrationIsNotSupported;
- (BOOL)_canDeliverSMSNow;
- (void)_smsDeliveryClear;
- (void)_deviceIDChangedNotification:(id)arg1;
- (void)_clearSMSDeliveryTimeout;
- (void)_daemonShuttingDown:(id)arg1;
- (void)_scheduleHeartbeat:(double)arg1;
- (void)heartbeat;
- (void)resetSMSCounter;
- (void)_registrationStateChangedNotification:(id)arg1;
- (void)sendRegistration:(id)arg1;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (void)_registerForCommCenterReadyNotifications;
- (void)_lockdownStateChanged:(id)arg1;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCarrierNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_registerForLockdownNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForCarrierNotifications;
- (void)userNotificationDidFinish:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)systemRestoreStateDidChange;
- (void)systemDidFinishMigration;
- (void)systemDidStopBackup;
- (id)init;
- (void)dealloc;
- (int)status;

@end
