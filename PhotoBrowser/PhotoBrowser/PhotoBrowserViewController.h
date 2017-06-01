//
//  PhotoBrowserViewController.h
//  PhotoBrowser
//
//  Created by 林_同 on 2017/5/24.
//  Copyright © 2017年 林_同. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoBrowserViewController : UIViewController

/**
 存储图片的数组
 */
@property (nonatomic, strong) NSArray<UIImage *> *images;

/**
 被点击图片的索引
 */
@property (nonatomic, assign) unsigned int selectedIndex;

/**
 是否等比例缩放
 */
@property (nonatomic, assign) BOOL isOriginal;

@end
