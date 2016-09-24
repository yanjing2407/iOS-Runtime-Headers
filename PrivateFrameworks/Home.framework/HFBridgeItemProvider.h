/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFBridgeItemProvider : HFItemProvider {
    NSMutableSet * _bridgeItems;
    id /* block */  _filter;
}

@property (nonatomic, retain) NSMutableSet *bridgeItems;
@property (nonatomic, copy) id /* block */ filter;

- (void).cxx_destruct;
- (id)bridgeItems;
- (id /* block */)filter;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setBridgeItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;

@end