//
//  YJLoginViewEventHandler.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "YJViperViewEventHandler.h"


@protocol YJLoginViewEventHandler <YJViperViewEventHandler>
- (void)didTouchLoginButton;
@end
