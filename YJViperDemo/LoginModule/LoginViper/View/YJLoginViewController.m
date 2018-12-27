//
//  YJLoginViewController.m
//  YJViperDemo
//
//  Created by 刘亚军 on 2018/12/24.
//  Copyright © 2018年 刘亚军. All rights reserved.
//

#import "YJLoginViewController.h"
#import "YJLoginViewEventHandler.h"


@interface YJLoginViewController ()<YJViperViewPrivate>
@property (nonatomic, assign) BOOL appeared;
@property (nonatomic, strong) id<YJLoginViewEventHandler> eventHandler;
@property (nonatomic, strong) id viewDataSource;
@property (weak, nonatomic) IBOutlet UITextField *accountTextField;
@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@end

@implementation YJLoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    if (self.message) {
        self.messageLabel.text = self.message;
    }
}
- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    if (self.appeared == NO) {
        NSAssert([self.eventHandler conformsToProtocol:@protocol(YJLoginViewEventHandler)], nil);
        if ([self.eventHandler respondsToSelector:@selector(handleViewReady)]) {
            [self.eventHandler handleViewReady];
        }
        self.appeared = YES;
    }
    if ([self.eventHandler respondsToSelector:@selector(handleViewWillAppear:)]) {
        [self.eventHandler handleViewWillAppear:animated];
    };
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    if ([self.eventHandler respondsToSelector:@selector(handleViewDidAppear:)]) {
        [self.eventHandler handleViewDidAppear:animated];
    }
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    if ([self.eventHandler respondsToSelector:@selector(handleViewWillDisappear:)]) {
        [self.eventHandler handleViewWillDisappear:animated];
    }
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    if ([self.eventHandler respondsToSelector:@selector(handleViewDidDisappear:)]) {
        [self.eventHandler handleViewDidDisappear:animated];
    }
    if (self.yj_isRemoving == YES) {
        if ([self.eventHandler respondsToSelector:@selector(handleViewRemoved)]) {
            [self.eventHandler handleViewRemoved];
        }
    }
}

- (IBAction)startLogin:(id)sender {
    [self.eventHandler didTouchLoginButton];
}

#pragma mark YJViperView
- (UIViewController *)routeSource{
    return self;
}

#pragma mark YJLoginViewProtocol
- (nullable NSString *)account {
    return self.accountTextField.text;
}

- (nullable NSString *)password {
    return self.passwordTextField.text;
}
- (void)setMessage:(NSString *)message{
    _message = message;
     self.messageLabel.text = message;
}
@end
