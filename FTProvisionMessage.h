/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSString, NSData, NSDictionary;

@interface FTProvisionMessage : FTMessage <NSCopying> {
    NSString *_service;
    NSDictionary *_linkInfo;
    NSString *_realm;
    NSData *_csr;
    NSDictionary *_authenticationInfo;
    NSString *_userID;
    NSArray *_URIs;
    NSData *_responseCertificate;
    NSArray *_responseBindings;
    NSString *_protocolVersion;
}

@property(copy) NSString * service;
@property(copy) NSString * realm;
@property(copy) NSData * csr;
@property(copy) NSString * protocolVersion;
@property(copy) NSString * userID;
@property(copy) NSDictionary * authenticationInfo;
@property(copy) NSDictionary * linkInfo;
@property(copy) NSArray * URIs;
@property(copy) NSData * responseCertificate;
@property(copy) NSArray * responseBindings;


- (void)setResponseCertificate:(id)arg1;
- (id)responseCertificate;
- (void)setURIs:(id)arg1;
- (id)URIs;
- (void)setAuthenticationInfo:(id)arg1;
- (id)authenticationInfo;
- (void)setUserID:(id)arg1;
- (id)userID;
- (void)setCsr:(id)arg1;
- (id)csr;
- (void)setRealm:(id)arg1;
- (void)setLinkInfo:(id)arg1;
- (id)linkInfo;
- (void)setResponseBindings:(id)arg1;
- (id)responseBindings;
- (void)setProtocolVersion:(id)arg1;
- (id)protocolVersion;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)bagKey;
- (int)responseCommand;
- (int)command;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (id)requiredKeys;
- (id)messageBody;
- (BOOL)wantsBinaryPush;
- (void)setService:(id)arg1;
- (id)service;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)realm;

@end