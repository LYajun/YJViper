//
//  UIApplication+YJViperRouter.m
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "UIApplication+YJViperRouter.h"
#import "YJRouter.h"

@implementation UIApplication (YJViperRouter)
- (YJRouter *)yj_router{
    return [YJRouter new];
}
@end
