//
//  YJViperViewPrivate.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//


#import "YJViperView.h"
#import "YJViperViewEventHandler.h"

@protocol YJViperViewPrivate <YJViperView>

- (id<YJViperViewEventHandler>)eventHandler;
- (void)setEventHandler:(id<YJViperViewEventHandler>)eventHandler;

@optional
- (id)viewDataSource;
- (void)setViewDataSource:(id)viewDataSource;
- (void)setRouteSource:(UIViewController *)routeSource;
@end
