//
//  YJLoginViewProtocol.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YJLoginViewDelegate.h"

@protocol YJLoginViewProtocol <NSObject>
@property (nonatomic, weak) id<YJLoginViewDelegate> delegate;
@property (nonatomic, copy, nullable) NSString *message;
- (nullable NSString *)account;
- (nullable NSString *)password;
@end
