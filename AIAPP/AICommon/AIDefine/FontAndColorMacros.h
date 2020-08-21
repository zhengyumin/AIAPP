//
//  FontAndColorMacros.h
//  AIAPP
//
//  Created by zhengyumin on 2017/12/27.
//  Copyright © 2017年 hikvision. All rights reserved.
//

//字体大小和颜色配置

#ifndef FontAndColorMacros_h
#define FontAndColorMacros_h

//获取RGB实现
#define RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]

#define HexRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define HexRGBAlpha(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]


#pragma mark -  颜色区

//背景
#define CBGPageColor                       HexRGB(0xF1F1F1)
#define CBGPageWhiteColor                  HexRGB(0xFFFFFF)
#define CBGPop                             HexRGB(0x514F51)
#define CBGAlertColor                      HexRGBAlpha(0X000000,0.6)

//文本
#define CTextGray                          HexRGB(0X747474)
#define CTextLightGray                     HexRGB(0xA4A4A4)
#define CTextDarkGray                      HexRGB(0X36363D)
#define CTextWhite                         HexRGB(0xFFFFFF)
#define CTextRed                           HexRGB(0xCD6456)
#define CTextLeftTitle                     HexRGB(0x666666)
#define CTextSubTitle                      HexRGB(0xA4A4A4)

//线条
#define CLineGray                          HexRGB(0xE2E2E0)
#define CLineGrayF1                        HexRGB(0xF1F1F1)
#define CLineCCCCCC                        HexRGB(0xCCCCCC)

//导航条
#define CNavBgColor                        HexRGB(0xFFFFFF)
#define CNavRedBgColor                     HexRGB(0xB7504C)
#define CNavTitleTextColor                 HexRGB(0x36363D)
#define CNavTitleWhiteTextColor            HexRGB(0xFFFFFF)
#define CNavRightBtnTextColor              HexRGB(0x36363D)

#pragma mark -  字体区

//字体样式
#define FChineseFont(obj)		[UIFont fontWithName:@"HY QiHei45" size:obj]
#define FEnglishFont(obj)		[UIFont fontWithName:@"Helvetica Regular" size:obj]

#define FChineseFontScale(obj)		[UIFont fontWithName:@"HY QiHei45" size:obj * FitScale]
#define FEnglishFontScale(obj)		[UIFont fontWithName:@"Helvetica Regular" size:obj * FitScale]

//字体大小
#define FONT(obj) [UIFont systemFontOfSize:obj]

#pragma mark -  间距区

//默认间距
#define KNormalSpace 12.0f

#endif /* FontAndColorMacros_h */
