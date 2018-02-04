@interface FBSSystemService : NSObject {
}

+ (id)clientCallbackQueue;
+ (FBSSystemService*)sharedService;

- (void)_openApplication:(id)arg1 withOptions:(id)arg2 clientHandle:(id)arg3 completion:(id /* block */)arg4;
- (bool)canOpenApplication:(id)arg1 reason:(long long*)arg2;
- (void)cleanupClientPort:(unsigned int)arg1;
- (unsigned int)createClientPort;
- (void)dataResetWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllSnapshotsForApplication:(id)arg1;
- (id)init;
- (bool)isPasscodeLockedOrBlocked;
- (void)openApplication:(NSString*)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id /* block */)arg4;
- (void)openApplication:(NSString*)arg1 options:(id)arg2 withResult:(id /* block */)arg3;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id /* block */)arg5;
- (int)pidForApplication:(NSString*)arg1;
- (id)processHandleForApplication:(id)arg1;
- (void)reboot;
- (void)sendActions:(id)arg1 withResult:(id /* block */)arg2;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(id /* block */)arg3;
- (void)shutdown;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;

@end