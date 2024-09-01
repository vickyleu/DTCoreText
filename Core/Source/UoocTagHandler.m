#import <DTFoundation/DTHTMLParser.h>
#import "UoocTagHandler.h"

@implementation UoocTagHandler

- (instancetype)initWithTagName:(NSString *)tagName
                        handler:(id<TagHandler>)handler {
    self = [super init];
    if (self) {
        _tagName = [tagName copy];
        _handler = handler;
    }
    return self;
}

@end


@implementation TagHandlerImpl

- (void)handleStartTag:(DTHTMLElement *)currentTag {
    // 实现开始标签的处理逻辑
//    NSLog(@"Started handling tag: %@", currentTag.tagName);
}

- (void)handleEndTag:(DTHTMLElement *)currentTag {
    // 实现结束标签的处理逻辑
//    NSLog(@"Ended handling tag: %@", currentTag.tagName);
}

@end
