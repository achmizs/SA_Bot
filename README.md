# SA_Bot
A definition of a generic text/chat bot & bot platform.

The SA_Bot class and the SA_BotDelegate protocol together make up a spec for a generic text-bot platform. Any subclass of SA_Bot should be compatible with any bot platform implementation that conforms to the SA_BotDelegate protocol.

A "text bot", here, just means "code that can receive text strings, and can send text strings in reply". The source of such text strings (and the destination for replies) could be anything: a text-based console, a text entry field in a graphical program, some sort of chat protocol for communication across a network, files on disk, other chunks of code that programmatically generate and/or process text strings, etc. These text strings may originate from a human (and replies may be displayed to a human for them to read), or they may not be. Likewise, a "bot platform" is any code that implements the actual getting text strings from somewhere, and the sending of text strings to somewhere.

Some examples:

An SA_Bot subclass might be:

* A dice-bot (which parses incoming strings to extract commands to "roll dice", i.e. generate groups of random integers);
* A chat-bot (which does some natural language processing and replies in such a way as to 'carry on a conversation');
* A "math bot" (that parses mathematical expressions in incoming strings and replies with evaluated results);
* A wiki-bot (that can look up provided keywords in some wiki and reply with some text from the associated entries);
* A "database lookup bot" that can execute queries;
* A "text logger bot" that saves incoming strings to a file;
* Or any other piece of code that a) receives strings of text; b) does something on the basis of those received strings; and, potentially, c) sends replies to those strings.

Likewise, a "bot platform" (i.e. any implementation that consists of, or contains, a class that conforms to the SA_BotDelegate protocol) might be:

* A client that connects to an IRC server and sends and receives messages from users and channels there;
* A client that connects to some other online chat service; 
* Code that handles input and output to the command line of a text console;
* Code that handles input from a text entry field in a GUI application, and output to the screen;
* A Cocoa text service;
* Code that reads from a file or a database;
* Or any other piece of code that implements reading from one or more sources of text input and writing to one or more sources of text output.

The goal of the SA_Bot spec is to abstract the bot and the bot platform away from each other, so as to make individual implementations of both interchangeable with little (or, ideally, no) modification or adaptation needed. If the specification is followed, any bot should be able to work with any bot platform implementation, without having to modify either.

See the header files (SA_Bot.h and SA_BotDelegate.h) for more documentation.
