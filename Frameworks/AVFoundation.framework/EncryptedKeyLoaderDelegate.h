/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface EncryptedKeyLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    NSData * _appCert;
    NSString * _certURL;
    NSString * _keyServerURL;
    NSURL * persistentKeySaveDestination;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSURL *persistentKeySaveDestination;
@property (readonly) Class superclass;

- (void)_prepareAndSendStreamingKeyRequest:(id)arg1;
- (BOOL)_willLoadOrRenewRequestedResource:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithKeyServerURL:(id)arg1 certURL:(id)arg2;
- (id)persistentKeySaveDestination;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (void)setPersistentKeySaveDestination:(id)arg1;

@end