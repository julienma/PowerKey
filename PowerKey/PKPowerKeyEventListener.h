//
//  PKPowerKeyEventListener.h
//  PowerKey
//
//  Created by Peter Kamb on 8/15/13.
//  Copyright (c) 2013 Peter Kamb. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PKPowerKeyEventListener : NSObject

+ (PKPowerKeyEventListener *)sharedEventListener;
- (void)monitorPowerKey;

@end
