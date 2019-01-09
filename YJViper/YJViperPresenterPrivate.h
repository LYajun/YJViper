//
//  YJViperPresenterPrivate.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//


#import "YJViperPresenter.h"
#import "YJViperWireframe.h"
#import "YJViperView.h"
#import "YJViperInteractor.h"


@protocol YJViperPresenterPrivate <YJViperPresenter>

- (id<YJViperWireframe>)wireframe;
- (void)setWireframe:(id<YJViperWireframe>)wireframe;

- (void)setView:(id<YJViperView>)view;

- (id<YJViperInteractor>)interactor;
- (void)setInteractor:(id<YJViperInteractor>)interactor;
@end
