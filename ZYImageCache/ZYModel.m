//
//  ZYModel.m
//  ZYImageCache
//
//  Created by ZhuYan on 2018/7/6.
//  Copyright © 2018年 ZhuYan. All rights reserved.
//

#import "ZYModel.h"

@implementation ZYModel
- (NSString *)description{
    return [NSString stringWithFormat:@"%@ 售价 : %@",self.title,self.money];
}
@end
