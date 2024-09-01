//
//  TagRandererView.m
//  DTCoreText
//
//  Created by vicky Leu on 2024/9/2.
//  Copyright © 2024 Drobnik.com. All rights reserved.
//

#import "TagRandererView.h"
@interface TagRandererView()
@property(nonatomic,strong)id<DTTextAttachmentDrawing> drawing;
@end

@implementation TagRandererView
-(instancetype )initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if(self){
        self.backgroundColor = [UIColor clearColor];
    }
    return self;
}
-(instancetype)initFrame:(CGRect) frame withAttachment:(nonnull id<DTTextAttachmentDrawing>)drawing{
	self = [self initWithFrame:frame];
	if(self){
		self.drawing = drawing;
	}
	return self;
}



-(void)drawRect:(CGRect)rect{
	CGContextRef context = UIGraphicsGetCurrentContext(); // 获取当前上下文
	[self.drawing drawInRect:rect context:context];
}

@end
