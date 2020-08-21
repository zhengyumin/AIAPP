//
//  AppDelegate+AppService.m
//  AIAPP
//
//  Created by zhengyumin on 2017/12/27.
//  Copyright © 2017年 hikvision. All rights reserved.
//

#import "AppDelegate+AppService.h"
#import "AIViewController.h"

@implementation AppDelegate (AppService)

#pragma mark ————— 初始化服务 —————
- (void)initService{
    //注册登录状态监听
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(loginStateChange:)
                                                 name:KNotificationLoginStateChange
                                               object:nil];
    
    //网络状态监听
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(netWorkStateChange:)
                                                 name:KNotificationNetWorkStateChange
                                               object:nil];
}


#pragma mark ————— 初始化window —————
- (void)initWindow{
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    self.window.rootViewController = [[AIViewController alloc] init];
    [[UIButton appearance] setExclusiveTouch:YES];
    //    [[UIButton appearance] setShowsTouchWhenHighlighted:YES];
//    [UIActivityIndicatorView appearanceWhenContainedIn:[MBProgressHUD class], nil].color = KWhiteColor;
    //  if (@available(iOS 11.0, *)){
    //    [[UIScrollView appearance] setContentInsetAdjustmentBehavior:UIScrollViewContentInsetAdjustmentNever];
    //}
}
@end
