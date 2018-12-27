//
//  UIApplication+YJViperRouter.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <UIKit/UIKit.h>

@class YJRouter;
@interface UIApplication (YJViperRouter)
- (YJRouter *)yj_router;
@end
