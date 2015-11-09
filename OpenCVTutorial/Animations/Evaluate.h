//
//  AccelerationAnimation.h
//  AnimationAcceleration
//
//

#pragma mark -
#pragma mark Protocol Declaration
//
// Evaluate Protocol
//
@protocol Evaluate <NSObject>

- (double)evaluateAt:(double)position;

@end

#pragma mark - 
#pragma mark Sample Evaluators
//
// BezierEvaluator
// 
@interface BezierEvaluator : NSObject <Evaluate>
{
	double firstControlPoint;
	double secondControlPoint;
}

- (id)initWithFirst:(double)newFirst second:(double)newSecond;

@end

//
// ExponentialDecayEvaluator
//
@interface ExponentialDecayEvaluator : NSObject <Evaluate>
{
	double coeff;
	double offset;
	double scale;
}

- (id)initWithCoefficient:(double)newCoefficient;

@end

//
// SecondOrderResponseEvaluator
//
@interface SecondOrderResponseEvaluator : NSObject <Evaluate>
{
	double omega;
	double zeta;
}

- (id)initWithOmega:(double)newOmega zeta:(double)newZeta;

@end

//
// ReverseQuadraticEvaluator
//
@interface ReverseQuadraticEvaluator : NSObject <Evaluate>
{
    double _a;
    double _b;
}

- (id)initWithA:(double)a b:(double)b;

@end