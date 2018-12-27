//
//  YJViperViewEventHandler.h
//  VIPERDemo
//
//  Created by 刘亚军 on 2018/12/18.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YJViperViewEventHandler <NSObject>

@optional
- (void)handleViewReady;
- (void)handleViewRemoved;
- (void)handleViewWillAppear:(BOOL)animated;
- (void)handleViewDidAppear:(BOOL)animated;
- (void)handleViewWillDisappear:(BOOL)animated;
- (void)handleViewDidDisappear:(BOOL)animated;

@end
