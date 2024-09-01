#import "Foundation/Foundation.h"
#import <DTFoundation/DTHTMLParser.h>
#import "DTHTMLElement.h"
#import "DTCSSListStyle.h"
#import "DTTextAttachment.h"

@protocol TagHandler <NSObject>
- (void)handleStartTag:(nonnull DTHTMLElement *)currentTag;
- (void)handleEndTag:(nonnull DTHTMLElement *)currentTag;

@end


@interface UoocTagHandler : NSObject<TagHandler>

- (instancetype _Nonnull )initWithTagName:(nonnull NSString *)tagName;

@property (nonatomic, copy) NSString * _Nonnull tagName;
@property (nonatomic, weak,readonly) id<TagHandler> _Nullable handler;

-(nullable DTTextAttachment *)attachment;

@end





