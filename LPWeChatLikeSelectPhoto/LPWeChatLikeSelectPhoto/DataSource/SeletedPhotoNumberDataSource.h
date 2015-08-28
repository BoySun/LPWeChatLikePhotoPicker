//
//  ChoosePhotoDataSource.h
//  CheDingDong
//
//  Created by lipeng on 15/8/20.
//  Copyright (c) 2015年 Riley. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface SeletedPhotoNumberDataSource : NSObject
@property (nonatomic,strong,readwrite) NSNumber *selectedPhotoNum;
@property (nonatomic,assign,readwrite) NSUInteger maxSelectedPhotoNum;

+ (instancetype)shareInstance;
@end
