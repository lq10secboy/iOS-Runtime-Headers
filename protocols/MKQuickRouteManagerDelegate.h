/* Generated by RuntimeBrowser.
 */

@protocol MKQuickRouteManagerDelegate <NSObject>

@required

- (BOOL)quickRouteShouldIncludeTransit;
- (BOOL)quickRouteShouldOnlyUseAutomobile;

@optional

- (unsigned int)preferredDirectionsTypeForQuickRoute;

@end
