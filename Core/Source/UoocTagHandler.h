#import "Foundation/Foundation.h"
#import <DTFoundation/DTHTMLParser.h>
#import "DTHTMLElement.h"
#import "DTCSSListStyle.h"

#if TARGET_OS_IPHONE && !TARGET_OS_WATCH

#import <UIKit/UIKit.h>

@protocol TagHandler <NSObject>
- (void)handleStartTag:(nonnull DTHTMLElement *)currentTag;
- (void)handleEndTag:(nonnull DTHTMLElement *)currentTag;

@end


@interface UoocTagHandler : NSObject<TagHandler>

- (instancetype _Nonnull )initWithTagName:(nonnull NSString *)tagName;

@property (nonatomic, copy) NSString * _Nonnull tagName;
@property (nonatomic, weak,readonly) id<TagHandler> _Nullable handler;

@end


#endif






