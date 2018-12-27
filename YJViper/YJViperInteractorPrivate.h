//
//  YJViperInteractorPrivate.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "YJViperInteractor.h"

@protocol YJViperInteractorPrivate <YJViperInteractor>
- (void)setEventHandler:(id)eventHandler;
- (void)setDataSource:(id)dataSource;
@end
