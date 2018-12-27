//
//  NSObject+YJViperAssembly.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YJViperViewPrivate;
@protocol YJViperPresenterPrivate;
@protocol YJViperInteractorPrivate;
@protocol YJViperWireframePrivate;
@protocol YJViperRouter;

@interface NSObject (YJViperAssembly)

+ (void)assembleViperForView:(id<YJViperViewPrivate>)view
                   presenter:(id<YJViperPresenterPrivate>)presenter
                  interactor:(id<YJViperInteractorPrivate>)interactor
                   wireframe:(id<YJViperWireframePrivate>)wireframe
                      router:(id<YJViperRouter>)router;

@end
