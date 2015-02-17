//
//  AxeMode.h
//  AxeMode
//
//  Created by Eloy Durán on 17/02/15.
//  Copyright (c) 2015 SuperAlloy. All rights reserved.
//

#import <AppKit/AppKit.h>

@interface AxeMode : NSObject

+ (instancetype)sharedPlugin;

@property (nonatomic, strong, readonly) NSBundle* bundle;
@end