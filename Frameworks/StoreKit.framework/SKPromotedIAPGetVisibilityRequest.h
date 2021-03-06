/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPromotedIAPGetVisibilityRequest : SKRequest {
    NSString * _bundleId;
    id /* block */  _completionHandler;
    NSString * _productId;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *productId;

- (void).cxx_destruct;
- (void)_handleReply:(id)arg1;
- (void)_start;
- (id)bundleId;
- (id /* block */)completionHandler;
- (id)initWithProductId:(id)arg1 bundleId:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithProductId:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)productId;
- (void)setBundleId:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setProductId:(id)arg1;

@end
