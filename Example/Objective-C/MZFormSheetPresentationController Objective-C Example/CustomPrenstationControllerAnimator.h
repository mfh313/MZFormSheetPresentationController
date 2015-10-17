//
//  CustomPrenstationControllerAnimator.h
//  MZFormSheetPresentationController Objective-C Example
//
//  Created by Michal Zaborowski on 17.10.2015.
//  Copyright © 2015 Michal Zaborowski. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;
#import "MZFormSheetPresentationControllerAnimatorProtocol.h"

@interface CustomPrenstationControllerAnimator : NSObject <MZFormSheetPresentationControllerAnimatorProtocol>
@property (nonatomic, assign) CGFloat duration;
@property (nonatomic, assign, getter=isPresenting) BOOL presenting;
@property (nonatomic, readonly) UIView *transitionContextContainerView;
@end