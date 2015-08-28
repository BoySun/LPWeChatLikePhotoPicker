//
//  ShowFullScreenPhotoCell.h
//  CheDingDong
//
//  Created by lipeng on 15/8/19.
//  Copyright (c) 2015年 Riley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LPShowFullScreenPhotoCell : UICollectionViewCell
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) UIScrollView *scrollView;
-(void)configureCellWithImage:(UIImage*)image;
@end
