/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {
    unsigned int  _bytesIn;
    unsigned int  _bytesOut;
    struct { 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
    }  _has;
}

@property (nonatomic) unsigned int bytesIn;
@property (nonatomic) unsigned int bytesOut;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;

- (unsigned int)bytesIn;
- (unsigned int)bytesOut;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBytesIn;
- (BOOL)hasBytesOut;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBytesIn:(unsigned int)arg1;
- (void)setBytesOut:(unsigned int)arg1;
- (void)setHasBytesIn:(BOOL)arg1;
- (void)setHasBytesOut:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end