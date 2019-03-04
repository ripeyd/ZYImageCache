//
//  ZYViewModel.h
//  ZYImageCache
//
//  Created by ZhuYan on 2018/7/6.
//  Copyright © 2018年 ZhuYan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZYModel.h"
typedef void(^SuccessBlock)(id data);
typedef void(^FailBlock)(id data);

@interface ZYViewModel : NSObject
@property (nonatomic, copy) SuccessBlock successBlock;
@property (nonatomic, copy) FailBlock failBlock;

- (instancetype)initWithBlock:(SuccessBlock)successBlock fail:(FailBlock)failBlock;
@end
