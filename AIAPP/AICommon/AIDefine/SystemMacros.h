//
//  SystemMacros.h
//  AIAPP
//
//  Created by zhengyumin on 2017/12/27.
//  Copyright © 2017年 hikvision. All rights reserved.
//

//系统相关宏定义

/**
 iOS设备宽高比
 4\4s {320, 480}  5s\5c {320, 568}  6 {375, 667}    6+ {414, 736}    iphoneX{375, 812}
 0.66           0.5634             0.562218          0.5625          0.4618
 */

#ifndef SystemMacros_h
#define SystemMacros_h

//获取系统对象
#define kApplication        [UIApplication sharedApplication]
#define kAppWindow          [UIApplication sharedApplication].delegate.window
#define kAppDelegate        [AppDelegate shareAppDelegate]
#define kRootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]

//底部按钮高度
#define TABBAR_HEIGHT 49

//导航栏高度
#define NAVBAR_HEIGHT 64

//包括状态栏的屏幕尺寸
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

//iPhone6尺寸为基准做适配
#define IPHONE6_SCREEN_WITDTH = 375;
#define IPHONE6_SCREEN_HEIGHT = 667;

//根据ip6的屏幕来拉伸
#define FitScale  SCREEN_WIDTH/IPHONE6_SCREEN_WITDTH
#define FITW(obj) ((obj) * [SCREEN_WIDTH/IPHONE6_SCREEN_WITDTH])
#define FITH(obj) ((obj) * [SCREEN_HEIGHT/IPHONE6_SCREEN_HEIGHT])

//获取当前系统的版本号
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]

//判断是否版本超过8.0
#define IOS8 ([[UIDevice currentDevice].systemVersion doubleValue]>=8.0)
#define IOS10 ([[UIDevice currentDevice].systemVersion doubleValue]>=10.0)

//获取当前语言
#define CurrentLanguage [[NSLocale preferredLanguages] objectAtIndex:0]

//DEBUG  模式下打印日志,当前行
#ifdef DEBUG
#define XCODE_COLORS_ESCAPE  @"\033["
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define LogE(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg255,0,0;" @"\n[文件名:%s]\n" @"[函数名:%s]\n" @"[行号:%d]\n" @"%@" XCODE_COLORS_RESET), __FILE__,__FUNCTION__,__LINE__,frmt,##__VA_ARGS__)
#define LogW(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg250,207,12;" @"\n[文件名:%s]\n" @"[函数名:%s]\n" @"[行号:%d]\n" @"%@" XCODE_COLORS_RESET), __FILE__,__FUNCTION__,__LINE__,frmt,##__VA_ARGS__)
#define LogInfo(frmt, ...) NSLog((XCODE_COLORS_ESCAPE @"fg76,184,73;" @"\n[文件名:%s]\n" @"[函数名:%s]\n" @"[行号:%d]\n" @"%@" XCODE_COLORS_RESET), __FILE__,__FUNCTION__,__LINE__,frmt,##__VA_ARGS__)
#else
#define DLog(...)
#define LogE(...)
#define LogW(...)
#define LogInfo(...)
#endif

#endif /* SystemMacros_h */
