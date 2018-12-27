//
//  YJNoteListInteractor.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YJViper.h"
#import "YJNoteListInteractorInput.h"
#import "YJNoteListDataService.h"

@interface YJNoteListInteractor : NSObject<YJViperInteractor, YJNoteListInteractorInput>
@property (nonatomic, weak) id dataSource;
@property (nonatomic, weak) id eventHandler;

- (void)loadAllNotes;
- (instancetype)initWithNoteListDataService:(id<YJNoteListDataService>)service;

@end
