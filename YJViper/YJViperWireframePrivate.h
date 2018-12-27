//
//  YJViperWireframePrivate.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "YJViperWireframe.h"

@protocol YJViperView;
@protocol YJViperRouter;

@protocol YJViperWireframePrivate <YJViperWireframe>

- (void)setView:(id<YJViperView>)view;
- (id<YJViperRouter>)router;

- (void)setRouter:(id<YJViperRouter>)router;
@end
