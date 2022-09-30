//
//  Zzy-App
//
//  Created by ZZY on 2021-11-15
//  Copyright © 2021年 ZZY.
//

#import <Foundation/Foundation.h>

@interface ToolsMethod : NSObject




+(BOOL)isSafeAreaInsetsBottomiPhone;


+(BOOL)isSafeAreaInsetsTopiPhone;


+(NSString *)appVersionRead;


+(CGSize)widthWithText:(NSString*)text font:(CGFloat )font height:(CGFloat)height Width:(CGFloat )width;


@end
