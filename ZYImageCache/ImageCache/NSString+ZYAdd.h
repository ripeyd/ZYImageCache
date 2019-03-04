//
//  NSString+ZYAdd.h
//  ZYImageCache
//
//  Created by ZhuYan on 2018/7/6.
//  Copyright © 2018年 ZhuYan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (ZYAdd)
/**
 下载图片的路径
 
 @return MD5加密的图片下载地址
 */
- (NSString *)getDowloadImagePath;
@end
