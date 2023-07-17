//
//  LanNetService.h
//  GemvarySmartHomeSDK
//
//  Created by SongMenglong on 2020/7/21.
//  Copyright © 2020 gemvary. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 局域网的代理方法
@protocol LanNetDelegate <NSObject>
/// 发送的数据
- (void)houmanSendData:(NSString *)sendStr;
/// 返回的数据
- (void)tcpRecvDataCb:(NSString *)recvStr;
/// 状态
- (void)tcpConnectStatusCb:(int)statusStr;

@end

/// OC的TCP封装类
@interface LanNetService : NSObject
/// 设置代理
@property (nonatomic, weak) id<LanNetDelegate> delegate;
/// 初始化方法
- (void)initLanNetService;
/// 当前账号(电话号码/邮箱)
@property (nonatomic, strong) NSString *userID;
/// 连接局域网设备
- (void)connectLan:(NSString *)server_ip server_mac:(NSString *)server_mac;
/// 搜索中控设备
- (void)searchLanNetDevice;
/// 获取设备的连接状态
- (int)getTcpConnectStatus;
/// 断开TCP连接
- (void)tcpDisconnect;
/// 发送udp数据
- (void)sendLanUdpMessage:(NSString *)sendStr;
/// 发送tcp数据
- (void)sendLanTcpMessage:(NSString *)sendStr;

@end

NS_ASSUME_NONNULL_END
