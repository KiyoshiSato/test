//
//  ModelController.h
//  satoTest
//
//  Created by 佐藤 圭 on 2014/01/31.
//  Copyright (c) 2014年 KiyoshiSato. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
