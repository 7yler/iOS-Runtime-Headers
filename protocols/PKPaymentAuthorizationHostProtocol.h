/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentAuthorizationHostProtocol <NSObject>

@required

- (void)authorizationDidAuthorizePayment:(PKPayment *)arg1;
- (void)authorizationDidFinishWithError:(NSError *)arg1;
- (void)authorizationDidSelectPaymentMethod:(PKPaymentMethod *)arg1;
- (void)authorizationDidSelectShippingAddress:(PKContact *)arg1;
- (void)authorizationDidSelectShippingMethod:(PKShippingMethod *)arg1;
- (void)authorizationWillStart;

@optional

- (void)authorizationDidPresent;

@end
