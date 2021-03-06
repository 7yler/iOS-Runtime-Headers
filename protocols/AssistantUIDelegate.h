/* Generated by RuntimeBrowser.
 */

@protocol AssistantUIDelegate

@required

- (void)assistantUpdateProgress:(NSString *)arg1 forState:(int)arg2;
- (void)assistantWaitingForResourcesComplete;
- (void)assistantWaitingForResourcesStart;
- (void)connectionVerificationSucceededForSelector:(int)arg1;
- (void)doneWithAssistantResult:(long)arg1;
- (void)presentUIForRecommendationResult:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)presentUIForRecommendationStatus;
- (void)presentUIForRecommmendationTargetInfo:(NSDictionary *)arg1;
- (void)presentUIForSetupResult:(long)arg1 baseStationInfo:(NSDictionary *)arg2 withPrompt:(NSString *)arg3;
- (void)presentUIForSetupStatusWithRecommendationDict:(NSDictionary *)arg1;
- (void)presentUIForStepByStepNextStep:(int)arg1 paramDict:(NSDictionary *)arg2;
- (void)presentUIForStepByStepResult:(long)arg1;
- (void)presentUIForStepByStepStart;
- (void)showAskUserForPPPoECredentialsForStatus:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)showAskUserSwapCablingForStatus:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)showTellUserToPlugInEthernetForStatus:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)showTellUserToResetBroadbandDeviceForStatus:(long)arg1 paramDict:(NSDictionary *)arg2;
- (void)showUIConfigPromptForGuestNetConfigWithParamDict:(NSDictionary *)arg1;
- (void)showUIConfigPromptToSendDiagsUsageStatsWithParamDict:(NSDictionary *)arg1;

@optional

- (void)showUIConfigPromptPostHook;
- (void)showUIConfigPromptPreHook;

@end
