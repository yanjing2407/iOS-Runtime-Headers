/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@class HAPMetadataCharacteristicValue, NSNumber, NSString;

@interface HAPMetadataCharacteristic : NSObject {
    NSString *_chrDescription;
    NSString *_format;
    NSString *_localizationKey;
    NSString *_name;
    NSNumber *_properties;
    NSString *_units;
    NSString *_uuidStr;
    HAPMetadataCharacteristicValue *_valueMetadata;
}

@property(retain) NSString * chrDescription;
@property(retain) NSString * format;
@property(retain) NSString * localizationKey;
@property(retain) NSString * name;
@property(retain) NSNumber * properties;
@property(retain) NSString * units;
@property(retain) NSString * uuidStr;
@property(retain) HAPMetadataCharacteristicValue * valueMetadata;

- (void).cxx_destruct;
- (id)chrDescription;
- (id)description;
- (void)dump;
- (id)format;
- (id)generateDictionary:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 localizationKey:(id)arg4 format:(id)arg5 properties:(id)arg6;
- (id)localizationKey;
- (id)name;
- (id)properties;
- (void)setChrDescription:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setLocalizationKey:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setUnits:(id)arg1;
- (void)setUuidStr:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)units;
- (id)uuidStr;
- (id)valueMetadata;

@end