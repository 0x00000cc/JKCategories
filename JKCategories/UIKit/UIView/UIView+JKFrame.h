//
//  UIView+JKFrame.h
//  JKCategories (https://github.com/shaojiankui/JKCategories)
//
//  Created by Jakey on 14/12/15.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JKFrame)
// shortcuts for frame properties
@property (nonatomic, assign) CGPoint jk_origin;
@property (nonatomic, assign) CGSize jk_size;

// shortcuts for positions
@property (nonatomic) CGFloat jk_centerX;
@property (nonatomic) CGFloat jk_centerY;


@property (nonatomic) CGFloat jk_top;
@property (nonatomic) CGFloat jk_bottom;
@property (nonatomic) CGFloat jk_right;
@property (nonatomic) CGFloat jk_left;

@property (nonatomic) CGFloat jk_width;
@property (nonatomic) CGFloat jk_height;

/// 控件坐标自身中心点
@property (assign, nonatomic, readonly) CGPoint n_middle ;
/// 控件坐标自身中心点
@property (assign, nonatomic, readonly) CGFloat n_middleX ;
/// 控件坐标自身中心点
@property (assign, nonatomic, readonly) CGFloat n_middleY ;

@end
