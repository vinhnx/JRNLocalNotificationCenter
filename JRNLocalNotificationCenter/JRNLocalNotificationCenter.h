//
//  JRNLocalNotificationCenter.h
//  DemoApp
//
//  Created by jarinosuke on 7/27/13.
//  Copyright (c) 2013 jarinosuke. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const JRNLocalNotificationHandlingKeyName;

@interface JRNLocalNotificationCenter : NSObject
+ (JRNLocalNotificationCenter *)defaultCenter;
- (NSArray *)localNotifications;
- (void)cancelAllLocalNotifications;
- (void)cancelLocalNotification:(UILocalNotification *)localNotification;
- (void)cancelLocalNotificationForKey:(NSString *)key;

- (void)postNotificationOnNowForKey:(NSString *)key
                          alertBody:(NSString *)alertBody
                        alertAction:(NSString *)alertAction
                          soundName:(NSString *)soundName
                        launchImage:(NSString *)launchImage
                           userInfo:(NSDictionary *)userInfo
                         badgeCount:(NSUInteger)badgeCount;

- (void)postNotificationOn:(NSDate *)fireDate
                    forKey:(NSString *)key
                 alertBody:(NSString *)alertBody
               alertAction:(NSString *)alertAction
                 soundName:(NSString *)soundName
               launchImage:(NSString *)launchImage
                  userInfo:(NSDictionary *)userInfo
                badgeCount:(NSUInteger)badgeCount;
@end