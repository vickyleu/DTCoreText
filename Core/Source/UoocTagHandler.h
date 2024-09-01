#import "Foundation/Foundation.h"
#import <DTFoundation/DTHTMLParser.h>
#import "DTHTMLElement.h"
#import "DTCSSListStyle.h"

//typedef void (^TagHandler)(DTHTMLElement *currentTag);



@protocol TagHandler <NSObject>
- (void)handleStartTag:(DTHTMLElement *)currentTag;
- (void)handleEndTag:(DTHTMLElement *)currentTag;

@end

@interface TagHandlerImpl : NSObject<TagHandler>

@end

@interface UoocTagHandler : NSObject

- (instancetype)initWithTagName:(NSString *)tagName
                      handler:(id<TagHandler>)handler;

@property (nonatomic, copy) NSString *tagName;
@property (nonatomic, weak) id<TagHandler> handler;

@end




