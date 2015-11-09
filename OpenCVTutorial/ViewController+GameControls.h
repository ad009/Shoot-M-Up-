//
//  ViewController+GameControls.h


#import "ViewController.h"

@interface ViewController (GameControls)

#pragma mark -
#pragma mark Game Controls
- (void)loadGameControls;

#pragma mark -
#pragma mark Game Play
- (NSInteger)selectRandomRing;
- (void)showFloatingScore:(NSInteger)points;
- (void)showExplosion;

@end
