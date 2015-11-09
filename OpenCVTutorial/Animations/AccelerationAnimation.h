//
//  AccelerationAnimation.h
//  AnimationAcceleration
//

#import <QuartzCore/CoreAnimation.h>

@protocol Evaluate;

@interface AccelerationAnimation : CAKeyframeAnimation

+ (id)animationWithKeyPath:(NSString *)keyPath
                startValue:(double)startValue
                  endValue:(double)endValue
          evaluationObject:(NSObject<Evaluate> *)evaluationObject
         interstitialSteps:(NSUInteger)steps;

- (void)calculateKeyFramesWithEvaluationObject:(NSObject<Evaluate> *)evaluationObject
                                    startValue:(double)startValue
                                      endValue:(double)endValue
                             interstitialSteps:(NSUInteger)steps;

@end
