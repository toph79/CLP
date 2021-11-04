#pragma once
// The iostream(Input/Output Stream) is the Header that will be used whenever Logging to console is needed, or getting user input.


// LOG_NEWLINE Creates a new line after logging, LOG does not.
#define LOG_NEWLINE(msg) std::cout << msg << std::endl;
#define LOG(msg) std::cout << msg;

#define GET_USER_INPUT std::cin.get():
