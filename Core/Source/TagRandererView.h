//
//  TagRandererView.h
//  DTCoreText
//
//  Created by vicky Leu on 2024/9/2.
//  Copyright © 2024 Drobnik.com. All rights reserved.
//


#if TARGET_OS_IPHONE

#import "DTTextAttachment.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TagRandererView : UIView
-(instancetype)initFrame:(CGRect) frame withAttachment:(nonnull id<DTTextAttachmentDrawing>)drawing;
@end

NS_ASSUME_NONNULL_END

#endif


