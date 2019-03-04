//
//  UIImageView+ZYWebCache.h
//  ZYImageCache
//
//  Created by ZhuYan on 2018/7/10.
//  Copyright © 2018年 ZhuYan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (ZYWebCache)
/**
 给imageView 设置图片

 @param urlString 图片地址
 */
- (void)kc_setImageWithUrlString:(NSString *)urlString title:(NSString *)title indexPath:(NSIndexPath *)indexPath;

// 通过关联属性创建记录对象
@property (nonatomic, copy) NSString *kc_urlString;

// 记录开发
@property (nonatomic, copy) NSString *kc_title;

@end
