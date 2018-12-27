//
//  YJLoginBuilder.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YJViper.h"
#import "YJLoginViewDelegate.h"

@interface YJLoginBuilder : NSObject
+ (UIViewController *)viewWithMessage:(NSString *)message
                             delegate:(id<YJLoginViewDelegate>)delegate
                               router:(id<YJViperRouter>)router;
@end
