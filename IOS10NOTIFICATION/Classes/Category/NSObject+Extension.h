//
//  NSObject+Extension.h
//  IOS10NOTIFICATION
//
//  Created by 贺嘉炜 on 2016/11/24.
//  Copyright © 2016年 贺嘉炜. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Extension)

- (void)delay:(NSTimeInterval)timeInterval Operation:(void(^)())operation;

@end
