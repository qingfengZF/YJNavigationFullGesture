//
//  YJInteractiveTransition.h
//  自定义转场动画
//
//  Created by yangjie on 16/11/5.
//  Copyright © 2016年 yj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface YJInteractiveTransition : NSObject<UINavigationControllerDelegate>

// 初始化方法
- (instancetype)initWithViewController:(UIViewController*)viewController;


/** pop返回比例0.0~1.0,默认为0.5 */
@property (nonatomic,assign)CGFloat popProgross;

// 全屏手势处理方法
- (void)handlePopGesture:(UIPanGestureRecognizer*)popGesture;

- (UIPercentDrivenInteractiveTransition*)popInteractiveTrasition;



@end
