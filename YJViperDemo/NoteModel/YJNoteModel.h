//
//  YJNoteModel.h
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YJNoteModel : NSObject<NSCoding>
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *content;
- (instancetype)initWithUUID:(NSString *)uuid title:(NSString *)title content:(NSString *)content;
- (instancetype)initWithNewNoteForTitle:(NSString *)title content:(NSString *)content;
- (nullable instancetype)initWithCoder:(NSCoder *)aDecoder;

@end
