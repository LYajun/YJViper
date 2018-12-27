//
//  YJNoteListInteractor.m
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "YJNoteListInteractor.h"
#import "YJNoteModel.h"

@interface YJNoteListInteractor () <YJViperInteractorPrivate>
@property (nonatomic, strong) id<YJNoteListDataService> noteListDataService;
@end
@implementation YJNoteListInteractor
- (instancetype)initWithNoteListDataService:(id<YJNoteListDataService>)service{
    if (self = [super init]) {
        _noteListDataService = service;
    }
    return self;
}
- (NSArray<YJNoteModel *> *)noteList {
    return self.noteListDataService.noteList;
}

- (void)loadAllNotes {
    [self.noteListDataService fetchAllNotesWithCompletion:^(NSArray *notes) {
        
    }];
}

- (NSInteger)noteCount {
    return self.noteList.count;
}
- (NSString *)titleForNoteAtIndex:(NSUInteger)idx {
    if (self.noteList.count - 1 < idx) {
        return nil;
    }
    return [[self.noteList objectAtIndex:idx] title];
}

- (NSString *)contentForNoteAtIndex:(NSUInteger)idx {
    if (self.noteList.count - 1 < idx) {
        return nil;
    }
    return [[self.noteList objectAtIndex:idx] content];
}

- (YJNoteModel *)noteAtIndex:(NSUInteger)idx {
    if (self.noteList.count - 1 < idx) {
        return nil;
    }
    return [self.noteList objectAtIndex:idx];
}

- (NSString *)noteUUIDAtIndex:(NSUInteger)idx {
    if (self.noteList.count - 1 < idx) {
        return nil;
    }
    return [[self.noteList objectAtIndex:idx] uuid];
}

- (NSString *)noteTitleAtIndex:(NSUInteger)idx {
    if (self.noteList.count - 1 < idx) {
        return nil;
    }
    return [[self.noteList objectAtIndex:idx] title];
}

- (NSString *)noteContentAtIndex:(NSUInteger)idx {
    if (self.noteList.count - 1 < idx) {
        return nil;
    }
    return [[self.noteList objectAtIndex:idx] content];
}

- (void)deleteNoteAtIndex:(NSUInteger)idx {
    if (self.noteList.count - 1 < idx) {
        return;
    }
    YJNoteModel *note = [self noteAtIndex:idx];
    [self.noteListDataService deleteNote:note];
}
@end
