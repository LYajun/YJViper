//
//  NSObject+YJViperAssembly.m
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "NSObject+YJViperAssembly.h"
#import "YJViperViewPrivate.h"
#import "YJViperPresenterPrivate.h"
#import "YJViperInteractorPrivate.h"
#import "YJViperWireframePrivate.h"
#import "YJViperRouter.h"

@implementation NSObject (YJViperAssembly)

+ (void)assembleViperForView:(id<YJViperViewPrivate>)view
                   presenter:(id<YJViperPresenterPrivate>)presenter
                  interactor:(id<YJViperInteractorPrivate>)interactor
                   wireframe:(id<YJViperWireframePrivate>)wireframe
                      router:(id<YJViperRouter>)router{
    
    NSParameterAssert([view conformsToProtocol:@protocol(YJViperViewPrivate)]);
    NSParameterAssert([presenter conformsToProtocol:@protocol(YJViperPresenterPrivate)]);
    NSParameterAssert([interactor conformsToProtocol:@protocol(YJViperInteractorPrivate)]);
    NSParameterAssert([wireframe conformsToProtocol:@protocol(YJViperWireframePrivate)]);
    NSParameterAssert([router conformsToProtocol:@protocol(YJViperRouter)]);
    
    NSAssert3(interactor.eventHandler == nil, @"Interactor (%@)'s eventHandler (%@) already exists when assemble viper for new eventHandler", interactor, interactor.eventHandler,presenter);
    NSAssert3(interactor.dataSource == nil, @"Interactor (%@)'s dataSource (%@) already exists when assemble viper for new dataSource", interactor, interactor.dataSource,presenter);
    
    interactor.eventHandler = presenter;
    interactor.dataSource = presenter;
    
    NSAssert3(wireframe.view == nil, @"Wireframe (%@)'s view (%@) already exists when assemble viper for new view", wireframe, wireframe.view,view);
    wireframe.view = view;
    wireframe.router = router;
    
    NSAssert3(presenter.interactor == nil, @"Presenter (%@)'s interactor (%@) already exists when assemble viper for new interactor", presenter, presenter.interactor,interactor);
    NSAssert3(presenter.view == nil, @"Presenter (%@)'s view (%@) already exists when assemble viper for new view", presenter, presenter.view,view);
    NSAssert3(presenter.wireframe == nil, @"Presenter (%@)'s wireframe (%@) already exists when assemble viper for new router", presenter, presenter.wireframe,self);
    
    presenter.interactor = interactor;
    presenter.view = view;
    presenter.wireframe = wireframe;
    
    if ([view respondsToSelector:@selector(viewDataSource)] &&
        [view respondsToSelector:@selector(setViewDataSource:)]) {
        NSAssert3(view.viewDataSource == nil, @"View (%@)'s viewDataSource (%@) already exists when assemble viper for new viewDataSource", view, view.viewDataSource,presenter);
        view.viewDataSource = presenter;
    }
    NSAssert3(view.eventHandler == nil, @"View (%@)'s eventHandler (%@) already exists when assemble viper for new eventHandler", view, view.eventHandler,presenter);
    view.eventHandler = presenter;
}

@end
