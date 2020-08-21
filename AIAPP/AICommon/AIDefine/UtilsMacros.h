//
//  UtilsMacros.h
//  AIAPP
//
//  Created by zhengyumin on 2017/12/27.
//  Copyright © 2017年 hikvision. All rights reserved.
//

// 全局工具类宏定义

#ifndef UtilsMacros_h
#define UtilsMacros_h

//数据验证
#define StrValid(f) (f!=nil && [f isKindOfClass:[NSString class]] && ![f isEqualToString:@""])
#define SafeStr(f) (StrValid(f) ? f:@"")
#define HasString(str,key) ([str rangeOfString:key].location!=NSNotFound)

#define ValidStr(f) StrValid(f)
#define ValidDict(f) (f!=nil && [f isKindOfClass:[NSDictionary class]])
#define ValidArray(f) (f!=nil && [f isKindOfClass:[NSArray class]] && [f count]>0)
#define ValidNum(f) (f!=nil && [f isKindOfClass:[NSNumber class]])
#define ValidClass(f,cls) (f!=nil && [f isKindOfClass:[cls class]])
#define ValidData(f) (f!=nil && [f isKindOfClass:[NSData class]])


//判断字符串是否为空
#define IS_EMPTY(str) (str == nil || [str length] == 0)

// 弱引用
#define WS(weakSelf)  __weak __typeof(self) weakSelf = self;
#define TS(strongSelf) __strong typeof(self) strongSelf = self;


//UIImage
#define IMAGE_NAMED(name) [UIImage imageNamed:name]

//拼接字符串
#define NSStringFormat(format,...) [NSString stringWithFormat:format,##__VA_ARGS__]

//发送通知
#define kPostNotification(name,obj) [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj];

#endif /* UtilsMacros_h */
