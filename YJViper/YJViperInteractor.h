//
//  YJViperInteractor.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//
/*
 Ineractor的职责：
 
 实现和封装各种业务的Use Case，供外部调用
 维护和业务相关的各种状态，比如是否正在编辑笔记
 Interactor可以获取各种Manager和Service，用于组合实现业务逻辑，这些Manager和Service应该是由外部注入的依赖，而不是直接引用具体的类
 通过DataManager维护Model
 监听各种外部的业务事件并处理，必要时将事件发送给eventHandler
 Interactor持有一个由外部注入的eventHandler对象，将需要外部处理的业务事件发送给eventHandler，或者通过eventHandler接口对某些数据操作的过程进行回调
 Interactor持有一个由外部注入的dataSource对象，用于获取View上的数据，以更新Model
 
*/
#import <Foundation/Foundation.h>

@protocol YJViperInteractor <NSObject>
@property (nonatomic, readonly, weak) id dataSource;
@property (nonatomic, readonly, weak) id eventHandler;
@end
