/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDWiProxLeRemoveServiceRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    } _has;
    NSString *_serviceUUID;
    NSString *_sessionId;
    unsigned long long _timestamp;
}

@property(readonly) BOOL hasServiceUUID;
@property(readonly) BOOL hasSessionId;
@property BOOL hasTimestamp;
@property(retain) NSString * serviceUUID;
@property(retain) NSString * sessionId;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasServiceUUID;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serviceUUID;
- (id)sessionId;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end