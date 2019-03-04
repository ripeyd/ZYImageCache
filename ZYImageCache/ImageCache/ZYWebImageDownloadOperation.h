//
//  ZYWebImageDownloadOperation.h
//  ZYImageCache
//
//  Created by ZhuYan on 2018/7/7.
//  Copyright © 2018年 ZhuYan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^KCCompleteHandle)(NSData *imageData,NSString *kc_urlString);

@interface ZYWebImageDownloadOperation : NSOperation

@property (nonatomic, assign) NSInteger kc_maxConcurrentOperationCount;

- (instancetype)initWithDownloadImageUrl:(NSString *)imageUrlString completeHandle:(KCCompleteHandle)completeHandle title:(NSString *)title;
@end
