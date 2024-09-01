#import <DTFoundation/DTHTMLParser.h>
#import "UoocTagHandler.h"

@implementation UoocTagHandler

- (instancetype  _Nonnull)initWithTagName:(nonnull DTHTMLElement *)tagName{
    self = [super init];
    if (self) {
        _tagName = [tagName copy];
    }
    return self;
}

-(id<TagHandler>)handler{
    return self;
}

-(DTTextAttachment*)attachment{
    return nil;
}

@end
