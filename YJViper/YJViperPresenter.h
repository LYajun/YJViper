//
//  YJViperPresenter.h
//  VIPERDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//
/*
 Presenter由View持有，它的职责有：
 接收并处理来自View的事件
 维护和View相关的各种状态和配置，比如界面是否使用夜间模式等
 调用Interactor提供的Use Case执行业务逻辑
 向Interactor提供View中的数据，让Interactor生成需要的Model
 接收并处理来自Interactor的业务事件回调事件
 通知View进行更新操作
 通过Wireframe跳转到其他View

 */


#import "YJViperViewEventHandler.h"

@protocol YJViperView;
@protocol YJViperPresenter <YJViperViewEventHandler>
@property (nonatomic, readonly, weak) id<YJViperView> view;
@end
