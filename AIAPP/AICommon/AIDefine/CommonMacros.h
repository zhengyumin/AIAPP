//
//  CommonMacros.h
//  AIAPP
//
//  Created by zhengyumin on 2017/12/27.
//  Copyright © 2017年 hikvision. All rights reserved.
//

//全局标记字符串，用于 通知 存储

#ifndef CommonMacros_h
#define CommonMacros_h

// 配置 key定义
#define TEL             @"tel"
#define NICKNAME        @"nickname"
#define PASSWORD        @"password"

#define UID             @"uid"
#define TOKEN           @"token"
#define FIRST_LAUNCH    @"first_launch"
#define AUTO_LOGIN      @"auto_login"
#define POSITION        @"position"


#pragma mark - ——————— 用户相关 ————————
//登录状态改变通知
#define KNotificationLoginStateChange @"loginStateChange"

//自动登录成功
#define KNotificationAutoLoginSuccess @"KNotificationAutoLoginSuccess"

//被踢下线
#define KNotificationOnKick @"KNotificationOnKick"

//用户信息缓存 名称
#define KUserCacheName @"KUserCacheName"

//用户model缓存
#define KUserModelCache @"KUserModelCache"



#pragma mark - ——————— 网络状态相关 ————————

//网络状态变化
#define KNotificationNetWorkStateChange @"KNotificationNetWorkStateChange"

#endif /* CommonMacros_h */
