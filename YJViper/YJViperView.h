//
//  YJViperView.h
//  VIPERDemo
//
//  Created by 刘亚军 on 2018/12/18.
//  Copyright © 2018年 刘亚军. All rights reserved.
//
/*
 View可以是一个UIView + UIViewController，也可以只是一个custom UIView，也可以是一个自定义的用于管理UIView的Manager，只要它实现了View的接口就可以
 
 View层的职责：
 展示界面，组合各种UIView，并在UIViewController内管理各种控件的布局、更新
 View对外暴露各种用于更新UI的接口，而自己不主动更新UI
 View持有一个由外部注入的eventHandler对象，将View层的事件发送给eventHandler
 View持有一个由外部注入的viewDataSource对象，在View的渲染过程中，会从viewDataSource获取一些用于展示的数据，viewDataSource的接口命名应该尽量和具体业务无关
 View向Presenter提供routeSource，也就是用于界面跳转的源界面

 */
#import <UIKit/UIKit.h>

@protocol YJViperViewEventHandler;

@protocol YJViperView <NSObject>

- (nullable UIViewController *)routeSource;
@property (nonatomic, readonly, strong) id<YJViperViewEventHandler> eventHandler;

@optional
@property (nonatomic, readonly, strong) id viewDataSource;

@end
