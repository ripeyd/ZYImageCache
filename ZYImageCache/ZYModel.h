//
//  ZYModel.h
//  ZYImageCache
//
//  Created by ZhuYan on 2018/7/6.
//  Copyright © 2018年 ZhuYan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ZYModel : NSObject
@property (nonatomic, copy) NSString  *imageUrl;
@property (nonatomic, copy) NSString  *title;
@property (nonatomic, copy) NSString  *money;
// 缓存下载的图片
@property (nonatomic, strong) UIImage *image;
@end
