//
//  YJNoteListDataService.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <Foundation/Foundation.h>
@class YJNoteModel;
@protocol YJNoteListDataService <NSObject>
@property (nonatomic, readonly, strong) NSArray<YJNoteModel *> *noteList;
- (void)fetchAllNotesWithCompletion:(void(^)(NSArray *notes))completion;
- (void)storeNote:(YJNoteModel *)note;
- (void)deleteNote:(YJNoteModel *)noteToDelete;
@end
