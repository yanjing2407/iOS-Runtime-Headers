/* Generated by RuntimeBrowser.
 */

@protocol NUInterstitialAdManagerDelegate <NSObject>

@required

- (void)interstitialAdManager:(NUInterstitialAdManager *)arg1 didLoadInterstitialPage:(id <NUPage>)arg2;
- (void)interstitialAdManager:(NUInterstitialAdManager *)arg1 didUnloadInterstitialPage:(id <NUPage>)arg2;
- (<NUPage> *)interstitialAdManager:(NUInterstitialAdManager *)arg1 pageAfterPage:(id <NUPage>)arg2;

@end
