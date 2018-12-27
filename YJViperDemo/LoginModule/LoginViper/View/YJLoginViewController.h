//
//  YJLoginViewController.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YJLoginViewDelegate.h"
#import "YJLoginViewProtocol.h"
#import "YJViper.h"

@interface YJLoginViewController : UIViewController<YJViperView,YJLoginViewProtocol>
@property (nonatomic, weak) id<YJLoginViewDelegate> delegate;
@property (nonatomic, copy, nullable) NSString *message;
@end
