//
//  SA_BotDelegate.h
//
//	Copyright (c) 2016 Said Achmiz.
//
//	This software is licensed under the MIT license.
//	See the file "LICENSE" for more information.

@class SA_Bot;

@protocol SA_BotDelegate <NSObject>

- (void)SA_botMessage:(NSString *)messageBody from:(SA_Bot *)bot withInfo:(NSDictionary *)messageInfo;

@optional
- (void)SA_attributedBotMessage:(NSAttributedString *)attributedMessageBody from:(SA_Bot *)bot to:(NSDictionary *)messageInfo;

@end
