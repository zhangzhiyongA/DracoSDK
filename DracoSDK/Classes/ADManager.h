//
//  AdManager.h
//  NovelCool
//
//  Created by ghy on 2018/8/30.
//  Copyright © 2018年 左右科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SmaatoSDKCore/SmaatoSDKCore.h>
#import <SmaatoSDKNative/SmaatoSDKNative.h>
#import <MoPub.h>

typedef void (^AdResult)(UIView * adView);

typedef void (^VideoAdResult)(BOOL complete);

@interface AdManager : NSObject

//  实例
+(AdManager * )shareInstanceAdManager;

//  广告平台初始化
-(void)AdPlatformInitialization;


//  全屏广告
-(void)requestInterstitialAd;
-(void)showInterstitialAdWithController:(UIViewController *)currentController;

//  播放激励视频
-(void)requestGooleVideoAd;
-(void)showGooleVideoAdWithController:(UIViewController * )currentController wayBlock:(VideoAdResult)videoAdResultData;

//  广告点击记录
-(void)adClickEventNumberRecord:(NSString *)adId;

//  广告点击次数 显示判断
-(BOOL)adClicksNumberShowJudgment;
//  广告点击次数记录移除
-(void)adClickNmuberRecordDayRemoval;


#pragma mark - 原生广告方法 -
/// 获取广告方法
/// @param nativeType 类型
-(UIView *)getMopubNativeAdWithType:(NativeType )nativeType;

/// 原生广告加载
/// @param nativeType 加载类型
-(void)loadingMopubNativeAdWithType:(NativeType )nativeType;
    



@end
