//
//  YJRouter.m
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "YJRouter.h"

@implementation YJRouter
+ (void)pushViewController:(UIViewController *)destination fromViewController:(UIViewController *)source animated:(BOOL)animated{
    NSParameterAssert([destination isKindOfClass:[UIViewController class]]);
    NSParameterAssert(source.navigationController);
    [source.navigationController pushViewController:destination animated:animated];
}
+ (void)popViewController:(UIViewController *)viewController animated:(BOOL)animated{
    NSParameterAssert(viewController.navigationController);
    [viewController.navigationController popViewControllerAnimated:animated];
}
+ (void)presentViewController:(UIViewController *)viewControllerToPresent fromViewController:(UIViewController *)source animated:(BOOL)animated completion:(void (^)(void))completion{
    NSParameterAssert(viewControllerToPresent);
    NSParameterAssert(source);
    [source presentViewController:viewControllerToPresent animated:animated completion:completion];
}
+ (void)dismissViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(void (^)(void))completion{
    NSParameterAssert(viewController);
    [viewController dismissViewControllerAnimated:animated completion:completion];
}
@end
