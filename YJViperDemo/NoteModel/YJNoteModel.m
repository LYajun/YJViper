//
//  YJNoteModel.m
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "YJNoteModel.h"
@interface YJNoteModel ()
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@end
@implementation YJNoteModel
- (instancetype)initWithUUID:(NSString *)uuid title:(NSString *)title content:(NSString *)content {
    NSParameterAssert(uuid.length > 0);
    NSParameterAssert(title);
    NSParameterAssert(content);
    if (self = [super init]) {
        _uuid = uuid;
        _title = title;
        _content = content;
    }
    return self;
}

- (instancetype)initWithNewNoteForTitle:(NSString *)title content:(NSString *)content {
    return [self initWithUUID:[NSUUID UUID].UUIDString title:title content:content];
}

- (void)encodeWithCoder:(NSCoder *)aCoder {
    [aCoder encodeObject:self.uuid forKey:@"uuid"];
    [aCoder encodeObject:self.title forKey:@"title"];
    [aCoder encodeObject:self.content forKey:@"content"];
}

- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder {
    self.uuid = [aDecoder decodeObjectForKey:@"uuid"];
    self.title = [aDecoder decodeObjectForKey:@"title"];
    self.content = [aDecoder decodeObjectForKey:@"content"];
    return self;
}

@end
