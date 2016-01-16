//
//  SA_Bot.h

#import <Foundation/Foundation.h>

@protocol SA_BotDelegate;

/*********************/
#pragma mark Constants
/*********************/

extern NSString * const SA_BOT_ENVIRONMENT;

/**************************************/
#pragma mark - SA_Bot class declaration
/**************************************/

@interface SA_Bot : NSObject

/************************/
#pragma mark - Properties
/************************/

@property (assign) id <SA_BotDelegate> delegate;
@property (strong) NSNumber *uniqueID;
@property (strong) NSString *name;

/********************************************/
#pragma mark - Initializers & factory methods
/********************************************/

- (instancetype)init;
- (instancetype)initWithName:(NSString *)name NS_DESIGNATED_INITIALIZER;
+ (instancetype)bot;
+ (instancetype)botWithName:(NSString *)name;

/****************************/
#pragma mark - Public methods
/****************************/

- (void)message:(NSString *)message withInfo:(NSDictionary *)messageInfo;
- (void)attributedMessage:(NSAttributedString *)attributedMessage withInfo:(NSDictionary *)messageInfo;

@end
