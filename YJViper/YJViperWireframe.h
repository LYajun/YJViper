//
//  YJViperWireframe.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//
/*
 Wireframe的职责：
 
 用于表达从一个Module到另一个Module的过程。虽然也是扮演者执行路由的角色，但是其实它和Router是有区别的。
 Wireframe和storyboard中连接好的一个个segue类似，负责提供一系列具体的路由用例，这个用例里已经配置好了源界面和目的界面的一些依赖，包括转场动画、模块间传参等。Wireframe的接口是提供给模块内部使用的，它通过调用Router来执行真正的路由操作。
 
*/
#import <Foundation/Foundation.h>
#import "YJViperView.h"

@protocol YJViperWireframe <NSObject>
@property (nonatomic, readonly, weak) id<YJViperView> view;
@end
