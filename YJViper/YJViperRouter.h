//
//  YJViperRouter.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//
/*
 由Application提供的具体路由技术，可以简单封装UIKit里的那些跳转方法，也可以用URL Router来执行路由。
 但是一个模块是不需要知道app使用的是什么具体技术的。Router才是真正连接各个模块的地方。
 它也负责寻找对应的目的模块，并且通过Buidler进行依赖注入
*/
#import <UIKit/UIKit.h>

@protocol YJViperRouter <NSObject>

+ (void)pushViewController:(UIViewController *)destination fromViewController:(UIViewController *)source animated:(BOOL)animated;
+ (void)popViewController:(UIViewController *)viewController animated:(BOOL)animated;
+ (void)presentViewController:(UIViewController *)viewControllerToPresent fromViewController:(UIViewController *)source animated:(BOOL)animated completion:(void (^ __nullable)(void))completion;
+ (void)dismissViewController:(UIViewController *)viewController animated:(BOOL)animated completion:(void (^ __nullable)(void))completion;
+ (void)dismissToRootViewControllerFromViewController:(UIViewController *)source;
@end
