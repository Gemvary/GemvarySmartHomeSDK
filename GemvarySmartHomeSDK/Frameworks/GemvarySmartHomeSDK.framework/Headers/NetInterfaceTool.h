//
//  NetInterfaceTool.h
//  GemvarySmartHomeSDK
//
//  Created by SongMengLong on 2023/3/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 获取UDP组播IP地址工具
@interface NetInterfaceTool : NSObject

+ (NSString *)getIPAddresses;

@end

NS_ASSUME_NONNULL_END
