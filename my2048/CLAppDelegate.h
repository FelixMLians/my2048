//
//  CLAppDelegate.h
//  my2048
//
//  Created by apple on 14-6-6.
//  Copyright (c) 2014年 Felix M Lannister. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeiboSDK.h"

@interface CLAppDelegate : UIResponder <UIApplicationDelegate,WeiboSDKDelegate>
{
    NSString* _wbtoken;
}

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) NSString *wbtoken;
@end
