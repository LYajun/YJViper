//
//  YJLoginViewDelegate.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YJLoginViewDelegate <NSObject>
@optional
- (void)loginViewController:(UIViewController *)loginViewController didLoginWithAccount:(NSString *)account;
@end
