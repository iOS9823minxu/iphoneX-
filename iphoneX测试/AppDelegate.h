//
//  AppDelegate.h
//  iphoneX测试
//
//  Created by yufu on 2018/1/5.
//  Copyright © 2018年 yufu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;
@end

