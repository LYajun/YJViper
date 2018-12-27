//
//  UIViewController+YJViperRouter.m
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "UIViewController+YJViperRouter.h"

@implementation UIViewController (YJViperRouter)
- (BOOL)yj_isAppRootViewController {
    NSAssert([UIApplication sharedApplication].delegate.window.rootViewController, @"Can't find rootViewController");
    return [UIApplication sharedApplication].delegate.window.rootViewController == self;
}

- (BOOL)yj_isRemoving {
    UIViewController *destination = (UIViewController *)self;
    UIViewController *node = destination;
    while (node) {
        if (node.isMovingFromParentViewController ||
            (!node.parentViewController && !node.presentingViewController && ![node yj_isAppRootViewController])) {
            return YES;
        } else if (node.isBeingDismissed) {
            return YES;
        } else {
            node = node.parentViewController;
            continue;
        }
        break;
    }
    return NO;
}
@end
