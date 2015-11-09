//
//  UIView+Animations.h
//  OpenCVTutorial
//


typedef enum {
    kAnimationDirectionFromTop = 0,
    kAnimationDirectionFromBottom
} kAnimationDirection;

@interface UIView (Animations)

- (void)slideIn:(kAnimationDirection)fromDirection  completion:(void (^)(void))completion;
- (void)slideOut:(kAnimationDirection)fromDirection completion:(void (^)(void))completion;

- (void)popIn:(void (^)(void))completion;
- (void)popOut:(void (^)(void))completion;

@end