//
//  ARView.h


#import "CameraCalibration.h"

@interface ARView : UIView

#pragma mark -
#pragma mark Constructors
- (id)initWithSize:(CGSize)size calibration:(struct CameraCalibration)calibration;

#pragma mark -
#pragma mark Gameplay
- (int)selectBestRing:(CGPoint)point;

#pragma mark -
#pragma mark Display Controls
- (void)show;
- (void)hide;

@end
