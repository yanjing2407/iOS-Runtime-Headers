/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLVBOLoader : TSCH3DResourceLoader {
    unsigned int  mType;
}

+ (id)loaderWithType:(unsigned int)arg1;

- (bool)activateResource:(id)arg1 insideSession:(id)arg2;
- (void)bindHandle:(id)arg1 config:(void*)arg2;
- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;
- (id)generateHandleWithConfig:(void*)arg1;
- (unsigned long long)hash;
- (id)initWithType:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (void)loadSingleValueInBuffer:(id)arg1;
- (void)setClientState:(const struct DataBufferInfo { int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg1;
- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4;
- (unsigned int)usageOfResource:(id)arg1;

@end
