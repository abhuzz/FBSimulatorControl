//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Feb 20 2016 22:04:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDKServiceConnection;

@interface MDKManagedConfigService : NSObject
{
    MDKServiceConnection *mServiceConnection;
    BOOL mIsAtLeastInnsbruck;
    BOOL mIsAtLeastSochi;
    BOOL _escalated;
}

+ (id)serviceWithConnection:(id)arg1 forProductVersion:(id)arg2;
@property(getter=isEscalated) BOOL escalated; // @synthesize escalated=_escalated;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)arg1 error:(id *)arg2;
- (BOOL)sendMessage:(id)arg1 handleResponse:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)errorFromResponse:(id)arg1;
- (void)invalidate;
- (BOOL)disconnectAndReturnError:(id *)arg1;
- (BOOL)escalateWithIdentity:(id)arg1 error:(id *)arg2;
- (BOOL)setLanguageWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)retrievePasscodeUnlockTokenAndReturnError:(id *)arg1;
- (BOOL)clearPasscodeWithUnlockToken:(id)arg1 error:(id *)arg2;
- (BOOL)changeWallpaper:(id)arg1 homeScreen:(id)arg2 error:(id *)arg3;
- (BOOL)changeSettings:(id)arg1 error:(id *)arg2;
- (BOOL)eraseDeviceAndReturnError:(id *)arg1;
- (BOOL)clearRestrictionsPasswordAndReturnError:(id *)arg1;
- (BOOL)migrateKeybagAndReturnError:(id *)arg1;
- (BOOL)flushAndReturnError:(id *)arg1;
- (BOOL)downloadAndApplyCloudConfigurationWithUsername:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (BOOL)getCloudConfiguration:(id *)arg1 error:(id *)arg2;
- (BOOL)setCloudConfiguration:(id)arg1 error:(id *)arg2;
- (id)deviceInformationForKeys:(id)arg1 error:(id *)arg2;
- (BOOL)helloAndReturnError:(id *)arg1;
- (BOOL)removeConfigurationProfileWithMetadata:(id)arg1 error:(id *)arg2;
- (BOOL)installConfigurationProfileData:(id)arg1 error:(id *)arg2;
- (BOOL)getInstalledProfileIdentifiers:(id *)arg1 andMetadata:(id *)arg2 error:(id *)arg3;
- (id)description;
- (id)initWithServiceConnection:(id)arg1;

@end
