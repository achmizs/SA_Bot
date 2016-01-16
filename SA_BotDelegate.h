//
//  SA_BotDelegate.h
//  RPGBot
//
//  Created by Sandy Achmiz on 12/30/15.
//
//

#import <Cocoa/Cocoa.h>

@class SA_Bot;

@protocol SA_BotDelegate <NSObject>

- (void)SA_botMessage:(NSString *)messageBody from:(SA_Bot *)bot withInfo:(NSDictionary *)messageInfo;

@optional
- (void)SA_attributedBotMessage:(NSAttributedString *)attributedMessageBody from:(SA_Bot *)bot to:(NSDictionary *)messageInfo;

@end
