//
//  SA_Bot.m

#import "SA_Bot.h"

#import "SA_BotDelegate.h"

/*********************/
#pragma mark Constants
/*********************/

NSString * const SA_BOT_ENVIRONMENT		=	@"SA_BOT_ENVIRONMENT";

/*****************************************/
#pragma mark - SA_Bot class implementation
/*****************************************/

@implementation SA_Bot

/********************************************/
#pragma mark - Initializers & factory methods
/********************************************/

- (instancetype)init
{
	return [self initWithName:@"SA_Bot"];
}

- (instancetype)initWithName:(NSString *)name
{
	if(self = [super init])
	{
		self.name = name;
	}
	return self;
}

+ (instancetype)bot
{
	return [[self alloc] initWithName:@"SA_Bot"];
}

+ (instancetype)botWithName:(NSString *)name
{
	return [[self alloc] initWithName:name];
}

/****************************/
#pragma mark - Public methods
/****************************/

- (void)message:(NSString *)messageBody withInfo:(NSDictionary *)messageInfo
{
	NSLog(@"Bot received message:");
	NSLog(@"%@", messageBody);
	NSLog(@"with info:");
	NSLog(@"%@", messageInfo);
	
	NSString *reply = [NSString stringWithFormat:@"Replying to message: %@", messageBody];
	
	[self.delegate SA_botMessage:reply from:self withInfo:messageInfo];
}

- (void)attributedMessage:(NSAttributedString *)attributedMessageBody withInfo:(NSDictionary *)messageInfo
{
	[self message:attributedMessageBody.string withInfo:messageInfo];
}

@end
