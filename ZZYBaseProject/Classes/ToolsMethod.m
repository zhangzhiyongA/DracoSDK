//
//  Zzy-App
//
//  Created by ZZY on 2021-11-15
//  Copyright © 2021年 ZZY.
//

#import "ToolsMethod.h"
//#import <sys/utsname.h>

@implementation ToolsMethod





+(BOOL)isSafeAreaInsetsBottomiPhone{
    
    if (@available(iOS 11.0, *)) {
        
        CGFloat safeBottom = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom;
        
        if (safeBottom > 0) {
            return YES;
        }
    }
    return NO;
}


+(BOOL)isSafeAreaInsetsTopiPhone{
    
    if (@available(iOS 11.0, *)) {
        
        CGFloat safeTop = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.top;
        
        if (safeTop >= 44) {
            return YES;
        }
    }
    
    return NO;
}


+(NSString *)appVersionRead {
    
    return [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"];
}


+(CGSize)widthWithText:(NSString*)text font:(CGFloat )font height:(CGFloat)height Width:(CGFloat )width
{

    NSDictionary * dic = [NSDictionary dictionaryWithObjectsAndKeys:[UIFont systemFontOfSize:font],NSFontAttributeName, nil];
    CGSize size = CGSizeMake(width, height);
    
    if (text) {
        
        CGRect rect = [text boundingRectWithSize:size options:NSStringDrawingUsesLineFragmentOrigin attributes:dic context:nil];
        return rect.size;
    }
    return CGSizeMake(0, 0);
}


@end
