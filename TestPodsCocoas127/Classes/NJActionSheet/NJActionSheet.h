//
//  NJActionSheet.h
//  RMMotor
//
//  Created by NinJa on 2020/3/5.
//  Copyright © 2020 lunz. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NJActionSheet : UIView

+ (void)showWithTitle:(NSString * _Nullable )title
    cancelButtonTitle:(NSString *)cancelButtonTitle
destructiveButtonTitle:(  NSString * _Nullable )destructiveButtonTitle
    otherButtonTitles:(NSArray *)otherButtonTitles
        selectedBlock:(void (^)(NSInteger index))selectedBlock;

@end

NS_ASSUME_NONNULL_END
